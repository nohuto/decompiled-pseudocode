/*
 * XREFs of PspWow64InitThreadGuestx86 @ 0x140530D98
 * Callers:
 *     PspWow64InitThread @ 0x140530C38 (PspWow64InitThread.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 */

__int64 __fastcall PspWow64InitThreadGuestx86(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  __int64 result; // rax

  v6 = a4;
  if ( (*(_DWORD *)(a1 + 768) & 0x20000) == 0 )
    v6 = a4 - 4 * (ExGenRandom(1) & 0x1FF);
  *(_DWORD *)(a2 + 184) = a3;
  *(_DWORD *)(a2 + 196) = v6 - 16;
  *(_DWORD *)(a2 + 176) = a5;
  *(_DWORD *)(a2 + 164) = a6;
  *(_DWORD *)(a2 + 140) = 43;
  *(_DWORD *)(a2 + 148) = 43;
  *(_DWORD *)(a2 + 152) = 43;
  *(_DWORD *)(a2 + 200) = 43;
  result = 639LL;
  *(_DWORD *)(a2 + 28) = 639;
  *(_WORD *)(a2 + 204) = 639;
  *(_DWORD *)(a2 + 144) = 83;
  *(_DWORD *)(a2 + 188) = 35;
  *(_DWORD *)(a2 + 228) = 8064;
  *(_DWORD *)a2 = 65543;
  return result;
}
