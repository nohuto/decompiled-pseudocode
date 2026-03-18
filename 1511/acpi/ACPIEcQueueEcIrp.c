/*
 * XREFs of ACPIEcQueueEcIrp @ 0x1C003A528
 * Callers:
 *     ACPIEcOpRegionHandler @ 0x1C003A4A0 (ACPIEcOpRegionHandler.c)
 *     ACPIEcReadWrite @ 0x1C0079E7C (ACPIEcReadWrite.c)
 * Callees:
 *     ACPIEcServiceDevice @ 0x1C00045B4 (ACPIEcServiceDevice.c)
 *     ACPIEcLogAction @ 0x1C0024290 (ACPIEcLogAction.c)
 */

__int64 __fastcall ACPIEcQueueEcIrp(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int16 v7; // bx
  KSPIN_LOCK *v10; // rsi
  KIRQL v11; // bp
  unsigned int v12; // ebx
  _BYTE *PoolWithTag; // rax
  _QWORD *v15; // rcx
  char v16; // bl
  char v17; // [rsp+50h] [rbp+18h]

  v17 = a3;
  v7 = a4;
  if ( a3 > 0xFF || (unsigned int)(a3 + a4) > 0x100 )
    return 3221225489LL;
  v10 = (KSPIN_LOCK *)(a1 + 88);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  if ( *(_BYTE *)(a1 + 121) > 1u )
  {
    v12 = -1073741810;
LABEL_7:
    KeReleaseSpinLock(v10, v11);
    return v12;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x45706341u);
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_7;
  }
  PoolWithTag[16] = a2;
  *((_QWORD *)PoolWithTag + 4) = a6;
  *((_QWORD *)PoolWithTag + 5) = a7;
  PoolWithTag[17] = v17;
  *((_QWORD *)PoolWithTag + 3) = a5;
  *((_WORD *)PoolWithTag + 9) = v7;
  v15 = *(_QWORD **)(a1 + 472);
  *(_QWORD *)PoolWithTag = a1 + 464;
  *((_QWORD *)PoolWithTag + 1) = v15;
  if ( *v15 != a1 + 464 )
    __fastfail(3u);
  *v15 = PoolWithTag;
  *(_QWORD *)(a1 + 472) = PoolWithTag;
  v16 = *(_QWORD *)(a1 + 480) == 0LL;
  ACPIEcLogAction(a1, 0x90u, v16);
  KeReleaseSpinLock(v10, v11);
  if ( v16 )
    ACPIEcServiceDevice(a1);
  return 0LL;
}
