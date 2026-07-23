/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x1401E7930
 * Callers:
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1401E78A8 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1401E7EA4 (PpmIdleStartCsVetoAccounting.c)
 *     PpmIdleStopCsVetoAccounting @ 0x1401E7F40 (PpmIdleStopCsVetoAccounting.c)
 *     PopFxPlatformStateAvailable @ 0x1401EA850 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  LARGE_INTEGER v4; // rax
  unsigned int j; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // dl
  bool v9; // zf
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int i; // edx
  LARGE_INTEGER *v12; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    v8 = ~a2;
    v9 = (v8 & *(_BYTE *)(a1 + 24)) == 0;
    *(_BYTE *)(a1 + 24) &= v8;
    if ( v9 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v12 = (LARGE_INTEGER *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6));
        if ( v12[4].QuadPart )
          v12[6] = InterruptTimePrecise;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) |= a2;
    if ( *(_BYTE *)(a1 + 24) == a2 )
    {
      v4 = RtlGetInterruptTimePrecise(&PerformanceCounter);
      for ( j = 0; j < *(_DWORD *)(a1 + 28); ++j )
      {
        v6 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)j << 6);
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 56) += v4.QuadPart - v7;
          *(_QWORD *)(v6 + 48) = 0LL;
        }
      }
    }
  }
}
