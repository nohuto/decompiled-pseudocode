/*
 * XREFs of CmpDestroySecurityCache @ 0x1405181E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpFreeAllMemory @ 0x1405FCB30 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x140606018 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDestroySecurityCache(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rdx
  __int64 **v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 3040); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * i + 8);
    v4 = *(__int64 ***)(v3 + 16);
    v5 = (__int64 *)(v3 + 8);
    v6 = (__int64 *)*v5;
    if ( *(__int64 **)(*v5 + 8) != v5 || *v4 != v5 )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = (__int64)v4;
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 3056) + 16LL * i + 8), 0x63534D43u);
  }
  if ( *(_DWORD *)(a1 + 3040) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 3056), 0x63534D43u);
  *(_QWORD *)(a1 + 3056) = 0LL;
  *(_DWORD *)(a1 + 3040) = 0;
  *(_DWORD *)(a1 + 3044) = 0;
}
