/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C00088CC
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0008654 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     SubtractRect @ 0x1C008B93C (SubtractRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int16 v7; // r9
  __int64 k; // rbx
  int v9; // r8d
  __int64 v10; // rax
  __int64 *v11; // r9
  __int64 v12; // rdi
  __int64 i; // rdx
  __int64 j; // rax

  if ( !a1 )
    return IntersectRect(a2, a2, (char *)a3 + 24);
  if ( !(unsigned int)IsVisible() )
    return 0LL;
  k = *(_QWORD *)(v6 + 8);
  v9 = *(_DWORD *)(v6 + 48) & 2;
  if ( v9 )
  {
    if ( (v7 & 0x400) != 0 )
      return 0LL;
  }
  v10 = *(_QWORD *)(k + 88);
  if ( v5 == v10 )
    return IntersectRect(a2, a2, (char *)a3 + 24);
  v11 = (__int64 *)(v5 + 88);
  v12 = v5;
  for ( i = *(_QWORD *)(v5 + 88); v10 != i; i = *(_QWORD *)(i + 88) )
  {
    v5 = i;
    if ( !i )
      return 0LL;
  }
  if ( v5 == k )
  {
    if ( v9 )
    {
      if ( v12 != k )
      {
        for ( j = *v11; k != j; j = *(_QWORD *)(j + 88) )
          v12 = j;
        for ( k = *(_QWORD *)(k + 96); k && k != v12; k = *(_QWORD *)(k + 72) )
        {
          if ( (*(_BYTE *)(k + 55) & 0x10) != 0
            && !*(_QWORD *)(k + 200)
            && (*(_BYTE *)(k + 50) & 8) == 0
            && !(unsigned int)SubtractRect(a2, a2, k + 112) )
          {
            return 0LL;
          }
LABEL_29:
          ;
        }
      }
      return IntersectRect(a2, a2, (char *)a3 + 24);
    }
  }
  else
  {
    v12 = v5;
    while ( v5 != k )
    {
      v5 = *(_QWORD *)(v5 + 72);
      if ( !v5 )
        goto LABEL_29;
    }
  }
  return 0LL;
}
