/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140111B58
 * Callers:
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KiFinalizeTimer2Disablement @ 0x1400F443C (KiFinalizeTimer2Disablement.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiIpiProcessRequests @ 0x1400FED70 (KiIpiProcessRequests.c)
 *     PfHardFaultRecord @ 0x140111AE4 (PfHardFaultRecord.c)
 *     KeFlushIoBuffers @ 0x1401179F8 (KeFlushIoBuffers.c)
 *     IopTimerDispatch @ 0x140130388 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessExpiredTimerList @ 0x140209C50 (KiProcessExpiredTimerList.c)
 *     NtEnumerateValueKey @ 0x1404273A0 (NtEnumerateValueKey.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmpCloseKeyObject @ 0x14042C8B0 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwGetKernelTraceTimestamp(char *a1, char *a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // r9
  int v5; // ebp
  __int64 v7; // rcx
  unsigned int v8; // edi
  signed __int64 v9; // rsi

  v2 = (unsigned int)EtwpActiveSystemLoggers;
  v4 = (unsigned int)a2;
  v5 = 0;
  while ( _BitScanForward((unsigned int *)&v7, v2) )
  {
    v2 = ((_DWORD)v2 - 1) & (unsigned int)v2;
    a2 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v7;
    if ( a2 )
    {
      a2 = (char *)((unsigned int)v4 & *(_DWORD *)&a2[4 * (v4 >> 29)]);
      if ( ((unsigned int)a2 & 0x1FFFFFFF) != 0 )
        v5 |= 1 << LOBYTE(word_140327822[2 * v7]);
    }
  }
  v8 = 0;
  v9 = (char *)EtwpSystemTimeStamp - a1;
  do
  {
    if ( _bittest(&v5, v8) )
      *(_QWORD *)a1 = (*(__int64 (__fastcall **)(__int64, char *, __int64, unsigned __int64))&a1[v9])(v7, a2, v2, v4);
    else
      *(_QWORD *)a1 = 0LL;
    ++v8;
    a1 += 8;
  }
  while ( v8 < 2 );
}
