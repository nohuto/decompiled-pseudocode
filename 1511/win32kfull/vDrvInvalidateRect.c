/*
 * XREFs of vDrvInvalidateRect @ 0x1C02B7E68
 * Callers:
 *     RemoteRedrawRectangle @ 0x1C01EFABC (RemoteRedrawRectangle.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C014EE80 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C014EF74 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrvInvalidateRect(__int64 a1, __int64 a2)
{
  struct _SURFOBJ *v3; // rdx
  _QWORD *v4; // rdx
  void (__fastcall *v5)(__int64); // rax
  _BYTE v6[104]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v7; // [rsp+100h] [rbp+8h] BYREF

  if ( a1 )
  {
    v7 = (_QWORD *)a1;
    if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
    {
      SEMOBJEX::SEMOBJEX(
        (SEMOBJEX *)v6,
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
      GreAcquireSemaphore(v7[8]);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v7[8], 11LL);
      v3 = (struct _SURFOBJ *)v7[322];
      if ( v3 )
        v3 = (struct _SURFOBJ *)((char *)v3 + 24);
      PDEVOBJ::vSync((PDEVOBJ *)&v7, v3, 0LL, 0);
      v4 = v7;
      v5 = (void (__fastcall *)(__int64))v7[422];
      if ( v5 )
      {
        v5(a2);
        v4 = v7;
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v4[8]);
      GreReleaseSemaphoreInternal(v7[8]);
      SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v6);
    }
  }
}
