/*
 * XREFs of PfFbBufferListCleanup @ 0x14058E1EC
 * Callers:
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall PfFbBufferListCleanup(__int64 a1)
{
  _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v3; // rax
  PSLIST_ENTRY v4; // rax
  PSLIST_ENTRY result; // rax
  ULONG v6; // edx
  ULONG v7; // edx

  for ( i = (_SLIST_HEADER *)(a1 + 32); ; i = (_SLIST_HEADER *)(a1 + 32) )
  {
    v3 = RtlpInterlockedPopEntrySList(i);
    if ( !v3 )
      break;
    if ( (*((_DWORD *)&v3[2].Next + 3) & 1) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 104) += (_DWORD)v3 - LODWORD(v3[2].Next);
      ExFreePoolWithTag(v3, v6);
    }
  }
  while ( 1 )
  {
    v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
    if ( !v4 )
      break;
    if ( (*((_DWORD *)&v4[2].Next + 3) & 1) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 104) += (_DWORD)v4 - LODWORD(v4[2].Next);
      ExFreePoolWithTag(v4, v7);
    }
  }
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48));
    if ( !result )
      break;
    *(_DWORD *)(a1 + 104) -= *((_DWORD *)&result[1].Next + 2);
    ExFreePoolWithTag(result, *(_DWORD *)(a1 + 68));
  }
  return result;
}
