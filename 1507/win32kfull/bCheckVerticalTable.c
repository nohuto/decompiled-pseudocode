/*
 * XREFs of bCheckVerticalTable @ 0x1C015A100
 * Callers:
 *     bLoadTTF @ 0x1C01425E4 (bLoadTTF.c)
 * Callees:
 *     bValidRangeGSUB @ 0x1C015A1A0 (bValidRangeGSUB.c)
 */

__int64 __fastcall bCheckVerticalTable(__int64 a1)
{
  unsigned int v1; // eax
  __int64 (__fastcall *v3)(__int64, unsigned int); // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r9

  v1 = *(_DWORD *)(a1 + 256);
  if ( v1 && *(_DWORD *)(a1 + 260) >= 0x24u && *(_DWORD *)(a1 + 248) )
    *(_WORD *)(a1 + 280) = __ROR2__(*(_WORD *)(*(_QWORD *)(a1 + 64) + v1 + 34LL), 8);
  else
    *(_WORD *)(a1 + 280) = 0;
  if ( *(_DWORD *)(a1 + 240) && (unsigned int)bValidRangeGSUB(a1, a1 + 276) )
  {
    v3 = SearchGsubTable;
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 232);
    if ( (_DWORD)v5
      && (v6 = *(unsigned int *)(a1 + 236), (unsigned int)v6 >= 0x4C)
      && 4 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(*(_QWORD *)(a1 + 64) + v5 + 68), 8) + 76 <= v6 )
    {
      *(_DWORD *)(a1 + 276) = v5;
      v3 = (__int64 (__fastcall *)(__int64, unsigned int))SearchMortTable;
    }
    else
    {
      *(_DWORD *)(a1 + 276) = 0;
      v3 = (__int64 (__fastcall *)(__int64, unsigned int))SearchDummyTable;
    }
  }
  *(_QWORD *)(a1 + 8) = v3;
  return 1LL;
}
