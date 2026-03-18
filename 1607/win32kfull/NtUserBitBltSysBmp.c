/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C014B160
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, LONG a3, int a4, int a5, int a6, LONG a7, unsigned int a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx

  EnterCrit(0LL, 1LL);
  FixHDCBITSBmp(v13, v12, v14, v15);
  v16 = (int)NtGdiBitBltInternal(a1, a2, a3, a4, a5, *(HDC *)(gpDispInfo + 32LL), a6, a7, a8, 0, 0);
  UserSessionSwitchLeaveCrit(v18, v17);
  return v16;
}
