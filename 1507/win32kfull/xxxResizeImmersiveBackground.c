/*
 * XREFs of xxxResizeImmersiveBackground @ 0x1C01EFD20
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxResizeImmersiveBackground(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(result + 200);
  if ( v4 )
  {
    result = MonitorFromWindow(*(_QWORD *)(result + 200), 2LL, a3);
    if ( result )
    {
      v7[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v7;
      v7[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      xxxSetWindowPosAndBand(
        (struct tagWND *)v4,
        0LL,
        *(_DWORD *)(result + 28),
        *(_DWORD *)(result + 32),
        *(_DWORD *)(result + 36) - *(_DWORD *)(result + 28),
        *(_DWORD *)(result + 40) - *(_DWORD *)(result + 32),
        284,
        0);
      return ThreadUnlock1(v6, v5);
    }
  }
  return result;
}
