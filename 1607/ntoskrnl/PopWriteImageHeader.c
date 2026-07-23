/*
 * XREFs of PopWriteImageHeader @ 0x1403DF1F4
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     tcpxsum @ 0x140167030 (tcpxsum.c)
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
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
  _OWORD *v17; // rcx
  __int64 *v18; // rax
  __int128 v19; // xmm1
  __int64 result; // rax
  __int64 (*v21)(void); // rcx

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  v8 = __rdtsc();
  qword_140303810 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_1403039C4 = ((unsigned int)dword_1403034E0 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  qword_140303840 = PerformanceCounter.QuadPart;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v11 = qword_140303990;
    v12 = qword_140303820;
    v13 = qword_140303818;
    do
    {
      v14 = v10++;
      v14 <<= 7;
      v11 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 56);
      qword_140303990 = v11;
      v13 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 40);
      qword_140303818 = v13;
      v12 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 80);
      qword_140303820 = v12;
    }
    while ( v10 < *(_DWORD *)(a1 + 264) );
  }
  qword_1403039A0 = qword_1403039B8;
  qword_1403039B0 = (unsigned int)dword_1403039C0;
  qword_1403039B8 += qword_140303998;
  v15 = qword_140303988;
  dword_1403039C0 += qword_1403039A8;
  *(_QWORD *)(a2 + 88) = qword_140303988;
  if ( byte_140303501 )
    *(_QWORD *)(a2 + 88) = qword_140303990 + v15;
  v16 = 3LL;
  v17 = (_OWORD *)(a2 + 136);
  v18 = &qword_1403037F8;
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
  v17[5] = *((_OWORD *)v18 + 5);
  *((_QWORD *)v17 + 12) = v18[12];
  *(_DWORD *)a2 = 1380075848;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x3C8u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(_QWORD *)(a1 + 168);
  v21 = *(__int64 (**)(void))(result + 72);
  if ( v21 )
    return v21();
  return result;
}
