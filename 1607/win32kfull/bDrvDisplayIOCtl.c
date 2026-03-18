/*
 * XREFs of bDrvDisplayIOCtl @ 0x1C02BA9AC
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01FA080 (CtxDisplayIOCtl.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C01549E4 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0154AD8 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvDisplayIOCtl(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  struct _SURFOBJ *v6; // rdx
  _QWORD *v7; // rdx
  __int64 (__fastcall *v8)(__int64, _QWORD); // rax
  unsigned int v9; // eax
  _BYTE v11[96]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v12; // [rsp+100h] [rbp+8h] BYREF

  v12 = (_QWORD *)a1;
  if ( a1 && (v5 = 1, (*(_DWORD *)(a1 + 56) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v11,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(a1 + 72),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v12[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v12[8], 11LL);
    v6 = (struct _SURFOBJ *)v12[322];
    if ( v6 )
      v6 = (struct _SURFOBJ *)((char *)v6 + 24);
    PDEVOBJ::vSync((PDEVOBJ *)&v12, v6, 0LL, 0);
    v7 = v12;
    v8 = (__int64 (__fastcall *)(__int64, _QWORD))v12[423];
    if ( v8 )
    {
      v9 = v8(a2, a3);
      v7 = v12;
      v5 = v9;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v7[8]);
    GreReleaseSemaphoreInternal(v12[8]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v11);
  }
  else
  {
    return 0;
  }
  return v5;
}
