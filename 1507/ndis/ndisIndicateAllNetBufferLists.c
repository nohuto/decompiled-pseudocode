/*
 * XREFs of ndisIndicateAllNetBufferLists @ 0x1C0022618
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 */

void __fastcall ndisIndicateAllNetBufferLists(_DWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // r15d
  int v4; // r14d
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  struct _NET_BUFFER_LIST *v8; // rdx
  unsigned int v9; // r9d

  if ( a2 )
  {
    v2 = a2;
    v3 = a1[172];
    v4 = a1[4] | 2;
    do
    {
      v6 = (_QWORD *)v2[53];
      v7 = 0LL;
      do
      {
        v8 = *(struct _NET_BUFFER_LIST **)&a1[10 * v7 + 16];
        v9 = a1[10 * v7 + 20];
        v7 = (unsigned int)(v7 + 1);
        if ( v8 )
          ndisMIndicateNetBufferListsToOpen(v2, v8, a1[10], v9, v4);
      }
      while ( (unsigned int)v7 <= v3 );
      v2 = v6;
    }
    while ( v6 );
  }
}
