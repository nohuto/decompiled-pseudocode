/*
 * XREFs of MiStoreEvictThread @ 0x14014398C
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     MiStoreEvictPageFile @ 0x1400AE60C (MiStoreEvictPageFile.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *StartContext)
{
  int v2; // ebx
  __int64 v3; // rsi
  int v4; // r14d
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdi
  KIRQL v8; // al
  KIRQL v9; // bl
  _QWORD v10[2]; // [rsp+40h] [rbp-148h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v13[144]; // [rsp+C0h] [rbp-C8h] BYREF

  KeWaitForSingleObject(StartContext + 2, WrKernel, 0, 0, 0LL);
  v2 = StartContext[8];
  v3 = *(_QWORD *)StartContext;
  ExFreePoolWithTag(StartContext, 0);
  if ( !v2 )
  {
    KeInitializeTimer2((__int64)v13, 0LL, 0LL, 8);
    v10[1] = -1LL;
    v10[0] = 0LL;
    KeSetTimer2((__int64)v13, -600000000LL, 600000000LL, (__int64)v10);
    Object[1] = v13;
    Object[0] = (PVOID)(v3 + 1096);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1096));
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 1072);
        v5 = 0LL;
        v6 = *(_DWORD *)(v3 + 6296);
        if ( v6 )
        {
          do
          {
            v7 = *(_QWORD *)(v3 + 8 * v5 + 6304);
            if ( (*(_BYTE *)(v7 + 204) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8 * v5 + 6304));
              if ( *(_DWORD *)(v7 + 200) >= 0x100u )
                LODWORD(v5) = v5 - 1;
            }
            v5 = (unsigned int)(v5 + 1);
          }
          while ( (unsigned int)v5 < v6 );
        }
        v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1168));
        v9 = v8;
        if ( v4 == *(_DWORD *)(v3 + 1072) )
          break;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1168), v8);
      }
      if ( v4 )
      {
        *(_DWORD *)(v3 + 1072) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1120), 0, 0);
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1168), v9);
    }
  }
}
