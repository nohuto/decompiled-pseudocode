/*
 * XREFs of ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026C7EC
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0274404 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0274E3C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0277C50 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0277FCC (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bConcurrent(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = *(_QWORD *)a1;
  v7 = ThreadWin32Thread;
  v8 = 0;
  v10 = v6;
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10)
    && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
  {
    return 1;
  }
  return v8;
}
