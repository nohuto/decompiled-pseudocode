/*
 * XREFs of PopWriteImageHeader @ 0x1403B2510
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     tcpxsum @ 0x14015B620 (tcpxsum.c)
 *     PopWriteHiberPages @ 0x1403A0160 (PopWriteHiberPages.c)
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
  qword_1402DE638 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_1402DE7E4 = ((unsigned int)dword_1402DE300 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  qword_1402DE660 = PerformanceCounter.QuadPart;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v11 = qword_1402DE7B0;
    v12 = qword_1402DE648;
    v13 = qword_1402DE640;
    do
    {
      v14 = v10++;
      v14 <<= 7;
      v11 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 56);
      qword_1402DE7B0 = v11;
      v13 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 40);
      qword_1402DE640 = v13;
      v12 += *(_QWORD *)(*(_QWORD *)(a1 + 272) + v14 + 80);
      qword_1402DE648 = v12;
    }
    while ( v10 < *(_DWORD *)(a1 + 264) );
  }
  qword_1402DE7C0 = qword_1402DE7D8;
  qword_1402DE7D0 = (unsigned int)dword_1402DE7E0;
  qword_1402DE7D8 += qword_1402DE7B8;
  v15 = qword_1402DE7A8;
  dword_1402DE7E0 += qword_1402DE7C8;
  *(_QWORD *)(a2 + 88) = qword_1402DE7A8;
  if ( byte_1402DE321 )
    *(_QWORD *)(a2 + 88) = qword_1402DE7B0 + v15;
  v16 = 3LL;
  v17 = (_OWORD *)(a2 + 136);
  v18 = &qword_1402DE620;
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
