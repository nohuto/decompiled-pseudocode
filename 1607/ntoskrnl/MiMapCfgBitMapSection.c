/*
 * XREFs of MiMapCfgBitMapSection @ 0x1404C16AC
 * Callers:
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 * Callees:
 *     MmMapSecureViewOfSection @ 0x14040C068 (MmMapSecureViewOfSection.c)
 */

__int64 __fastcall MiMapCfgBitMapSection(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  BOOL v6; // r9d
  int v7; // eax
  int v9; // [rsp+20h] [rbp-48h]
  char v10; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0;
  if ( *(_QWORD *)(a1 + 1064) )
    v6 = a2 == qword_1403267C8;
  else
    v7 = 0x100000;
  return MmMapSecureViewOfSection(a2, a1, a4, v6, v9, a3, a5, 1, v7, 1, -2147483647, (__int64)&v10);
}
