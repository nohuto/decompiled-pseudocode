/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C00157F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     Template_pqqx @ 0x1C00272E0 (Template_pqqx.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  char result; // al
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v6; // rbx
  char v7; // bp
  LARGE_INTEGER v8; // rax
  unsigned __int64 v9; // rax
  char CurrentProcessorNumber; // al
  int v11; // edx
  int v12; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  LODWORD(v2) = 0;
  result = 0;
  if ( *(_BYTE *)(a2 + 107) && *(int *)(a2 + 268) <= 1 )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
    {
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v6 = PerformanceCounter;
    }
    else
    {
      v6.QuadPart = 0LL;
    }
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 528) + 24LL))(*(_QWORD *)(a2 + 536) + 16LL);
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v8.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v8.QuadPart <= 0 || v8.QuadPart >= v6.QuadPart )
        v9 = v8.QuadPart - v6.QuadPart;
      else
        v9 = v8.QuadPart - v6.QuadPart - 1;
      v14 = v9;
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      {
        if ( PerformanceFrequency.QuadPart && v9 )
          v2 = 10000
             * (1000 * (v9 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v9 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 1000 * (v9 / PerformanceFrequency.QuadPart));
      }
      else
      {
        LODWORD(v2) = v9;
      }
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
        Template_pqqx(
          v2,
          v11,
          v12,
          (unsigned int)RaidpAdapterInterruptRoutine,
          *(_DWORD *)(a2 + 56),
          CurrentProcessorNumber,
          v2);
    }
    return v7;
  }
  return result;
}
