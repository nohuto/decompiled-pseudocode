/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C02844B0
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0284E18 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     FreeNonCachedUserMemWrap @ 0x1C0285560 (FreeNonCachedUserMemWrap.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0284438 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C0285020 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  struct _UMPDHEAP *v7; // rcx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    *((_QWORD *)this + 49) = 0LL;
  }
  else if ( *((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
    v7 = (struct _UMPDHEAP *)*((_QWORD *)this + 7);
    if ( *(struct _UMPDHEAP **)(ThreadWin32Thread + 56) != v7 )
      DestroyUMPDHeap(v7, v6);
    *((_QWORD *)this + 7) = 0LL;
  }
}
