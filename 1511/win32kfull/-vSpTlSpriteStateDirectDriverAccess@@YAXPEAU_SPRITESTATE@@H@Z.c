/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005550C
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00305D0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0030880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055270 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rcx
  __int64 (__usercall *v5)@<rax>(struct _SURFOBJ *@<rcx>, struct _SURFOBJ *@<rdx>, struct _CLIPOBJ *@<r8>, struct _XLATEOBJ *@<r9>, struct _RECTL *, struct _POINTL *, unsigned int, void *, struct _DSSTATE *); // rax

  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(CurrentThread) + 280) + 32LL) = a1;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 40LL) = *((_QWORD *)a1 + 152);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 48LL) = *((_QWORD *)a1 + 153);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 56LL) = *((_QWORD *)a1 + 154);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 72LL) = *((_QWORD *)a1 + 156);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 80LL) = *((_QWORD *)a1 + 157);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 88LL) = *((_QWORD *)a1 + 158);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 96LL) = *((_QWORD *)a1 + 159);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 104LL) = *((_QWORD *)a1 + 160);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 112LL) = *((_QWORD *)a1 + 161);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 120LL) = *((_QWORD *)a1 + 162);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 128LL) = *((_QWORD *)a1 + 163);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 136LL) = *((_QWORD *)a1 + 164);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 152LL) = *((_QWORD *)a1 + 166);
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 144LL) = *((_QWORD *)a1 + 165);
    v4 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    v5 = (__int64 (__usercall *)@<rax>(struct _SURFOBJ *@<rcx>, struct _SURFOBJ *@<rdx>, struct _CLIPOBJ *@<r8>, struct _XLATEOBJ *@<r9>, struct _RECTL *, struct _POINTL *, unsigned int, void *, struct _DSSTATE *))*((_QWORD *)a1 + 167);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(CurrentThread) + 280) + 32LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 40LL) = SpStrokeAndFillPath;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 48LL) = SpStrokePath;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 56LL) = SpFillPath;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 72LL) = SpBitBlt;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 80LL) = SpCopyBits;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 88LL) = SpStretchBlt;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 96LL) = SpTextOut;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 104LL) = SpLineTo;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 112LL) = SpTransparentBlt;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 120LL) = SpAlphaBlend;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 128LL) = SpPlgBlt;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 136LL) = SpGradientFill;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 152LL) = SpStretchBltROP;
    *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 144LL) = SpSaveScreenBits;
    v4 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    v5 = SpDrawStream;
  }
  *(_QWORD *)(v4 + 160) = v5;
}
