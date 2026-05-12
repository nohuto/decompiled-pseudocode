/*
 * XREFs of RaidpAdapterMSIInterruptRoutine @ 0x1C0006100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     Template_pqqx @ 0x1C00272E0 (Template_pqqx.c)
 */

__int64 __fastcall RaidpAdapterMSIInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 result; // rax
  LARGE_INTEGER v7; // rbx
  unsigned __int8 v8; // si
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // rax
  char CurrentProcessorNumber; // al
  int v13; // edx
  int v14; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v3) = 0;
  result = 0LL;
  if ( *(_BYTE *)(a2 + 107) && *(int *)(a2 + 268) <= 1 )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
    {
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v7 = PerformanceCounter;
    }
    else
    {
      v7.QuadPart = 0LL;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 456))(*(_QWORD *)(a2 + 536) + 16LL, a3);
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v10.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v10.QuadPart <= 0 || v10.QuadPart >= v7.QuadPart )
        v11 = v10.QuadPart - v7.QuadPart;
      else
        v11 = v10.QuadPart - v7.QuadPart - 1;
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      {
        if ( PerformanceFrequency.QuadPart && v11 )
          v3 = 10000
             * (1000 * (v11 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v11 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 1000 * (v11 / PerformanceFrequency.QuadPart));
      }
      else
      {
        LODWORD(v3) = v11;
      }
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
        Template_pqqx(
          v3,
          v13,
          v14,
          (unsigned int)RaidpAdapterMSIInterruptRoutine,
          *(_DWORD *)(a2 + 56),
          CurrentProcessorNumber,
          v3);
    }
    return v8;
  }
  return result;
}
