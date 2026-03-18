/*
 * XREFs of ACPIBuildProcessThermalZoneFailure @ 0x1C0045050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_LLqss @ 0x1C0012410 (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneFailure(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rbx
  const char *v2; // rax
  __int64 v3; // r8
  const char *v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  int v9; // [rsp+20h] [rbp-38h]

  v1 = *((_QWORD *)&ListEntry[2].Next + 1);
  v2 = (const char *)qword_1C002C340;
  v3 = 0LL;
  v5 = (const char *)qword_1C002C340;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_LLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    v3,
    0x44u,
    v9,
    (char)ListEntry[2].Next,
    0,
    v3,
    v2,
    v5);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  if ( *(_QWORD *)(v1 + 568) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFEBFFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 568), 0);
    *(_QWORD *)(v1 + 568) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 560) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFF5FFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 560), 0);
    *(_QWORD *)(v1 + 560) = 0LL;
  }
  v7 = *(void **)(v1 + 200);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  return ACPIBuildProcessGenericComplete(ListEntry);
}
