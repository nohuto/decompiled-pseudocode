/*
 * XREFs of ?vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140289B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EE018 (-vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BI@@@YAXXZ @ 0x1400EF45C (--$GrepAcquireLockValidate@$0BI@@@YAXXZ.c)
 */

void __fastcall vSrcOpaqCopyS4D24(
        const unsigned __int8 *a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int v13; // ebp
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  bool v17; // zf

  v13 = a2;
  v15 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 13480LL);
  GreAcquireSemaphoreInternal(v15);
  GrepAcquireLockValidate<24>();
  vSrcOpaqCopyS4D24Unsafe(a1, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"EUDC2", v15);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v17 = (*(_QWORD *)v16 & 0xFFFFFFFFFEFFFFFFuLL) == 0;
      *(_QWORD *)v16 &= ~0x1000000uLL;
      if ( v17 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v15);
  }
}
