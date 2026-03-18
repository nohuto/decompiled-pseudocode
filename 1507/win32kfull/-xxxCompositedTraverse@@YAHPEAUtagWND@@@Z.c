/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0224F5C
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0224F5C (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0225058 (xxxCompositedPaint.c)
 * Callees:
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0224F5C (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( *((_QWORD *)a1 + 20) || (*((_BYTE *)a1 + 41) & 0x10) != 0 )
  {
    xxxSendMessage(a1, 0xFu, 0LL, 0LL);
    v2 = 1;
  }
  v4 = *((_QWORD *)a1 + 12);
  v5 = v4;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 72);
  }
  v6 = gptiCurrent;
  v9[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v9;
  v9[1] = v5;
  if ( v5 )
  {
    ++*(_DWORD *)(v5 + 8);
    do
    {
      v7 = xxxCompositedTraverse((struct tagWND *)v5);
      v5 = *(_QWORD *)(v5 + 80);
      if ( v7 )
        v2 = 1;
    }
    while ( ThreadLockExchange(v5, (__int64)v9) && v5 );
  }
  ThreadUnlock1(v6, a2);
  return v2;
}
