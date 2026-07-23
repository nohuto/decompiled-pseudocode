/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x14045F46C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14045D8BC (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140008200 (PiUEventHashStringIntoBucket.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiUEventNotifyClient @ 0x14045F770 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14045FB50 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // r12d
  _DWORD *v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  const WCHAR *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD **v18; // r13
  _QWORD *v19; // r14
  char v20; // al
  _QWORD *v21; // rsi
  unsigned __int8 v22; // bl
  signed __int32 v23; // eax
  __int64 v25; // rdx
  _DWORD *PoolWithTag; // rax
  ULONG v27; // r8d
  char v28; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+88h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v6 = 0;
  v28 = 0;
  v7 = 0LL;
  v29 = 0;
  v8 = 0;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v4 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v10 )
    goto LABEL_16;
  v11 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v11 )
    goto LABEL_16;
  v12 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v12 )
  {
LABEL_16:
    v13 = *(_DWORD *)(a1 + 88) - 1;
    if ( v13 )
    {
      if ( v13 != 2 )
        return (unsigned int)v6;
      v14 = (const WCHAR *)(a1 + 128);
      v28 = 1;
    }
    else
    {
      v14 = (const WCHAR *)(a1 + 120);
    }
    if ( *(_BYTE *)(a1 + 68) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x59706E50u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x1000uLL);
      v8 = 1;
    }
    v15 = KeAbPreAcquire((ULONG_PTR)&PiUEventClientRegistrationListLock, 0LL, 0LL, a4);
    v16 = v15;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventClientRegistrationListLock, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    qword_14034AB68 = (__int64)KeGetCurrentThread();
    dword_14034AB90 = CurrentIrql;
    v18 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v14));
    v19 = *v18;
    if ( *v18 != v18 )
    {
      v20 = v28;
      do
      {
        v21 = v19;
        v19 = (_QWORD *)*v19;
        if ( !v20 || !*((_BYTE *)v21 + 40) )
        {
          if ( !wcsicmp(v14, *(const wchar_t **)(v21[3] + 16LL)) )
          {
            if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v21) )
            {
              v6 = PiUEventNotifyClient(a1, v21);
              if ( v6 >= 0 )
              {
                if ( v7 )
                {
                  if ( v8 >= 0x400 )
                  {
                    v29 = 1;
                  }
                  else
                  {
                    v25 = v8++;
                    v7[v25] = *((_DWORD *)v21 + 12);
                  }
                }
              }
            }
          }
          v20 = v28;
        }
      }
      while ( v19 != v18 );
    }
    if ( v7 && v8 > 1 )
    {
      if ( v29 )
      {
        memset(v7, 0, 0x1000uLL);
        *v7 = -1;
        v27 = 4;
      }
      else
      {
        v27 = 4096;
        *v7 = v8 - 1;
      }
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, v7, v27, 0LL, 0LL, 0, 0);
    }
    v22 = dword_14034AB90;
    qword_14034AB68 = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v23);
    __writecr8(v22);
    KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x59706E50u);
  }
  return (unsigned int)v6;
}
