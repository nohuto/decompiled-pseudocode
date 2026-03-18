/*
 * XREFs of ?vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EE780
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EE89C (-vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BI@@@YAXXZ @ 0x1400EF45C (--$GrepAcquireLockValidate@$0BI@@@YAXXZ.c)
 */

void __fastcall vSrcOpaqCopyS8D24(
        const unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int v12; // esi
  int v13; // ebp
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  bool v17; // zf

  v12 = a3;
  v13 = a2;
  v15 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 13480LL);
  GreAcquireSemaphoreInternal(v15);
  GrepAcquireLockValidate<24>();
  vSrcOpaqCopyS8D24Unsafe(a1, v13, v12, a4, a5, a6, a7, a8, a9, a10, a11);
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
