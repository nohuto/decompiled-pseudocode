/*
 * XREFs of BeginSetWindowArrangement @ 0x1C020B3C4
 * Callers:
 *     NtUserSetWindowArrangement @ 0x1C0220980 (NtUserSetWindowArrangement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 */

__int64 __fastcall BeginSetWindowArrangement(__int64 a1, _OWORD *a2, __int128 *a3, int a4)
{
  unsigned int v6; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm1

  v6 = 0;
  v9 = Win32AllocPool(36LL);
  v10 = v9;
  if ( v9 )
  {
    *(_OWORD *)(v9 + 4) = *a2;
    v11 = *a3;
    *(_DWORD *)v9 = a4;
    *(_OWORD *)(v9 + 20) = v11;
    v6 = PostEventMessageEx(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL), 0x11u, a1, 0, 1LL, v9, 0LL);
    if ( !v6 )
      Win32FreePool(v10);
  }
  return v6;
}
