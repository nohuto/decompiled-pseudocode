/*
 * XREFs of MiMapCfgBitMapSection @ 0x140463740
 * Callers:
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 */

__int64 __fastcall MiMapCfgBitMapSection(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v6; // eax
  BOOL v7; // r9d
  char v9; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0;
  if ( *(_QWORD *)(a1 + 1064) )
    v7 = a2 == qword_14034E988;
  else
    v6 = 0x100000;
  return MiMapViewOfSection(a2, a1, a4, v7, 0LL, a3, a5, 1, v6, 1, -2147483647, (__int64)&v9);
}
