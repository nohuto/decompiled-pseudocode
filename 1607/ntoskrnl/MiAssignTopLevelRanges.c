/*
 * XREFs of MiAssignTopLevelRanges @ 0x1407AACF4
 * Callers:
 *     MiInitializeSystemVa @ 0x1407AA428 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiAssignSystemVa @ 0x1407AAFAC (MiAssignSystemVa.c)
 */

__int64 MiAssignTopLevelRanges()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rsi
  int v6; // eax
  __int64 result; // rax
  int *p_Base; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  int Base; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v12[83]; // [rsp+24h] [rbp-DCh] BYREF

  memset(v12, 0, sizeof(v12));
  Base = 0;
  v0 = v12;
  v12[5] = 1;
  *(_QWORD *)&v12[3] = 0x100000000000LL;
  *(_QWORD *)&v12[9] = 0xF8000000000LL;
  *(_QWORD *)&v12[15] = 0x100000000000LL;
  v1 = 5LL;
  *(_QWORD *)&v12[21] = 0x100000000000LL;
  *(_QWORD *)&v12[27] = 0x100000000000LL;
  v12[11] = 2;
  v12[17] = 3;
  v12[23] = 4;
  do
  {
    *v0 = ExGenRandom(1);
    v0 += 6;
    --v1;
  }
  while ( v1 );
  qsort(&Base, 5uLL, 0x18uLL, MiRegionAssignmentSort);
  v12[29] = 5;
  *(_QWORD *)&v12[33] = 0x60000000000LL;
  v12[35] = 7;
  *(_QWORD *)&v12[39] = 0x10000000000LL;
  v2 = &v12[36];
  v12[41] = 6;
  *(_QWORD *)&v12[45] = 0x8000000000LL;
  v3 = 8LL;
  *(_QWORD *)&v12[51] = 0x8000000000LL;
  *(_QWORD *)&v12[57] = 0x8000000000LL;
  *(_QWORD *)&v12[63] = 0x8000000000LL;
  *(_QWORD *)&v12[69] = 0x8000000000LL;
  *(_QWORD *)&v12[75] = 0x8000000000LL;
  *(_QWORD *)&v12[81] = 0x8000000000LL;
  v12[47] = 8;
  v12[53] = 9;
  v12[59] = 10;
  v12[65] = 11;
  v12[71] = 12;
  v12[77] = 13;
  do
  {
    *v2 = ExGenRandom(1);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  qsort(&v12[41], 7uLL, 0x18uLL, MiRegionAssignmentSort);
  v4 = (__int64 *)&v12[1];
  v5 = 14LL;
  do
  {
    v6 = *((_DWORD *)v4 - 2);
    if ( v6 != 6 )
    {
      if ( v6 == 13 )
      {
        *v4 = (__int64)((8 * (((unsigned __int64)MiAssignTopLevelRanges >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16 << 25 >> 16 << 25 >> 16 << 25 >> 16;
      }
      else
      {
        if ( v6 == 8 && (MiFlags & 0x200000) != 0 )
        {
          result = 0xFFFFF68000000000uLL;
        }
        else
        {
          result = MiAssignSystemVa((unsigned int)((unsigned __int64)(v4[1] + 0x7FFFFFFFFFLL) >> 32) >> 7);
          if ( !result )
            return result;
        }
        *v4 = result;
      }
    }
    LODWORD(v3) = v3 + 1;
    v4 += 3;
  }
  while ( (unsigned int)v3 < 0xE );
  p_Base = &Base;
  do
  {
    v9 = *((_QWORD *)p_Base + 1);
    v10 = *p_Base;
    p_Base += 6;
    v10 *= 2LL;
    MiState[v10 + 860] = v9;
    MiState[v10 + 861] = *((_QWORD *)p_Base - 1);
    --v5;
  }
  while ( v5 );
  result = 1LL;
  qword_140326D38 = qword_140327FD0 + 0xFFFFFFFFFFLL;
  return result;
}
