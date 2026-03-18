/*
 * XREFs of UnmapPrintKView @ 0x1400FD6F0
 * Callers:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1400FD7BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1400CEF7C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 *     ??$GrepAcquireLockValidate@$0BH@@@YAXXZ @ 0x140215F18 (--$GrepAcquireLockValidate@$0BH@@@YAXXZ.c)
 */

void __fastcall UnmapPrintKView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  HSEMAPHORE v5; // rbx
  _QWORD *i; // rdi
  struct _GRETHREAD *v7; // rax
  bool v8; // zf
  void *v9; // rcx

  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v5 = *(HSEMAPHORE *)(v4 + 24016);
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<23>();
  for ( i = *(_QWORD **)(v4 + 24008); i; i = (_QWORD *)i[4] )
  {
    if ( *i == a1 )
    {
      v9 = (void *)i[2];
      if ( v9 )
      {
        vUnmapFontFileInKernel(v9);
        i[2] = 0LL;
      }
    }
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PrintKView", v5);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
    {
      v8 = (*(_QWORD *)v7 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
      *(_QWORD *)v7 &= ~0x800000uLL;
      if ( v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
