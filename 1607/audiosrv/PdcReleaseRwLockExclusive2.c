/*
 * XREFs of PdcReleaseRwLockExclusive2 @ 0x180005614
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x180004BC4 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientActivate @ 0x180005210 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x18000556C (Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     Pdcv2ActivationClientRegister @ 0x1800315E0 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18008DEC4 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18008E084 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18008E1E0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall PdcReleaseRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  BOOL result; // eax

  if ( a2 )
    *a2 = 1;
  if ( !*(_QWORD *)a1 || *(_DWORD *)(a1 + 8) != GetCurrentThreadId() || *(int *)(a1 + 12) <= 0 )
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(a1 + 8) = 0;
  result = ReleaseMutex(*(HANDLE *)a1);
  if ( !result )
  {
    GetLastError();
    __fastfail(0x24u);
  }
  if ( a2 )
    *a2 = 0;
  return result;
}
