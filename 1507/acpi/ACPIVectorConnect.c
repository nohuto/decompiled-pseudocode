/*
 * XREFs of ACPIVectorConnect @ 0x1C00414C0
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C0041610 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C0079DC0 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C00075D4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0008074 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeValidIndex @ 0x1C0008188 (ACPIGpeValidIndex.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIVectorInstall @ 0x1C0041920 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v7; // edi
  _BYTE *PoolWithTag; // rax
  _BYTE *v13; // rsi
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx

  v7 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(a2) )
    return 3221225712LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x20uLL);
  v13[24] = a4;
  *((_QWORD *)v13 + 1) = a5;
  *((_QWORD *)v13 + 2) = a6;
  *(_DWORD *)v13 = a2;
  *((_DWORD *)v13 + 7) = a3;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v15);
  if ( ACPIGpeInstallRemoveIndex(a2, a3 == 0, 0LL, v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(a2, v13) )
    {
      *a7 = v13;
      goto LABEL_12;
    }
    ACPIGpeInstallRemoveIndex(a2, 2LL, 0LL, v13 + 25);
  }
  v7 = -1073741823;
  ExFreePoolWithTag(v13, 0);
LABEL_12:
  ACPIGpeEnableDisableEvents(1, v16);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v7;
}
