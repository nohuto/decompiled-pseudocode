/*
 * XREFs of HDXDrvEscape @ 0x1C0088F30
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C0088D80 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031BE0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0089048 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00891E0 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned int v8; // edi
  struct _SURFOBJ *v9; // rdx
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  unsigned int v12; // [rsp+20h] [rbp-E8h]
  HSEMAPHORE v13; // [rsp+28h] [rbp-E0h]
  unsigned int v14; // [rsp+30h] [rbp-D8h]
  HSEMAPHORE v15; // [rsp+68h] [rbp-A0h]
  unsigned int v16; // [rsp+70h] [rbp-98h]
  HSEMAPHORE v17; // [rsp+78h] [rbp-90h]
  unsigned int v18; // [rsp+80h] [rbp-88h]
  _BYTE v19[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+110h] [rbp+8h] BYREF

  v20 = a1;
  v4 = (unsigned int)a4;
  v6 = (unsigned int)a2;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 56) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v19,
      a2,
      a3,
      a4,
      v12,
      v13,
      v14,
      *(HSEMAPHORE *)(a1 + 72),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u,
      v15,
      v16,
      v17,
      v18);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 64), 11);
    v9 = *(struct _SURFOBJ **)(a1 + 2576);
    if ( v9 )
      v9 = (struct _SURFOBJ *)((char *)v9 + 24);
    PDEVOBJ::vSync((PDEVOBJ *)&v20, v9, 0LL, 0);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2904);
    if ( v10 )
      v8 = v10(*(_QWORD *)(a1 + 2576) + 24LL, v6, v4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(a1 + 64));
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v19);
  }
  else
  {
    return 0;
  }
  return v8;
}
