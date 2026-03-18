/*
 * XREFs of MiInitializeSystemPtes @ 0x1407CA5BC
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400688D0 (MiSplitBitmapPages.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeZeroSinglePage @ 0x140186BB0 (KeZeroSinglePage.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiEliminatePageTablesOfOnes @ 0x1407CB738 (MiEliminatePageTablesOfOnes.c)
 *     MiInitializeDynamicRegion @ 0x1407CBDF8 (MiInitializeDynamicRegion.c)
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
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 *v21; // rax
  unsigned int v22; // edi
  BOOL v23; // eax
  unsigned int v24; // esi
  bool v25; // zf
  unsigned __int64 v26; // r14
  void *v27; // rsi
  _QWORD *v28; // rbx
  __int16 v29; // ax
  unsigned __int64 v30; // [rsp+20h] [rbp+0h] BYREF
  void *v31; // [rsp+28h] [rbp+8h]

  v0 = 1LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  if ( (dword_1403D00E0 & 2) != 0 )
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
  qword_14034EC50 = (unsigned int)(8 * v3);
  qword_14034EC58 = &v30;
  memset(&v30, 0, 4 * ((((8 * (_BYTE)v3) & 0x1F) != 0) + ((unsigned __int64)qword_14034EC50 >> 5)));
  if ( !(unsigned int)MiInitializeDynamicRegion(9LL, 0xFFFFD00000000000uLL, 0x100000000000LL) )
    return 0LL;
  v9 = MiObtainSystemVa(v2, 9);
  if ( !v9 )
    return 0LL;
  qword_14034FCC0 = qword_14034F590;
  if ( !(unsigned int)MiInitializeDynamicBitmap((unsigned __int64 *)&qword_14034FC70, v9, 0x100000000uLL, 1) )
    return 0LL;
  if ( (dword_1403D00E0 & 2) != 0
    && !(unsigned int)MiInitializeDynamicBitmap(&qword_14034F580, v9 + 0x20000000, 0x200000000uLL, 1) )
  {
    dword_1403D00E0 &= ~2u;
  }
  v10 = (v9 >> 9) & 0x7FFFFFFFF8LL;
  v11 = v10 - 0x98000000000LL;
  if ( (_DWORD)v2 )
  {
    v12 = (unsigned int)v2;
    do
    {
      v13 = v11;
      v11 += 4096LL;
      v14 = 3 * ((*(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL);
      *(_BYTE *)(16 * v14 - 0x57FFFFFFFDALL) = *(_BYTE *)(16 * v14 - 0x57FFFFFFFDALL) & 0xF | 0x90;
      --v12;
    }
    while ( v12 );
  }
  dword_14034FC8C = 9;
  qword_14034FC90 = (__int64)&dword_14034FC98;
  v15 = v9 + v1;
  dword_14034FC88 = 11;
  qword_14034FCA8 = (__int64)dword_14034FF40;
  qword_14034FC70 = 0LL;
  v16 = (v15 >> 9) & 0x7FFFFFFFF8LL;
  qword_14034FCA0 = 0LL;
  qword_14034FC80 = v16 - 0x98000000000LL;
  qword_14034FCC8 = 0LL;
  qword_14034FCB0 = 0LL;
  MiEliminatePageTablesOfOnes(
    (((unsigned __int64)(v10 - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    (unsigned int)v2);
  byte_140350018 = byte_140350018 & 0xF8 | 4;
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(dword_14034FF40, 0x8000000LL) )
    return 0LL;
  v18 = v15 & 0x1FFFFF;
  if ( (_DWORD)v18 )
  {
    v19 = (v16 - qword_14034FC80 - 0x98000000000LL) >> 3;
    v20 = (0x200000 - (unsigned __int64)(unsigned int)v18) >> 12;
    if ( (unsigned int)MiSplitBitmapPages(9u, qword_14034FC78 + (v19 >> 3), v20 + (v19 & 7)) == 1 )
    {
      qword_14034FC70 = v19 + v20;
      RtlClearBitsEx((__int64)&qword_14034FC70, v19, (0x200000 - v18) >> 12);
      _InterlockedExchangeAdd64(&qword_14034FCC8, v20);
      _InterlockedExchangeAdd64(&qword_14034FCB0, v20);
    }
    if ( (dword_1403D00E0 & 2) != 0
      && !(unsigned int)MiSplitBitmapPages(9u, qword_14034F588 + ((2 * v19) >> 3), ((2 * (_DWORD)v19) & 7) + 2 * v20) )
    {
      dword_1403D00E0 &= ~2u;
    }
  }
  v21 = MiReservePtes((__int64)&qword_14034FC70, 0x100u, v17);
  if ( !v21 )
    return 0LL;
  MiInitializeDynamicBitmap(&v30, (__int64)((_QWORD)v21 << 25) >> 16, 0x800000uLL, 1);
  v22 = 0;
  v23 = (v3 & 0xFFF) != 0;
  v24 = (unsigned int)v3 >> 12;
  v25 = v23 + v24 == 0;
  v26 = v23 + v24;
  v27 = v31;
  v28 = v31;
  if ( !v25 )
  {
    while ( (unsigned int)MiSplitBitmapPages(9u, (unsigned __int64)v28, 8LL) )
    {
      KeZeroSinglePage(v28);
      ++v22;
      v28 += 512;
      if ( v22 >= v26 )
        goto LABEL_26;
    }
    return 0LL;
  }
LABEL_26:
  memmove(v27, qword_14034EC58, (unsigned __int64)qword_14034EC50 >> 3);
  qword_14034EC50 = v30;
  qword_14034EC58 = v27;
  if ( v30 > 0x8000 )
    qword_14034EC50 = 0x8000LL;
  v29 = ExGenRandom(1);
  dword_14034FC88 &= ~8u;
  qword_14034EC68 = v29 & 0xFFF;
  return 1LL;
}
