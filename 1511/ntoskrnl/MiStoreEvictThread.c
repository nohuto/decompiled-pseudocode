/*
 * XREFs of MiStoreEvictThread @ 0x140142B00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     MiStoreEvictPageFile @ 0x1400ECEEC (MiStoreEvictPageFile.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *StartContext)
{
  int v2; // ebx
  __int64 v3; // rsi
  int v4; // ebp
  unsigned int v5; // eax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  KIRQL v8; // al
  KIRQL v9; // bl
  _QWORD v10[2]; // [rsp+40h] [rbp-138h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-128h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v13[36]; // [rsp+C0h] [rbp-B8h] BYREF

  KeWaitForSingleObject(StartContext + 2, WrKernel, 0, 0, 0LL);
  v2 = StartContext[8];
  v3 = *(_QWORD *)StartContext;
  ExFreePoolWithTag(StartContext, 0);
  if ( !v2 )
  {
    KeInitializeTimer2((__int64)v13, 0LL, 0LL, 8);
    v10[1] = -1LL;
    v10[0] = 0LL;
    KeSetTimer2(v13, -600000000LL, 600000000LL, (__int64)v10);
    Object[1] = v13;
    Object[0] = (PVOID)(v3 + 1112);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1112));
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 1088);
        v5 = *(_DWORD *)(v3 + 5720);
        if ( v5 )
        {
          v6 = (__int64 *)(v3 + 5728);
          v7 = v5;
          do
          {
            if ( (*(_BYTE *)(*v6 + 204) & 0x40) != 0 )
              MiStoreEvictPageFile(*v6);
            ++v6;
            --v7;
          }
          while ( v7 );
        }
        v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1184));
        v9 = v8;
        if ( v4 == *(_DWORD *)(v3 + 1088) )
          break;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1184), v8);
      }
      if ( v4 )
      {
        *(_DWORD *)(v3 + 1088) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1136), 0, 0);
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1184), v9);
    }
  }
}
