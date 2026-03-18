/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C0145310
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     FixHDCBITSBmp @ 0x1C00FBAA4 (FixHDCBITSBmp.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(
        HDC a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx

  EnterCrit(0LL, 1LL);
  FixHDCBITSBmp(v12);
  v13 = NtGdiBitBltInternal(a1, a2, a3, a4, a5, *(HDC *)(gpDispInfo + 32LL), a6, a7, a8, 0, 0);
  UserSessionSwitchLeaveCrit(v15, v14);
  return v13;
}
