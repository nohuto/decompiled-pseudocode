/*
 * XREFs of ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180088CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x18008FD20 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeForDevice(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        HSTRING a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  const wchar_t *StringRawBuffer; // rbp
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  char *v10; // rbx
  __int64 v11; // rdi
  _DWORD *v12; // rcx
  HolographicDriverClientTrace *v13; // rcx
  UINT32 length; // [rsp+40h] [rbp-1C8h] BYREF
  DWORD v15[3]; // [rsp+44h] [rbp-1C4h] BYREF
  _BYTE InBuffer[400]; // [rsp+50h] [rbp-1B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  length = 0;
  *(_OWORD *)a3 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
  *((_DWORD *)a3 + 4) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  memset(InBuffer, 0, sizeof(InBuffer));
  _o_wcsncpy_s(InBuffer, 200LL, StringRawBuffer, length);
  v6 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 7);
  v15[0] = 0;
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v6,
         0x5B841Cu,
         InBuffer,
         0x190u,
         a3,
         0x10u,
         v15);
  if ( v7 < 0 )
  {
    v8 = 171LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v15[0] != 16 )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 80LL))(
         this,
         a3,
         (char *)a3 + 16);
  if ( v7 < 0 )
  {
    v8 = 175LL;
    goto LABEL_3;
  }
  v10 = (char *)this - 8;
  v11 = *((_QWORD *)this + 7);
  v12 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v12 )
  {
    if ( *v12 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        v13,
        v10,
        (const struct _GUID *)(v11 + 12),
        StringRawBuffer,
        a3);
    }
  }
  return 0LL;
}
