/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140059D50
 * Callers:
 *     IopTimerDispatch @ 0x1400017F4 (IopTimerDispatch.c)
 *     KiRetireDpcList @ 0x140058280 (KiRetireDpcList.c)
 *     KiIpiProcessRequests @ 0x1400898A0 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x14009D3F0 (KeFlushIoBuffers.c)
 *     PfHardFaultRecord @ 0x1400A1524 (PfHardFaultRecord.c)
 *     KiFinalizeTimer2Disablement @ 0x1400A2760 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x1400F79FC (KeDisableTimer2.c)
 *     KiProcessExpiredTimerList @ 0x14010CEBC (KiProcessExpiredTimerList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D8994 (KiInvokeInterruptServiceRoutine.c)
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404042B0 (CmpSecurityMethod.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     NtEnumerateValueKey @ 0x140439540 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140439B70 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043B2A0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043B880 (NtQueryValueKey.c)
 *     CmCreateKey @ 0x140464100 (CmCreateKey.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x1404DD5F8 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     NtSetInformationKey @ 0x14050FD50 (NtSetInformationKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140601798 (CmpReplicateKeyToVirtual.c)
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
        v3 |= 1 << LOBYTE(word_1402FD362[2 * (_QWORD)a1]);
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
