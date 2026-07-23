/*
 * XREFs of SeAccessCheckFromStateEx @ 0x1400CD1B0
 * Callers:
 *     SeAccessCheckFromState @ 0x1400CF390 (SeAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 */

char __fastcall SeAccessCheckFromStateEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        char a8,
        int *a9,
        NTSTATUS *a10)
{
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h]
  __int64 v13; // [rsp+70h] [rbp-18h]
  __int64 v14; // [rsp+78h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v13 = a2;
  if ( a3 )
  {
    LODWORD(v12) = *(_DWORD *)(a3 + 196);
    v11 = a3;
  }
  return SeAccessCheckWithHint(a1, 0, (int *)&v11, 1, a4, a5, a6, a7, a8, a9, a10);
}
