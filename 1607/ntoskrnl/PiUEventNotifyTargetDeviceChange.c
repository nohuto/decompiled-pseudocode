/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x14048A778
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140489744 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x1400860C4 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiUEventNotifyClient @ 0x14048A9FC (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14048AB98 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1)
{
  _DWORD *v1; // rdi
  char v2; // si
  int v3; // r12d
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  const WCHAR *v12; // r15
  _QWORD **v13; // r13
  _QWORD *v14; // r14
  char v15; // al
  _QWORD *v16; // rsi
  __int64 v18; // rdx
  _DWORD *PoolWithTag; // rax
  ULONG v20; // r8d
  char v21; // [rsp+80h] [rbp+8h]
  char v22; // [rsp+88h] [rbp+10h]

  v1 = 0LL;
  v2 = 0;
  v21 = 0;
  v3 = 0;
  v22 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v10 )
  {
LABEL_16:
    v11 = *(_DWORD *)(a1 + 88) - 1;
    if ( v11 )
    {
      if ( v11 != 2 )
        return (unsigned int)v3;
      v12 = (const WCHAR *)(a1 + 128);
      v21 = 1;
    }
    else
    {
      v12 = (const WCHAR *)(a1 + 120);
    }
    if ( *(_BYTE *)(a1 + 68) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x59706E50u);
      v1 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x1000uLL);
      v4 = 1;
    }
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v13 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v12));
    v14 = *v13;
    if ( *v13 != v13 )
    {
      v15 = v21;
      do
      {
        v16 = v14;
        v14 = (_QWORD *)*v14;
        if ( !v15 || !*((_BYTE *)v16 + 40) )
        {
          if ( wcsicmp(v12, *(const wchar_t **)(v16[3] + 16LL))
            || !(unsigned __int8)PiUEventApplyAdditionalFilters(a1, v16)
            || (v3 = PiUEventNotifyClient(a1, v16), v3 < 0) )
          {
            v15 = v21;
          }
          else
          {
            v15 = v21;
            if ( v1 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v22 = 1;
                continue;
              }
              v18 = v4++;
              v1[v18] = *((_DWORD *)v16 + 12);
            }
          }
        }
        v2 = v22;
      }
      while ( v14 != v13 );
    }
    if ( v1 && v4 > 1 )
    {
      if ( v2 )
      {
        memset(v1, 0, 0x1000uLL);
        *v1 = -1;
        v20 = 4;
      }
      else
      {
        v20 = 4096;
        *v1 = v4 - 1;
      }
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, v1, v20, 0LL, 0LL, 0, 0);
    }
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
    if ( v1 )
      ExFreePoolWithTag(v1, 0x59706E50u);
  }
  return (unsigned int)v3;
}
