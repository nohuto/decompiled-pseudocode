/*
 * XREFs of ACPIBuildProcessThermalZoneDep @ 0x1C0026720
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

__int64 __fastcall ACPIBuildProcessThermalZoneDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // rax
  const char *v7; // rdx
  volatile signed __int32 *v9; // rcx
  __int64 *v10; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 912) & 0x20) == 0 )
  {
    v9 = *(volatile signed __int32 **)(a1 + 56);
    if ( v9 )
    {
      AMLIDereferenceHandleEx(v9, v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v10 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v10;
    if ( v10 )
      v3 = AMLIAsyncEvalObject(v10, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x20uLL);
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)qword_1C002C340;
  v7 = (const char *)qword_1C002C340;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x47u,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v3,
    v1,
    v6,
    v7);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
