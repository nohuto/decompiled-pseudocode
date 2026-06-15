/*
 * XREFs of PdcAcquireRwLockExclusive2 @ 0x180005760
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

DWORD __fastcall PdcAcquireRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  DWORD v4; // eax
  DWORD result; // eax

  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v4 = WaitForSingleObjectEx(*(HANDLE *)a1, 0xEA60u, 0);
    if ( !v4 )
      break;
    if ( v4 == 128 )
      __fastfail(0x24u);
    if ( v4 != 258 )
      __fastfail(5u);
  }
  if ( a2 )
    *a2 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) == 1 )
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  result = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 8) != result )
    __fastfail(5u);
  return result;
}
