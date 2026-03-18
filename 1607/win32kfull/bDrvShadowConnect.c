/*
 * XREFs of bDrvShadowConnect @ 0x1C02BAD1C
 * Callers:
 *     RemoteShadowStart @ 0x1C01FA3B0 (RemoteShadowStart.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C01549E4 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0154AD8 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvShadowConnect(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _SURFOBJ *v5; // rdx
  _QWORD *v6; // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void (__fastcall *v11)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  _BYTE v13[96]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD *v14; // [rsp+100h] [rbp+67h] BYREF
  __int64 v15; // [rsp+118h] [rbp+7Fh] BYREF

  v14 = (_QWORD *)a1;
  if ( a1 && (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v13,
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
    GreAcquireSemaphore(v14[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v14[8], 11LL);
    v5 = (struct _SURFOBJ *)v14[322];
    if ( v5 )
      v5 = (struct _SURFOBJ *)((char *)v5 + 24);
    PDEVOBJ::vSync((PDEVOBJ *)&v14, v5, 0LL, 0);
    v6 = v14;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD))v14[419];
    if ( v7 )
    {
      v8 = v7(a2, a3);
      v6 = v14;
      v9 = v8;
    }
    else
    {
      v9 = 1;
    }
    v10 = v6[229];
    v15 = v10;
    if ( v9 == 1 && (*(_DWORD *)(v10 + 24) & 0x800) != 0 )
    {
      v11 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v6[361];
      if ( v11 )
      {
        v11(v6[228], &v15, 0LL, 0LL, *(_DWORD *)(v10 + 28));
        v6 = v14;
      }
      else
      {
        v9 = 0;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v6[8]);
    GreReleaseSemaphoreInternal(v14[8]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v13);
  }
  else
  {
    return 0;
  }
  return v9;
}
