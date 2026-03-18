/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055270
 * Callers:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00FA5E4 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00FA62C (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005550C (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // ebx
  struct _KTHREAD *v12; // rbx
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rdi
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = *(_QWORD *)a1;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  if ( a2 )
  {
    if ( v4 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 4LL) = *((_DWORD *)a1 + 25);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 8LL) = *((_DWORD *)a1 + 26);
      CurrentThread = KeGetCurrentThread();
      v7 = *(_QWORD *)(W32GetThreadWin32Thread(CurrentThread) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(CurrentThread) + 280) + 20LL) = *(_DWORD *)(v7 + 4);
      v8 = KeGetCurrentThread();
      v9 = *(_QWORD *)(W32GetThreadWin32Thread(v8) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v8) + 280) + 24LL) = *(_DWORD *)(v9 + 8);
      vSpTlSpriteStateDirectDriverAccess(a1, a2);
      **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18);
      v10 = *((_DWORD *)a1 + 25);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v10;
      v11 = *((_DWORD *)a1 + 26);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v11;
      *((_DWORD *)a1 + 24) = 1;
    }
  }
  else if ( v4 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 12LL) = *((_DWORD *)a1 + 27);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 16LL) = *((_DWORD *)a1 + 28);
    v12 = KeGetCurrentThread();
    v13 = *(_QWORD *)(W32GetThreadWin32Thread(v12) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v12) + 280) + 20LL) = *(_DWORD *)(v13 + 12);
    v14 = KeGetCurrentThread();
    v15 = *(_QWORD *)(W32GetThreadWin32Thread(v14) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v14) + 280) + 24LL) = *(_DWORD *)(v15 + 16);
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18);
    v16 = *((_DWORD *)a1 + 27);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v16;
    v17 = *((_DWORD *)a1 + 28);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v17;
    *((_DWORD *)a1 + 24) = 0;
  }
}
