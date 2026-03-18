/*
 * XREFs of VfPoolCheckForLeaks @ 0x14074620C
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edx
  PSLIST_ENTRY result; // rax

  if ( *(_QWORD *)(a1 + 96) || *(_QWORD *)(a1 + 104) )
  {
    v4 = a2 + 88;
    v5 = *(_DWORD *)(a1 + 84);
    ViBadDriver = v4;
    VerifierBugCheckIfAppropriate(0xC4u, 0x62uLL, *(_QWORD *)(a2 + 96), a1, (unsigned int)(v5 + *(_DWORD *)(a1 + 80)));
  }
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
