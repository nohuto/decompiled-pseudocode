/*
 * XREFs of SeAccessCheckFromStateEx @ 0x140060F6C
 * Callers:
 *     SeAccessCheckFromState @ 0x14000C090 (SeAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 */

__int64 __fastcall SeAccessCheckFromStateEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-18h]
  __int64 v16; // [rsp+78h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v15 = a2;
  if ( a3 )
  {
    LODWORD(v14) = *(_DWORD *)(a3 + 196);
    v13 = a3;
  }
  v11 = a4;
  LOBYTE(a4) = 1;
  return SeAccessCheckWithHint(a1, 0LL, &v13, a4, v11, a5, a6, a7, a8, a9, a10);
}
