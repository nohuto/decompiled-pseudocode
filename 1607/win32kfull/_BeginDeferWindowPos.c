/*
 * XREFs of _BeginDeferWindowPos @ 0x1C00A7600
 * Callers:
 *     NtUserSetWindowBand @ 0x1C01218C0 (NtUserSetWindowBand.c)
 * Callees:
 *     AllocateCvr @ 0x1C00A6890 (AllocateCvr.c)
 */

__int64 __fastcall BeginDeferWindowPos(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  LOBYTE(a3) = 4;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3);
  if ( v4 )
  {
    if ( !a1 )
      a1 = 8;
    if ( (unsigned int)AllocateCvr(v4, a1) )
    {
      *(_DWORD *)(v4 + 24) |= 2u;
      return v4;
    }
    HMFreeObject(v4);
  }
  return 0LL;
}
