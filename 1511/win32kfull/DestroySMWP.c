/*
 * XREFs of DestroySMWP @ 0x1C0051890
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C55A0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroySMWP(_DWORD *a1)
{
  BOOL v2; // edi
  __int64 v3; // rsi
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdi

  if ( (a1[6] & 2) != 0 )
  {
    result = HMMarkObjectDestroy();
    if ( !(_DWORD)result )
      return result;
    v2 = 1;
  }
  else
  {
    v2 = a1 != gSMWP;
  }
  v3 = *((_QWORD *)a1 + 5);
  if ( v3 )
  {
    v4 = a1[7] - 1;
    if ( v4 >= 0 )
    {
      v5 = (_QWORD *)(v3 + 120);
      do
      {
        if ( *v5 )
          GreDeleteObject(*v5);
        v5 += 21;
        --v4;
      }
      while ( v4 >= 0 );
    }
    if ( v2 )
      Win32FreePool(*((_QWORD *)a1 + 5));
  }
  if ( (a1[6] & 2) != 0 )
    return HMFreeObject(a1);
  if ( v2 )
    return Win32FreePool(a1);
  result = gdwPUDFlags;
  gdwPUDFlags &= ~0x40000000u;
  if ( (int)a1[8] > 8 )
  {
    result = Win32AllocPool(672LL);
    v7 = result;
    if ( result )
    {
      result = Win32FreePool(*((_QWORD *)a1 + 5));
      *((_QWORD *)a1 + 5) = v7;
      a1[8] = 4;
    }
  }
  a1[6] &= ~4u;
  return result;
}
