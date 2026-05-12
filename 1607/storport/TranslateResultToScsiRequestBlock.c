/*
 * XREFs of TranslateResultToScsiRequestBlock @ 0x1C0009D68
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 * Callees:
 *     Template_zx @ 0x1C0033434 (Template_zx.c)
 */

__int64 __fastcall TranslateResultToScsiRequestBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v5; // r15
  unsigned int v6; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // rax
  __int64 v14; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v16; // rdx
  LARGE_INTEGER v17; // r8
  unsigned __int64 v18; // rtt
  unsigned __int64 v19; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v2) = 0;
  PerformanceFrequency.QuadPart = 1LL;
  v5 = 0;
  v6 = 0;
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( UseQPCTime )
    v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v13.QuadPart = KeQueryUnbiasedInterruptTime();
  v12 = v13;
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 60);
  if ( *(_BYTE *)(a2 + 3) == 48 )
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 44);
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v10 = 0;
    if ( *(_DWORD *)(a2 + 56) )
    {
      while ( 1 )
      {
        v11 = *(unsigned int *)(a2 + 4LL * v10 + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v9 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v11 <= (unsigned int)v9 )
          {
            v14 = *(unsigned int *)(a2 + 4LL * v10 + 120);
            if ( *(_DWORD *)(v11 + a2) == 64 && v11 + 40 <= v9 )
            {
              v5 = 1;
              *(_BYTE *)(a1 + 4) = *(_BYTE *)(v14 + a2 + 8);
              *(_QWORD *)(a1 + 32) = *(_QWORD *)(v14 + a2 + 16);
              *(_BYTE *)(a1 + 11) = *(_BYTE *)(v14 + a2 + 9);
            }
            if ( v5 )
              break;
          }
        }
        if ( ++v10 >= *(_DWORD *)(a2 + 56) )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      *(_BYTE *)(a1 + 3) = 48;
      v6 = -1073741811;
      *(_DWORD *)(a1 + 64) = -1073741811;
    }
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v12.QuadPart )
    v8 = PerformanceCounter.QuadPart - v12.QuadPart;
  else
    v8 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  if ( UseQPCTime )
  {
    if ( PerformanceFrequency.QuadPart && v8 )
    {
      v18 = 1000 * (v8 % PerformanceFrequency.QuadPart);
      v17.QuadPart = v18 / PerformanceFrequency.QuadPart + 1000 * (v8 / PerformanceFrequency.QuadPart);
      v19 = 10000 * (v18 % PerformanceFrequency.QuadPart);
      v16.QuadPart = v19 % PerformanceFrequency.QuadPart;
      v2 = v19 / PerformanceFrequency.QuadPart + 10000 * v17.QuadPart;
    }
  }
  else
  {
    LOBYTE(v2) = v8;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    Template_zx(
      Microsoft_Windows_StorPortEnableBits,
      v16.LowPart,
      v17.LowPart,
      (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
      v2);
  return v6;
}
