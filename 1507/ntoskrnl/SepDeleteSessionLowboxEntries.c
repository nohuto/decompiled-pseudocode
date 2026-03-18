/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x140117340
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlDeleteHashTable @ 0x140131B40 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteSessionLowboxEntries(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  __int64 v9; // rax
  volatile signed __int64 *i; // rsi
  struct _KTHREAD *v11; // rax
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r10
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // r11d
  __int64 v21; // r10
  _QWORD *v22; // rcx
  __int64 j; // rax
  unsigned int v24; // ecx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  volatile signed __int64 v27; // rcx
  volatile signed __int64 **v28; // rax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL, a4);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
    v8 = v5;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v5, (ULONG_PTR)&LowboxSessionMapLock, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = g_SessionLowboxMap;
    for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)v9; i = v13 )
    {
      v11 = KeGetCurrentThread();
      v12 = i + 3;
      v13 = (volatile signed __int64 *)*i;
      --v11->KernelApcDisable;
      v14 = KeAbPreAcquire((ULONG_PTR)(i + 3), 0LL, 0LL, v6);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 3, v14, (ULONG_PTR)(i + 3), v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = *((_QWORD *)i + 5);
      if ( (v17 & 4) != 0 )
      {
        v18 = 1LL;
        v19 = 32;
      }
      else
      {
        v18 = 0LL;
        v19 = 0;
      }
      v20 = v19 + *((_DWORD *)i + 8) - 1;
      v21 = v17 - 4 * v18;
      if ( !*((_DWORD *)i + 8) )
        goto LABEL_30;
      v22 = (_QWORD *)(v21 + 8 * ((unsigned __int64)v19 >> 6));
      for ( j = ((1LL << (v19 & 0x3F)) - 1) | ~*v22; j == -1; j = ~*v22 )
      {
        if ( (unsigned __int64)++v22 > v21 + 8 * ((unsigned __int64)v20 >> 6) )
          goto LABEL_30;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v24 = j + ((unsigned int)(((__int64)v22 - v21) >> 3) << 6);
      if ( v24 > v20 || v24 == -1 || v24 - v19 == -1 )
      {
LABEL_30:
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v27 = *i;
        v28 = (volatile signed __int64 **)*((_QWORD *)i + 1);
        if ( *(volatile signed __int64 **)(*i + 8) != i || *v28 != i )
          __fastfail(3u);
        *v28 = (volatile signed __int64 *)v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((ULONG_PTR)(i + 3));
        v29 = KeGetCurrentThread();
        v30 = v29->KernelApcDisable + 1;
        v29->KernelApcDisable = v30;
        if ( !v30
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
          && !v29->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((ULONG_PTR)(i + 3));
        v25 = KeGetCurrentThread();
        v26 = v25->KernelApcDisable + 1;
        v25->KernelApcDisable = v26;
        if ( !v26
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
          && !v25->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v9 = g_SessionLowboxMap;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
      && !v31->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
