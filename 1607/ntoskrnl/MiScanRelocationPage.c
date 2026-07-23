/*
 * XREFs of MiScanRelocationPage @ 0x140507FA0
 * Callers:
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiCreateFixupRecord @ 0x1404C61FC (MiCreateFixupRecord.c)
 */

__int64 __fastcall MiScanRelocationPage(__int64 a1, unsigned int a2, int a3, _WORD *a4, _DWORD *a5, _QWORD *a6)
{
  _DWORD *v6; // r15
  __int64 v8; // rbp
  int v9; // r13d
  unsigned int v10; // r12d
  int v11; // edx
  int v12; // r8d
  __int64 v14; // r11
  unsigned int i; // r14d
  unsigned __int16 v16; // bx
  __int16 v17; // ax
  __int64 result; // rax

  v6 = a5;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v14 = a1;
  for ( i = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL); a3; ++a4 )
  {
    --a3;
    v16 = *a4 & 0xFFF;
    v17 = *a4 >> 12;
    if ( v17 )
    {
      if ( v17 == 3 )
      {
        if ( v16 > 0xFFCu )
        {
          v9 = 2;
          v10 = 4;
          v11 = 1;
        }
      }
      else
      {
        if ( v17 != 10 )
          return 3221226089LL;
        if ( v16 > 0xFF8u )
        {
          v9 = 0;
          v10 = 8;
          v11 = 1;
        }
      }
    }
    if ( v17 && ((v8 & 0xFFF) != 0 && (unsigned __int64)((v8 & 0xFFF) + v16) > 0xFFE || (unsigned int)v8 + v16 < i) )
      return 3221226089LL;
    if ( v11 == 1 )
    {
      if ( v12 == 1 )
        return 3221225595LL;
      result = MiCreateFixupRecord((__int64)v6, v14, (unsigned int)v8 + v16, v9, v10, a4, a6);
      if ( (int)result < 0 )
        return result;
      if ( (MiFlags & 0x10000) != 0
        && (v6[23] & 0xC000000) != 0
        && (*(_BYTE *)(MiOffsetToProtos(v6, v8 + v10 + (unsigned __int64)v16, (unsigned __int64 *)&a5) + 32) & 4) != 0 )
      {
        return 3221225595LL;
      }
      v14 = a1;
      v11 = 0;
      v12 = 1;
    }
  }
  return 0LL;
}
