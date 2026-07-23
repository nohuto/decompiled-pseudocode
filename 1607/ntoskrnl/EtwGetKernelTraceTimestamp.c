/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1400598D0
 * Callers:
 *     IopTimerDispatch @ 0x1400017F4 (IopTimerDispatch.c)
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiIpiProcessRequests @ 0x140088FA0 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x14009CBF0 (KeFlushIoBuffers.c)
 *     PfHardFaultRecord @ 0x14009FE4C (PfHardFaultRecord.c)
 *     KiFinalizeTimer2Disablement @ 0x1400A1088 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140403170 (CmpSecurityMethod.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     CmCreateKey @ 0x140462FD0 (CmCreateKey.c)
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwGetKernelTraceTimestamp(char *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  int v3; // esi
  char *v4; // rbx
  unsigned __int64 v5; // r9
  bool i; // zf
  unsigned int v7; // edi
  signed __int64 v8; // r14
  unsigned __int64 (*v9)(); // rax
  __int64 v10; // rax

  v2 = (unsigned int)EtwpActiveSystemLoggers;
  v3 = 0;
  v4 = a1;
  v5 = (unsigned int)a2;
  for ( i = !_BitScanForward((unsigned int *)&a1, EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&a1, v2) )
  {
    v2 = ((_DWORD)v2 - 1) & (unsigned int)v2;
    a2 = (unsigned __int64)&EtwpGroupMasks + 32 * (unsigned int)a1;
    if ( a2 )
    {
      a2 = (unsigned int)v5 & *(_DWORD *)(a2 + 4 * (v5 >> 29));
      if ( (a2 & 0x1FFFFFFF) != 0 )
        v3 |= 1 << LOBYTE(word_1402FD342[2 * (_QWORD)a1]);
    }
  }
  v7 = 0;
  v8 = (char *)EtwpSystemTimeStamp - v4;
  do
  {
    if ( _bittest(&v3, v7) )
    {
      v9 = *(unsigned __int64 (**)())&v4[v8];
      if ( v9 == EtwpGetCycleCount )
      {
        v10 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v10) << 32;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(char *, unsigned __int64, __int64, unsigned __int64))v9)(a1, a2, v2, v5);
      }
      *(_QWORD *)v4 = v10;
    }
    else
    {
      *(_QWORD *)v4 = 0LL;
    }
    ++v7;
    v4 += 8;
  }
  while ( v7 < 2 );
}
