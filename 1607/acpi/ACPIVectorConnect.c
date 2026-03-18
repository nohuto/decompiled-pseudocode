/*
 * XREFs of ACPIVectorConnect @ 0x1C0057AB0
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C0057C30 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C009ACB0 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C0006DB0 (ACPIGpeEnableDisableEvents.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIGpeValidIndex @ 0x1C0020228 (ACPIGpeValidIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0020DE0 (ACPIGpeInstallRemoveIndex.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIVectorInstall @ 0x1C0057E84 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v9; // ebp
  unsigned int v10; // edi
  _BYTE *PoolWithTag; // rax
  _BYTE *v13; // rsi
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx

  v9 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    14,
    11,
    (__int64)&WPP_d78a53c20b5d314ef1dea0f560801b3e_Traceguids);
  v10 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(v9) )
    return 3221225712LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x20uLL);
  v13[24] = a4;
  *((_QWORD *)v13 + 1) = a5;
  *((_QWORD *)v13 + 2) = a6;
  *(_DWORD *)v13 = v9;
  *((_DWORD *)v13 + 7) = a3;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v15);
  if ( ACPIGpeInstallRemoveIndex(v9, a3 == 0, 0, v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(v9, v13) )
    {
      *a7 = v13;
      goto LABEL_12;
    }
    ACPIGpeInstallRemoveIndex(v9, 2, 0, v13 + 25);
  }
  v10 = -1073741823;
  ExFreePoolWithTag(v13, 0);
LABEL_12:
  ACPIGpeEnableDisableEvents(1, v16);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v10;
}
