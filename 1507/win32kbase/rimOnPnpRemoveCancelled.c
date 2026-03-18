/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C00C9CB0
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0076D6C (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  unsigned int v10; // [rsp+38h] [rbp-10h]

  v4 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x16u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
  v6 = *(void **)(a2 + 248);
  *(_DWORD *)(a2 + 184) &= ~4u;
  if ( v6 )
  {
    v7 = IoUnregisterPlugPlayNotification(v6);
    v8 = *(void **)(a2 + 32);
    v4 = v7;
    *(_QWORD *)(a2 + 248) = 0LL;
    ObfDereferenceObject(v8);
  }
  v10 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x17u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
    a1,
    a2,
    v10);
  return v4;
}
