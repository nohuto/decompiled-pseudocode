/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x1800F2C5C
 * Callers:
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 * Callees:
 *     RtlpStdExtendUpperWatermark @ 0x1800F2B80 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdLockAcquire @ 0x1800F2DD8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800F2DF8 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx

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
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)RtlpStdExtendUpperWatermark(a1, v8);
    if ( v9 )
    {
      *v9 = a2;
      v10 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v9) >> 3;
      a2[6] = v10;
      a2[5] = WORD1(v10);
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  RtlpStdLockRelease(v7 + 736);
  return (unsigned int)v10;
}
