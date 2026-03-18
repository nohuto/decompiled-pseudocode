/*
 * XREFs of DestroySMWP @ 0x1C0075EC0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00A5A00 (NtUserDeferWindowPosAndBand.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C0124110 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroySMWP(_DWORD *a1, __int64 a2, __int64 a3)
{
  BOOL v4; // edi
  __int64 v5; // rsi
  int v6; // ebp
  _QWORD *v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi

  if ( (a1[6] & 2) != 0 )
  {
    result = HMMarkObjectDestroy(a1);
    if ( !(_DWORD)result )
      return result;
    v4 = 1;
  }
  else
  {
    v4 = a1 != gSMWP;
  }
  v5 = *((_QWORD *)a1 + 5);
  if ( v5 )
  {
    v6 = a1[7] - 1;
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)(v5 + 120);
      do
      {
        if ( *v7 )
          GreDeleteObject(*v7);
        v7 += 21;
        --v6;
      }
      while ( v6 >= 0 );
    }
    if ( v4 )
      Win32FreePool(*((_QWORD *)a1 + 5), a2, a3);
  }
  if ( (a1[6] & 2) != 0 )
    return HMFreeObject(a1);
  if ( v4 )
    return Win32FreePool(a1, a2, a3);
  result = gdwPUDFlags;
  gdwPUDFlags &= ~0x40000000u;
  if ( (int)a1[8] > 8 )
  {
    result = Win32AllocPool(672LL, 2004054869LL);
    v11 = result;
    if ( result )
    {
      result = Win32FreePool(*((_QWORD *)a1 + 5), v9, v10);
      *((_QWORD *)a1 + 5) = v11;
      a1[8] = 4;
    }
  }
  a1[6] &= ~4u;
  return result;
}
