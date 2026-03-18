/*
 * XREFs of sub_140261F50 @ 0x140261F50
 * Callers:
 *     sub_1406FFC40 @ 0x1406FFC40 (sub_1406FFC40.c)
 * Callees:
 *     sub_140587464 @ 0x140587464 (sub_140587464.c)
 */

__int64 __fastcall sub_140261F50(int a1, _DWORD *a2)
{
  int v3; // ecx
  int v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v3 = sub_140587464(4, a1, 4, &v6, (__int64)&v5);
  if ( v3 >= 0 )
  {
    if ( v5 == 4 )
      *a2 = v6;
    else
      return (unsigned int)-1073700221;
  }
  return (unsigned int)v3;
}
