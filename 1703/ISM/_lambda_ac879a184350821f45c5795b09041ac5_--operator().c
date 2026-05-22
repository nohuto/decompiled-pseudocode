/*
 * XREFs of _lambda_ac879a184350821f45c5795b09041ac5_::operator() @ 0x180064754
 * Callers:
 *     ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x1800645D0 (-ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 */

__int64 __fastcall lambda_ac879a184350821f45c5795b09041ac5_::operator()(__int64 a1)
{
  struct SpatialInteractionDevices::InputReport *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // r8d
  unsigned int v6; // ebx
  _BYTE **v7; // rax
  _BYTE *v8; // rdx
  int v10; // [rsp+20h] [rbp-18h] BYREF
  _BYTE *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !GetOverlappedResult(
          *(HANDLE *)(*(_QWORD *)(*(_QWORD *)a1 + 72LL) + 8LL),
          (LPOVERLAPPED)(*(_QWORD *)(*(_QWORD *)a1 + 72LL) + 48LL),
          *(LPDWORD *)(a1 + 8),
          0) )
    return 2147483658LL;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 72LL) + 80LL) = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
  v5 = *(unsigned __int16 *)(v4 + 108);
  if ( **(_DWORD **)v3 == v5 )
  {
    v7 = *(_BYTE ***)(v3 + 16);
    v8 = *(_BYTE **)(v4 + 240);
    v10 = v5;
    v11 = v8;
    if ( *v7 )
      **v7 = *v8;
    return (unsigned int)SpatialInteractionDevices::ParseInputReport(
                           *(SpatialInteractionDevices **)(*(_QWORD *)(v3 + 8) + 72LL),
                           (struct SpatialInteractionDevices::HID_HANDLE *)&v10,
                           **(struct SpatialInteractionDevices::HID_REPORT ***)(v3 + 24),
                           v2);
  }
  else
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)0x8000FFFFLL);
  }
  return v6;
}
