/*
 * XREFs of MiInitializeSystemPtes @ 0x1407A4D44
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x14013CEB0 (MiBuildDynamicRegion.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
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

  v0 = qword_140327F90;
  v1 = (((unsigned __int64)qword_140327F90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 1LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  if ( (dword_1403A913C & 2) != 0 )
    v2 = 3LL;
  v3 = (unsigned __int64)((v2 << 29) + 3145727) >> 21;
  v4 = ExGenRandom(1);
  qword_140327908 = qword_140327510;
  qword_140326B18 = v0 + ((0x800000LL - ((unsigned int)v3 + (v4 & 0x3FFF))) << 21);
  v5 = qword_140326B18 + 0x100000;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  qword_1403278C0 = v1;
  dword_1403278C8 = 3;
  v7 = (__int64)AnyMultiplexedVm;
  dword_1403278CC = 9;
  qword_1403278E8 = (__int64)AnyMultiplexedVm;
  qword_1403278D0 = (__int64)&dword_1403278D8;
  qword_140327900 = 0LL;
  qword_140327910 = 0LL;
  qword_1403278F0 = 0LL;
  qword_1403278E0 = 0LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_1403278B0, v5, 0x100000000LL, 17) )
    return 0LL;
  qword_1403278B0 = 0LL;
  if ( (dword_1403A913C & 2) != 0 )
  {
    if ( (unsigned int)MiInitializeDynamicBitmap(&qword_140327500, v5 + 0x20000000, 0x200000000LL, 17) == 1 )
      qword_1403278B0 = 0LL;
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
  qword_140326B58 = v7;
  if ( !(unsigned int)MiBuildDynamicRegion(&qword_140326B10, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v3, 0xFu);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, v7, 4, 0x8000000uLL) )
    return 0LL;
  qword_1403275B0 = 0LL;
  return 1LL;
}
