/*
 * XREFs of UsbhHubWorker @ 0x1C00235A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 (__fastcall *__fastcall UsbhHubWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(__int64)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  KIRQL v11; // al
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx

  if ( *(_DWORD *)(a2 + 4) != 2001228627 )
  {
    a3 = *(unsigned int *)(a2 + 4);
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v20 = 1380669288;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = a3;
          *(_QWORD *)(v20 + 24) = a2;
        }
      }
    }
  }
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(v6 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(v6, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(v6, *(_QWORD *)(v6 + 64), a3, a4);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  v8 = *(_QWORD *)(a2 + 32);
  v9 = *(unsigned int *)(a2 + 12);
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 64) = KeGetCurrentThread();
  (*(void (__fastcall **)(__int64, __int64, __int64))(a2 + 24))(v10, v9, v8);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 2800));
  v12 = *(_QWORD *)(a2 + 48);
  v13 = *(_QWORD **)(a2 + 56);
  if ( *(_QWORD *)(v12 + 8) != a2 + 48 || *v13 != a2 + 48 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2800), v11);
  v14 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = 1716213608;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 0LL;
        *(_QWORD *)(v22 + 24) = a2;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v15, v16);
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
    UsbhTrapFatal_Dbg(a1, 0LL, v15, v16);
  if ( *(_DWORD *)v17 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v15, v16);
  result = *(__int64 (__fastcall **)(__int64))(v17 + 4776);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(v14);
  return result;
}
