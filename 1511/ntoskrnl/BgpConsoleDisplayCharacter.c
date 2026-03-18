/*
 * XREFs of BgpConsoleDisplayCharacter @ 0x1406DE3C8
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterEx @ 0x14021EF28 (BgpDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  int v9; // ebp
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // esi
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF

  v6 = a3;
  v7 = a2;
  BgpFwAcquireLock();
  if ( (dword_1402C9868 & 0x10000) != 0 )
  {
    AnFwFadeCompletion();
    dword_1402C9868 &= ~0x10000u;
  }
  v9 = a5;
  v10 = v6 + 25 * v7;
  v11 = 3 * v10;
  if ( *((_WORD *)&unk_1402C98B0 + 6 * v10 + 4) == a1
    && *((_DWORD *)&unk_1402C98B0 + 3 * v10) == a4
    && *((_DWORD *)&unk_1402C98B0 + 3 * v10 + 1) == a5 )
  {
    v12 = 0;
  }
  else
  {
    v12 = BgpDisplayCharacterEx(
            a1,
            (__int64 *)qword_1402C9888,
            dword_1402C989C + (int)v7 * dword_1402C9890,
            dword_1402C98A0 + (int)v6 * dword_1402C9894,
            a5,
            a4,
            &v16,
            &v15,
            v14);
    if ( v12 >= 0 )
    {
      *((_WORD *)&unk_1402C98B0 + 2 * v11 + 4) = a1;
      *((_DWORD *)&unk_1402C98B0 + v11) = a4;
      *((_DWORD *)&unk_1402C98B0 + v11 + 1) = v9;
    }
  }
  BgpFwReleaseLock();
  return (unsigned int)v12;
}
