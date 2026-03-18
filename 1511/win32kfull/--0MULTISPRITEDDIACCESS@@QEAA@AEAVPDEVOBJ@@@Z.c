/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00FA62C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00FA280 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055270 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

MULTISPRITEDDIACCESS *__fastcall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    v5 = *(_QWORD *)a2 + 96LL;
    *(_QWORD *)this = v5;
    if ( *(_DWORD *)(v5 + 68) )
    {
      v6 = 0LL;
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 72LL) + 8 * v6);
        if ( !*(_DWORD *)(v7 + 192) && (*(_DWORD *)(v7 + 56) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v7 + 96), 1);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 68LL) );
    }
    else if ( !*(_DWORD *)(v5 + 96) && (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1);
    }
  }
  return this;
}
