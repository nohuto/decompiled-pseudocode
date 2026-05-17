/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x1800E4DEC
 * Callers:
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 * Callees:
 *     RtlpStdExtendUpperWatermark @ 0x1800E4D10 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdLockAcquire @ 0x1800E4F68 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800E4F88 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rbx

  v2 = a2[7];
  v5 = 0;
  if ( a2[7] )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = a1 + 16LL * (v5 % *(_DWORD *)(a1 + 720));
  RtlpStdLockAcquire(v7 + 736);
  if ( a2[6] || a2[5] )
  {
    LODWORD(v9) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v8 = (_QWORD *)RtlpStdExtendUpperWatermark(a1);
    if ( v8 )
    {
      *v8 = a2;
      v9 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v8) >> 3;
      a2[6] = v9;
      a2[5] = WORD1(v9);
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  RtlpStdLockRelease(v7 + 736);
  return (unsigned int)v9;
}
