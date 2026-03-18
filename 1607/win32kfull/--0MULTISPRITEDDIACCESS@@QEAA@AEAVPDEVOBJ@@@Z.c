/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C011C09C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C011BCF0 (vSpDynamicModeChange.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

MULTISPRITEDDIACCESS *__fastcall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    v9 = *(_QWORD *)a2 + 96LL;
    *(_QWORD *)this = v9;
    if ( *(_DWORD *)(v9 + 68) )
    {
      v10 = 0LL;
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 72LL) + 8 * v10);
        if ( !*(_DWORD *)(v11 + 192) && (*(_DWORD *)(v11 + 56) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v11 + 96), 1LL, v7, v8);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *(_DWORD *)(*(_QWORD *)this + 68LL) );
    }
    else if ( !*(_DWORD *)(v9 + 96) && (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess((struct _SPRITESTATE *)v9, 1LL, v7, v8);
    }
  }
  return this;
}
