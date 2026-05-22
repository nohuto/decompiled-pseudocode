/*
 * XREFs of ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x1800645D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_ac879a184350821f45c5795b09041ac5_::operator() @ 0x180064754 (_lambda_ac879a184350821f45c5795b09041ac5_--operator().c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18006500C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall SpatialInteractionDevice::ReadHidReport(
        SpatialInteractionDevice *this,
        struct SpatialInteractionDevices::InputReport *a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rcx
  bool v5; // zf
  struct SpatialInteractionDevices::InputReport *v7; // r9
  SpatialInteractionDevice *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  DWORD *v11; // r8
  DWORD LastError; // eax
  unsigned int lpOverlapped; // [rsp+20h] [rbp-50h]
  SpatialInteractionDevice *v14; // [rsp+30h] [rbp-40h] BYREF
  DWORD *v15; // [rsp+38h] [rbp-38h]
  DWORD **p_p_NumberOfBytesRead; // [rsp+40h] [rbp-30h]
  DWORD *p_NumberOfBytesRead; // [rsp+48h] [rbp-28h] BYREF
  SpatialInteractionDevice *v18; // [rsp+50h] [rbp-20h]
  unsigned __int8 **v19; // [rsp+58h] [rbp-18h]
  struct SpatialInteractionDevices::HID_REPORT **v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  DWORD NumberOfBytesRead; // [rsp+80h] [rbp+10h] BYREF
  struct SpatialInteractionDevices::InputReport *v23; // [rsp+88h] [rbp+18h] BYREF
  unsigned __int8 *v24; // [rsp+90h] [rbp+20h] BYREF

  v24 = a3;
  v23 = a2;
  memset(a2, 0, 0x68uLL);
  if ( v24 )
    *v24 = 0;
  v4 = *((_QWORD *)this + 9);
  NumberOfBytesRead = 0;
  p_NumberOfBytesRead = &NumberOfBytesRead;
  v19 = &v24;
  v20 = &v23;
  v15 = &NumberOfBytesRead;
  v18 = this;
  v5 = *(_BYTE *)(v4 + 80) == 0;
  p_p_NumberOfBytesRead = &p_NumberOfBytesRead;
  v14 = this;
  if ( !v5 )
    goto LABEL_4;
  if ( ReadFile(
         *(HANDLE *)(v4 + 8),
         *(LPVOID *)(v4 + 240),
         *(unsigned __int16 *)(v4 + 108),
         &NumberOfBytesRead,
         (LPOVERLAPPED)(v4 + 48)) )
  {
    v8 = v18;
    v9 = *((_QWORD *)v18 + 9);
    if ( *p_NumberOfBytesRead == *(unsigned __int16 *)(v9 + 108) )
    {
      LODWORD(v14) = *(unsigned __int16 *)(v9 + 108);
      v11 = *(DWORD **)(v9 + 240);
      v15 = v11;
      if ( *v19 )
      {
        **v19 = *(_BYTE *)v11;
        v8 = v18;
      }
      return (unsigned int)SpatialInteractionDevices::ParseInputReport(
                             *((SpatialInteractionDevices **)v8 + 9),
                             (struct SpatialInteractionDevices::HID_HANDLE *)&v14,
                             *v20,
                             v7);
    }
    else
    {
      v10 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
        (const char *)0x8000FFFFLL);
    }
    return v10;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError == 997 )
    {
      *(_BYTE *)(*((_QWORD *)this + 9) + 80LL) = 1;
      v4 = *((_QWORD *)this + 9);
LABEL_4:
      if ( WaitForSingleObject(*(HANDLE *)(v4 + 72), 0) )
        return 2147483658LL;
      else
        return lambda_ac879a184350821f45c5795b09041ac5_::operator()(&v14);
    }
    if ( LastError )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0xBC,
               (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
               (const char *)LastError,
               lpOverlapped);
    else
      return 0LL;
  }
}
