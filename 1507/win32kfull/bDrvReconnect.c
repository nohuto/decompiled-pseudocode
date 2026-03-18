/*
 * XREFs of bDrvReconnect @ 0x1C02B84EC
 * Callers:
 *     RemotePassthruDisable @ 0x1C0202AD0 (RemotePassthruDisable.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C0202F90 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C012F844 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C012F938 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvReconnect(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _SURFOBJ *v7; // rdx
  _QWORD *v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v14; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v15[96]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD *v16; // [rsp+118h] [rbp+67h] BYREF

  v16 = (_QWORD *)a1;
  if ( a1 && (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v15,
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
    GreAcquireSemaphore(v16[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v16[8], 11LL);
    v7 = (struct _SURFOBJ *)v16[322];
    if ( v7 )
      v7 = (struct _SURFOBJ *)((char *)v7 + 24);
    PDEVOBJ::vSync((PDEVOBJ *)&v16, v7, 0LL, 0);
    v8 = v16;
    v9 = (__int64 (__fastcall *)(__int64, __int64))v16[419];
    if ( v9 )
    {
      v10 = v9(a2, a3);
      if ( v10 )
        *(_DWORD *)(v16[227] + 896LL) = 2;
      v8 = v16;
    }
    else
    {
      v10 = 1;
    }
    if ( a4 == 1 )
    {
      v11 = v8[229];
      v14 = v11;
      if ( v10 == 1 && (*(_DWORD *)(v11 + 24) & 0x800) != 0 )
      {
        v12 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v8[362];
        if ( v12 )
        {
          v12(v8[228], &v14, 0LL, 0LL, *(_DWORD *)(v11 + 28));
          v8 = v16;
        }
        else
        {
          v10 = 0;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v8[8]);
    GreReleaseSemaphoreInternal(v16[8]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v15);
  }
  else
  {
    return 0;
  }
  return v10;
}
