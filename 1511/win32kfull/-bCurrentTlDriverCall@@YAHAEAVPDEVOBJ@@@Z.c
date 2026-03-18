/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0053CC8
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0030880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1)
{
  unsigned int v2; // edi
  __int64 ThreadWin32Thread; // rbx
  __int64 v4; // rbx

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a1)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    return 0LL;
  }
  v4 = *(_QWORD *)a1 + 96LL;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 32LL) == v4 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v2;
}
