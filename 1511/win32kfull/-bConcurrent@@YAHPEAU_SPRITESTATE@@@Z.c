/*
 * XREFs of ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026E32C
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02736E8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0275EB0 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02768F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0279700 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0279A7C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bConcurrent(struct _SPRITESTATE *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = *(_QWORD *)a1;
  v4 = ThreadWin32Thread;
  v5 = 0;
  v7 = v3;
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7)
    && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
  {
    return 1;
  }
  return v5;
}
