/*
 * XREFs of PopWriteImageHeader @ 0x14040374C
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     tcpxsum @ 0x14018B100 (tcpxsum.c)
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteImageHeader(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rax
  __int64 *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int64 result; // rax
  __int64 (*v22)(void); // rcx

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  v8 = __rdtsc();
  qword_14032EBF8 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_14032EDA4 = ((unsigned int)dword_14032E8C0 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  qword_14032EC20 = PerformanceCounter.QuadPart;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v11 = qword_14032ED70;
    v12 = qword_14032EC08;
    v13 = qword_14032EC00;
    do
    {
      v14 = v10++;
      v14 <<= 7;
      v11 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 56);
      qword_14032ED70 = v11;
      v13 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 40);
      qword_14032EC00 = v13;
      v12 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 80);
      qword_14032EC08 = v12;
    }
    while ( v10 < *(_DWORD *)(a1 + 264) );
  }
  qword_14032ED80 = qword_14032ED98;
  qword_14032ED90 = (unsigned int)dword_14032EDA0;
  qword_14032ED98 += qword_14032ED78;
  v15 = qword_14032ED68;
  dword_14032EDA0 += qword_14032ED88;
  *(_QWORD *)(a2 + 88) = qword_14032ED68;
  if ( byte_14032E8E1 )
    *(_QWORD *)(a2 + 88) = qword_14032ED70 + v15;
  v16 = 3LL;
  v17 = (_OWORD *)(a2 + 136);
  v18 = &qword_14032EBE0;
  do
  {
    *v17 = *(_OWORD *)v18;
    v17[1] = *((_OWORD *)v18 + 1);
    v17[2] = *((_OWORD *)v18 + 2);
    v17[3] = *((_OWORD *)v18 + 3);
    v17[4] = *((_OWORD *)v18 + 4);
    v17[5] = *((_OWORD *)v18 + 5);
    v17[6] = *((_OWORD *)v18 + 6);
    v17 += 8;
    v19 = *((_OWORD *)v18 + 7);
    v18 += 16;
    *(v17 - 1) = v19;
    --v16;
  }
  while ( v16 );
  *v17 = *(_OWORD *)v18;
  v17[1] = *((_OWORD *)v18 + 1);
  v17[2] = *((_OWORD *)v18 + 2);
  v17[3] = *((_OWORD *)v18 + 3);
  v17[4] = *((_OWORD *)v18 + 4);
  v20 = *((_OWORD *)v18 + 5);
  *(_DWORD *)a2 = 1380075848;
  v17[5] = v20;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x3B0u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(_QWORD *)(a1 + 168);
  v22 = *(__int64 (**)(void))(result + 72);
  if ( v22 )
    return v22();
  return result;
}
