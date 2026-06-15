/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x180005870
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x180004BC4 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientActivate @ 0x180005210 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18008DEC4 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     memset @ 0x180036D30 (memset.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  if ( *(_QWORD *)(a1 + 8) )
  {
    memset(a2, 0, 0x28uLL);
    v6 = 768LL;
    *a2 = 50332376;
    v4 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(a1 + 8), 0x20000LL, a2, 0LL, a2, &v6, 0LL, 0LL);
    if ( v4 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  }
  else
  {
    v4 = -1073741816;
  }
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
  return (unsigned int)v4;
}
