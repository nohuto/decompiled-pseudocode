/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1400DE680
 * Callers:
 *     IopTimerDispatch @ 0x140001768 (IopTimerDispatch.c)
 *     KiFinalizeTimer2Disablement @ 0x140031898 (KiFinalizeTimer2Disablement.c)
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiIpiProcessRequests @ 0x1400C6AB0 (KiIpiProcessRequests.c)
 *     PfHardFaultRecord @ 0x1400DE608 (PfHardFaultRecord.c)
 *     KeFlushIoBuffers @ 0x1400E249C (KeFlushIoBuffers.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401CA1C8 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmCreateKey @ 0x140422220 (CmCreateKey.c)
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwGetKernelTraceTimestamp(char *a1, char *a2)
{
  __int64 v2; // r8
  int v3; // esi
  char *v4; // rbx
  unsigned __int64 v5; // r9
  bool i; // zf
  unsigned int v7; // edi
  char *v8; // rbp

  v2 = (unsigned int)EtwpActiveSystemLoggers;
  v3 = 0;
  v4 = a1;
  v5 = (unsigned int)a2;
  for ( i = !_BitScanForward((unsigned int *)&a1, EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&a1, v2) )
  {
    v2 = ((_DWORD)v2 - 1) & (unsigned int)v2;
    a2 = (char *)&EtwpGroupMasks + 32 * (unsigned int)a1;
    if ( a2 )
    {
      a2 = (char *)((unsigned int)v5 & *(_DWORD *)&a2[4 * (v5 >> 29)]);
      if ( ((unsigned int)a2 & 0x1FFFFFFF) != 0 )
        v3 |= 1 << LOBYTE(word_1402D84E2[2 * (_QWORD)a1]);
    }
  }
  v7 = 0;
  v8 = (char *)((char *)EtwpSystemTimeStamp - v4);
  do
  {
    if ( _bittest(&v3, v7) )
      *(_QWORD *)v4 = (*(__int64 (__fastcall **)(char *, char *, __int64, unsigned __int64))&v8[(_QWORD)v4])(
                        a1,
                        a2,
                        v2,
                        v5);
    else
      *(_QWORD *)v4 = 0LL;
    ++v7;
    v4 += 8;
  }
  while ( v7 < 2 );
}
