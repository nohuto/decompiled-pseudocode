/*
 * XREFs of MiInitializeSystemPtes @ 0x1407A4D44
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiObtainSystemVa @ 0x1400A3024 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x14013C940 (MiBuildDynamicRegion.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // r14
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  __int16 v4; // ax
  unsigned __int64 v5; // rdi
  char *AnyMultiplexedVm; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // al

  v0 = qword_140327F50;
  v1 = (((unsigned __int64)qword_140327F50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 1LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  if ( (dword_1403A913C & 2) != 0 )
    v2 = 3LL;
  v3 = (unsigned __int64)((v2 << 29) + 3145727) >> 21;
  v4 = ExGenRandom(1);
  qword_1403278C8 = qword_1403274D0;
  qword_140326AD8 = v0 + ((0x800000LL - ((unsigned int)v3 + (v4 & 0x3FFF))) << 21);
  v5 = qword_140326AD8 + 0x100000;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  qword_140327880 = v1;
  dword_140327888 = 3;
  v7 = (__int64)AnyMultiplexedVm;
  dword_14032788C = 9;
  qword_1403278A8 = (__int64)AnyMultiplexedVm;
  qword_140327890 = (__int64)&dword_140327898;
  qword_1403278C0 = 0LL;
  qword_1403278D0 = 0LL;
  qword_1403278B0 = 0LL;
  qword_1403278A0 = 0LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140327870, v5, 0x100000000LL, 17) )
    return 0LL;
  qword_140327870 = 0LL;
  if ( (dword_1403A913C & 2) != 0 )
  {
    if ( (unsigned int)MiInitializeDynamicBitmap(&qword_1403274C0, v5 + 0x20000000, 0x200000000LL, 17) == 1 )
      qword_140327870 = 0LL;
    else
      dword_1403A913C &= ~2u;
  }
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_DWORD)v3 )
  {
    v9 = (unsigned int)v3;
    do
    {
      v10 = 6 * ((*(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL);
      v11 = *(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL);
      v8 += 4096LL;
      *(_BYTE *)(8 * v10 - 0x57FFFFFFFDALL) = v11 & 0xF | 0x90;
      --v9;
    }
    while ( v9 );
  }
  qword_140326B18 = v7;
  if ( !(unsigned int)MiBuildDynamicRegion(&qword_140326AD0, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v3, 0xFu);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, v7, 4, 0x8000000uLL) )
    return 0LL;
  qword_140327570 = 0LL;
  return 1LL;
}
