/*
 * XREFs of sfac_DoOffsetTableMap @ 0x1C00A5E38
 * Callers:
 *     fs_NewSfnt @ 0x1C00A50AC (fs_NewSfnt.c)
 * Callees:
 *     sfac_Classify @ 0x1C00A5F04 (sfac_Classify.c)
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     InvokeGetSfntFragmentPtr @ 0x1C00A6394 (InvokeGetSfntFragmentPtr.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall sfac_DoOffsetTableMap(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r9

  v2 = InvokeGetSfntFragmentPtr(*((unsigned int *)a1 + 2), *a1, 0LL, 12LL);
  if ( !v2 )
    return 4103LL;
  v3 = (__int16)__ROR2__(*(_WORD *)(v2 + 4), 8);
  InvokeReleaseSfntFrag(*((unsigned int *)a1 + 3));
  v4 = InvokeGetSfntFragmentPtr(*((unsigned int *)a1 + 2), *a1, 0LL, (unsigned int)(16 * v3 + 12));
  if ( !v4 )
    return 5128LL;
  memset(a1 + 3, 0, 0xB0uLL);
  v6 = v4 + 12;
  if ( v3 > 0 )
  {
    v7 = (unsigned int)v3;
    do
    {
      sfac_Classify(a1 + 3, v6, v5, v7);
      v6 = v8 + 16;
      v7 = v9 - 1;
    }
    while ( v7 );
  }
  *((_DWORD *)a1 + 48) = 0;
  *((_DWORD *)a1 + 49) = -1;
  InvokeReleaseSfntFrag(*((unsigned int *)a1 + 3));
  return 0LL;
}
