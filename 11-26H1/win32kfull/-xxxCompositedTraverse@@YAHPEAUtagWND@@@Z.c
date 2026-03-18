/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14011EC64
 * Callers:
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14011EC64 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14011EC64 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int v2; // esi
  struct tagWND *v4; // rax
  struct tagWND *v5; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  int v8; // eax
  struct tagWND *v9; // rdi
  _QWORD *v10; // rax
  ULONG_PTR *v11; // rdx
  ULONG_PTR v12; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-18h] BYREF
  struct tagWND *v15; // [rsp+38h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 136) || (*(_BYTE *)(v1 + 17) & 0x10) != 0 )
  {
    xxxSendMessage(a1, 0xFu);
    v2 = 1;
  }
  v4 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v5 = v4;
  while ( v4 )
  {
    v5 = v4;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  BugCheckParameter3 = *(_QWORD *)(v7 + 448);
  *(_QWORD *)(v7 + 448) = &BugCheckParameter3;
  v15 = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    do
    {
      if ( !v5 )
        break;
      v8 = xxxCompositedTraverse(v5);
      v5 = (struct tagWND *)*((_QWORD *)v5 + 12);
      v9 = v15;
      if ( v8 )
        v2 = 1;
      v15 = v5;
      if ( v5 )
        HMLockObject(v5);
    }
    while ( v9 && HMUnlockObject(v9) );
  }
  v10 = (_QWORD *)PsGetCurrentThreadWin32Thread(v7);
  if ( v10 )
    v10 = (_QWORD *)*v10;
  v11 = (ULONG_PTR *)v10[56];
  if ( v11 != &BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, (ULONG_PTR)v10, (ULONG_PTR)&BugCheckParameter3, 0LL);
  v10[56] = *v11;
  v12 = v11[1];
  if ( v12 )
    HMUnlockObject(v12);
  return v2;
}
