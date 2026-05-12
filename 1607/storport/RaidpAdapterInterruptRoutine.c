/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C001A6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     Template_pqqx @ 0x1C002A960 (Template_pqqx.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  char result; // al
  LARGE_INTEGER v5; // rbx
  char v6; // bp
  unsigned __int64 v7; // rax
  char CurrentProcessorNumber; // al
  int v9; // edx
  int v10; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  LODWORD(v2) = 0;
  result = 0;
  if ( *(_BYTE *)(a2 + 107) && *(int *)(a2 + 268) <= 1 )
  {
    if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x8000000) != 0 )
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v5 = PerformanceCounter;
    }
    else
    {
      v5.QuadPart = 0LL;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 528) + 24LL))(*(_QWORD *)(a2 + 536) + 16LL);
    if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x8000000) != 0 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v12.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v12.QuadPart <= 0 || v12.QuadPart >= v5.QuadPart )
        v7 = v12.QuadPart - v5.QuadPart;
      else
        v7 = v12.QuadPart - v5.QuadPart - 1;
      v14 = v7;
      if ( UseQPCTime )
      {
        if ( PerformanceFrequency.QuadPart && v7 )
          v2 = 10000
             * (1000 * (v7 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v7 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 1000 * (v7 / PerformanceFrequency.QuadPart));
      }
      else
      {
        LODWORD(v2) = v7;
      }
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      if ( (Microsoft_Windows_StorPortEnableBits & 0x8000000) != 0 )
        Template_pqqx(
          v2,
          v9,
          v10,
          (unsigned int)RaidpAdapterInterruptRoutine,
          *(_DWORD *)(a2 + 56),
          CurrentProcessorNumber,
          v2);
    }
    return v6;
  }
  return result;
}
