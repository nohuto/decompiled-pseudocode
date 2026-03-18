/*
 * XREFs of MiInitializeSystemPtes @ 0x140749E68
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeZeroSinglePage @ 0x140157440 (KeZeroSinglePage.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiEliminatePageTablesOfOnes @ 0x14074A504 (MiEliminatePageTablesOfOnes.c)
 *     MiInitializeDynamicRegion @ 0x14074A95C (MiInitializeDynamicRegion.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // r14
  __int64 v1; // r14
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r14
  ULONG_PTR v18; // rax
  unsigned int v19; // edi
  BOOL v20; // eax
  unsigned int v21; // esi
  bool v22; // zf
  unsigned __int64 v23; // r14
  void *v24; // rsi
  _QWORD *v25; // rbx
  __int16 v26; // ax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // [rsp+20h] [rbp+0h] BYREF
  void *v31; // [rsp+28h] [rbp+8h]

  v0 = 1LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  if ( (dword_1403810F0 & 2) != 0 )
    v0 = 3LL;
  v1 = v0 << 29;
  v2 = (unsigned __int64)(v1 + 0x1FFFFF) >> 21;
  v3 = (unsigned int)(v2 + 8) >> 3;
  v4 = v3 + 15;
  if ( v3 + 15 <= v3 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v5);
  v7 = alloca(v5);
  qword_1402FE790 = (unsigned int)(8 * v3);
  qword_1402FE798 = &v30;
  memset(&v30, 0, 4 * ((((8 * (_BYTE)v3) & 0x1F) != 0) + ((unsigned __int64)qword_1402FE790 >> 5)));
  if ( !(unsigned int)MiInitializeDynamicRegion(9LL, 0xFFFFD00000000000uLL, 0x100000000000LL) )
    return 0LL;
  v8 = MiObtainSystemVa(v2, 9u);
  if ( !v8 )
    return 0LL;
  qword_1402FF800 = qword_1402FF0D0;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_1402FF7B0, v8, 0x100000000LL, 1) )
    return 0LL;
  if ( (dword_1403810F0 & 2) != 0
    && !(unsigned int)MiInitializeDynamicBitmap(&qword_1402FF0C0, v8 + 0x20000000, 0x200000000LL, 1) )
  {
    dword_1403810F0 &= ~2u;
  }
  v9 = (v8 >> 9) & 0x7FFFFFFFF8LL;
  v10 = v9 - 0x98000000000LL;
  if ( (_DWORD)v2 )
  {
    v11 = (unsigned int)v2;
    do
    {
      v12 = v10;
      v10 += 4096LL;
      v13 = 3 * ((*(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL);
      *(_BYTE *)(16 * v13 - 0x57FFFFFFFDALL) = *(_BYTE *)(16 * v13 - 0x57FFFFFFFDALL) & 0xF | 0x90;
      --v11;
    }
    while ( v11 );
  }
  dword_1402FF7CC = 9;
  qword_1402FF7D0 = (__int64)&dword_1402FF7D8;
  v14 = v8 + v1;
  dword_1402FF7C8 = 11;
  qword_1402FF7E8 = (__int64)&dword_1402FFA80;
  qword_1402FF7B0 = 0LL;
  v15 = (v14 >> 9) & 0x7FFFFFFFF8LL;
  qword_1402FF7E0 = 0LL;
  qword_1402FF7C0 = v15 - 0x98000000000LL;
  qword_1402FF808 = 0LL;
  qword_1402FF7F0 = 0LL;
  MiEliminatePageTablesOfOnes(
    (((unsigned __int64)(v9 - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    (unsigned int)v2);
  byte_1402FFB58 = byte_1402FFB58 & 0xF8 | 4;
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&dword_1402FFA80, 0x8000000LL) )
    return 0LL;
  v17 = v14 & 0x1FFFFF;
  if ( (_DWORD)v17 )
  {
    v28 = (v15 - qword_1402FF7C0 - 0x98000000000LL) >> 3;
    v29 = (0x200000 - (unsigned __int64)(unsigned int)v17) >> 12;
    if ( (unsigned int)MiSplitBitmapPages(9u, qword_1402FF7B8 + (v28 >> 3), v29 + (v28 & 7)) == 1 )
    {
      qword_1402FF7B0 = v28 + v29;
      RtlClearBitsEx((__int64)&qword_1402FF7B0, v28, (0x200000 - v17) >> 12);
      _InterlockedExchangeAdd64(&qword_1402FF808, v29);
      _InterlockedExchangeAdd64(&qword_1402FF7F0, v29);
    }
    if ( (dword_1403810F0 & 2) != 0
      && !(unsigned int)MiSplitBitmapPages(9u, qword_1402FF0C8 + ((2 * v28) >> 3), ((2 * (_DWORD)v28) & 7) + 2 * v29) )
    {
      dword_1403810F0 &= ~2u;
    }
  }
  v18 = MiReservePtes((__int64)&qword_1402FF7B0, 0x100u, v16);
  if ( !v18 )
    return 0LL;
  MiInitializeDynamicBitmap(&v30, (__int64)(v18 << 25) >> 16, 0x800000LL, 1);
  v19 = 0;
  v20 = (v3 & 0xFFF) != 0;
  v21 = (unsigned int)v3 >> 12;
  v22 = v20 + v21 == 0;
  v23 = v20 + v21;
  v24 = v31;
  v25 = v31;
  if ( !v22 )
  {
    while ( (unsigned int)MiSplitBitmapPages(9u, (unsigned __int64)v25, 8LL) )
    {
      KeZeroSinglePage(v25);
      ++v19;
      v25 += 512;
      if ( v19 >= v23 )
        goto LABEL_18;
    }
    return 0LL;
  }
LABEL_18:
  memmove(v24, qword_1402FE798, (unsigned __int64)qword_1402FE790 >> 3);
  qword_1402FE790 = v30;
  qword_1402FE798 = v24;
  if ( v30 > 0x8000 )
    qword_1402FE790 = 0x8000LL;
  v26 = ExGenRandom(1);
  dword_1402FF7C8 &= ~8u;
  qword_1402FE7A8 = v26 & 0xFFF;
  return 1LL;
}
