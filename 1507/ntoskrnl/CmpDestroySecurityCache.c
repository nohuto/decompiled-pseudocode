/*
 * XREFs of CmpDestroySecurityCache @ 0x1404EE838
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
