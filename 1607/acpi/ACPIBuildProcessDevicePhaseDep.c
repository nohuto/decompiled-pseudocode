/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C000EF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 912) & 0x20) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( v9 )
    {
      AMLIDereferenceHandleEx(v9, v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v10 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v10;
    if ( v10 )
      v3 = AMLIAsyncEvalObject(v10, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x20uLL);
  }
  *(_DWORD *)(a1 + 32) = 5;
  v5 = qword_1C002C340;
  v6 = *(_QWORD *)(v1 + 8);
  v7 = qword_1C002C340;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v5 = *(__int64 **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v7 = *(__int64 **)(v1 + 568);
  }
  v11 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    6,
    28,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v3,
    v1,
    (__int64)v5,
    v11);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
