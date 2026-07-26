/*
 * XREFs of XFilterAdjust @ 0x1C0019CAC
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C0019A90 (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C0048478 (ndisSetRestorePacketFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XFilterAdjust(__int64 *a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx
  int v8; // eax
  int v10; // edx
  int v11; // edx

  if ( a2 )
  {
    if ( a3 && (a3 & 0x10080) == 0x10080 )
      a3 &= ~0x10000u;
    *(_DWORD *)(a2 + 436) = *(_DWORD *)(a2 + 432);
    *(_DWORD *)(a2 + 432) = a3;
  }
  v3 = *((_DWORD *)a1 + 76);
  *((_DWORD *)a1 + 76) = 0;
  *((_DWORD *)a1 + 77) = v3;
  v4 = *a1;
  if ( *a1 )
  {
    v11 = 0;
    do
    {
      v11 |= *(_DWORD *)(v4 + 432);
      *((_DWORD *)a1 + 76) = v11;
      v4 = *(_QWORD *)(v4 + 424);
    }
    while ( v4 );
  }
  v5 = a1[1];
  if ( v5 )
  {
    v10 = *((_DWORD *)a1 + 76);
    do
    {
      v10 |= *(_DWORD *)(v5 + 432);
      *((_DWORD *)a1 + 76) = v10;
      v5 = *(_QWORD *)(v5 + 424);
    }
    while ( v5 );
  }
  v6 = a1[2];
  if ( v6 )
  {
    v7 = *((_DWORD *)a1 + 76);
    do
    {
      v7 |= *(_DWORD *)(v6 + 432);
      *((_DWORD *)a1 + 76) = v7;
      v6 = *(_QWORD *)(v6 + 424);
    }
    while ( v6 );
  }
  v8 = *((_DWORD *)a1 + 76);
  if ( (v8 & 0x10000) != 0 )
    *((_DWORD *)a1 + 76) = v8 & 0xFFFEFFFF;
  return 259LL;
}
