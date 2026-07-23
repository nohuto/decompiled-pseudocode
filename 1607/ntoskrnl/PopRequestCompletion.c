/*
 * XREFs of PopRequestCompletion @ 0x14012BB00
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     PopFreeIrp @ 0x14012BC54 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 *     PopDiagTraceIrpFinish @ 0x14012BE68 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14012C080 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     PopPepDeviceWaitWake @ 0x14012C8A8 (PopPepDeviceWaitWake.c)
 *     PopUpdateWakeSource @ 0x140205744 (PopUpdateWakeSource.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(_QWORD, __int64, _QWORD, _QWORD, __int64); // r10
  __int64 v5; // rdi
  __int64 v6; // rsi
  char v7; // bp
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rdx

  v3 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a3 + 216);
  v5 = *(_QWORD *)(a3 + 200);
  v6 = a2;
  v7 = *(_BYTE *)(a3 + 209);
  v8 = *(_BYTE *)(a3 + 184);
  if ( v3 )
  {
    v9 = a2 + 48;
    LOBYTE(a2) = *(_BYTE *)(a3 + 184);
    v3(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192), *(_QWORD *)(a3 + 224), v9);
  }
  if ( v8 )
  {
    PopDequeueQuerySetIrp(v6);
    if ( v5 && *(_BYTE *)(a3 + 184) == 2 && *(_DWORD *)(a3 + 188) == 1 && v7 )
    {
      if ( *(_DWORD *)(a3 + 192) == 1 )
      {
        _m_prefetchw((const void *)(v5 + 32));
        if ( (_InterlockedAnd((volatile signed __int32 *)(v5 + 32), 0xFFFFFFFD) & 2) != 0 )
        {
LABEL_13:
          LOBYTE(v11) = *(_BYTE *)(a3 + 208);
          LOBYTE(v10) = 1;
          PopPepDeviceDState(*(_QWORD *)(v5 + 56), *(unsigned int *)(a3 + 192), v10, v11);
          PopDiagTraceFxDevicePowerState(*(_QWORD *)(v5 + 48), *(unsigned int *)(a3 + 192));
          goto LABEL_5;
        }
        v7 = 0;
      }
      if ( v7 )
        goto LABEL_13;
    }
  }
  else
  {
    PopDiagTraceIrpFinish(v6);
    if ( *(int *)(v6 + 48) >= 0 && *(_BYTE *)(a3 + 240) )
      PopUpdateWakeSource(*(PVOID *)(a3 + 24));
    if ( v5 )
    {
      LOBYTE(v13) = 1;
      PopPepDeviceWaitWake(*(_QWORD *)(v5 + 56), v13);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 208), 0LL, 0x20u);
    }
  }
LABEL_5:
  PopFreeIrp(v6);
  return 3221225494LL;
}
