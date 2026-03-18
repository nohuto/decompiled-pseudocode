/*
 * XREFs of PopHiberChecksumHiberFileData @ 0x1403A3170
 * Callers:
 *     PopRequestWrite @ 0x1403A1D5C (PopRequestWrite.c)
 *     PopRequestRead @ 0x1403A2D00 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     tcpxsum @ 0x14015B620 (tcpxsum.c)
 */

unsigned __int64 __fastcall PopHiberChecksumHiberFileData(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r8d
  _WORD *v17; // rsi
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+8h]

  result = __rdtsc();
  v10 = result;
  v20 = result;
  if ( *(_QWORD *)(a1 + 440) )
  {
    v11 = a2 ? *(_QWORD *)(a1 + 448) >> 1 : *(_QWORD *)(a1 + 424);
    v12 = a3 >> 9;
    if ( v12 < v11 )
    {
      v13 = a5;
      if ( (a5 & 0x1FF) != 0 )
        v13 = a5 - (a5 & 0x1FF) + 512;
      v14 = v13 >> 9;
      if ( v14 + v12 < v11 )
        v11 = v14 + v12;
      v15 = 0LL;
      if ( v12 < v11 )
      {
        do
        {
          v16 = a5 - v15;
          v17 = (_WORD *)(*(_QWORD *)(a1 + 440) + 2 * v12);
          if ( a5 - v15 > 0x200 )
            v16 = 512;
          v18 = tcpxsum(0, (const char *)(v15 + a4), v16);
          if ( a2 )
          {
            *v17 = v18;
          }
          else if ( (unsigned __int16)*v17 != v18 )
          {
            KeBugCheckEx(0xA0u, 0x10EuLL, 0xAuLL, (unsigned __int16)*v17, *(unsigned __int16 *)(a1 + 432));
          }
          v15 += 512LL;
          ++v12;
          *(_WORD *)(a1 + 432) = *v17;
        }
        while ( v12 < v11 );
        v10 = v20;
      }
      v19 = __rdtsc();
      result = (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v10;
      if ( a2 )
      {
        *(_QWORD *)(a1 + 424) = v12;
        qword_1402DE650 += result;
      }
      else
      {
        qword_1402DE778 += result;
      }
    }
  }
  return result;
}
