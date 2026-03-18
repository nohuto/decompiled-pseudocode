/*
 * XREFs of CmpDestroySecurityCache @ 0x140499358
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403DDA84 (CmpValidateHiveSecurityDescriptors.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1405DEC98 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x1405E6A0C (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
