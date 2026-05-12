/*
 * XREFs of McGenControlCallbackV2 @ 0x1C000D090
 * Callers:
 *     <none>
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00022A8 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleasePortData @ 0x1C000D1DC (RaidReleasePortData.c)
 *     RaidGetPortData @ 0x1C000D1F0 (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  int v7; // edi
  ULONG v8; // r12d
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  __int64 PortData; // rax
  __int64 v12; // rbp
  _QWORD *v13; // r14
  _QWORD *i; // rbx
  unsigned __int16 v15; // ax
  _QWORD *j; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  _QWORD *k; // rdi
  _QWORD *v20; // rax
  void (__fastcall *v21)(__int64, __int64); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v7 = MatchAnyKeyword;
  v8 = ControlCode;
  if ( !CallbackContext )
    return;
  if ( ControlCode )
  {
    if ( ControlCode == 1 )
    {
      *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
      MatchAnyKeyword = 0LL;
      *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
      *((_BYTE *)CallbackContext + 40) = Level;
      for ( *((_DWORD *)CallbackContext + 9) = 1;
            (unsigned int)MatchAnyKeyword < *((unsigned __int16 *)CallbackContext + 21);
            MatchAnyKeyword = (unsigned int)(MatchAnyKeyword + 1) )
      {
        v9 = *((_BYTE *)CallbackContext + 40);
        v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * (unsigned int)MatchAnyKeyword);
        if ( *(_BYTE *)((unsigned int)MatchAnyKeyword + *((_QWORD *)CallbackContext + 8)) > v9 && v9
          || v10
          && ((v10 & *((_QWORD *)CallbackContext + 2)) == 0
           || (v10 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
        {
          *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
          SourceId = (LPCGUID)(MatchAnyKeyword & 0x1F);
          *(_QWORD *)&ControlCode = (unsigned int)~(1 << (char)SourceId);
          *(_DWORD *)(Level + 4 * ((unsigned __int64)(unsigned int)MatchAnyKeyword >> 5)) &= ControlCode;
        }
        else
        {
          *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
          SourceId = (LPCGUID)(MatchAnyKeyword & 0x1F);
          *(_QWORD *)&ControlCode = (unsigned int)(1 << (char)SourceId);
          *(_DWORD *)(Level + 4 * ((unsigned __int64)(unsigned int)MatchAnyKeyword >> 5)) |= ControlCode;
        }
      }
      goto LABEL_10;
    }
  }
  else
  {
    v15 = *((_WORD *)CallbackContext + 21);
    *((_DWORD *)CallbackContext + 9) = 0;
    *((_BYTE *)CallbackContext + 40) = 0;
    *((_QWORD *)CallbackContext + 2) = 0LL;
    *((_QWORD *)CallbackContext + 3) = 0LL;
    if ( !v15 )
      goto LABEL_24;
    memset(*((void **)CallbackContext + 6), 0, 4LL * ((v15 - 1) / 32 + 1));
  }
  if ( v8 )
  {
LABEL_10:
    StorEtwLoggingEnabled = 1;
    goto LABEL_11;
  }
LABEL_24:
  StorEtwLoggingEnabled = 0;
LABEL_11:
  StorRequestThresholdTime = 0LL;
  if ( (*(_QWORD *)&v7 & 0x100000LL) != 0 && FilterData && FilterData->Size == 8 )
    StorRequestThresholdTime = *(_QWORD *)FilterData->Ptr;
  PortData = RaidGetPortData(SourceId, *(_QWORD *)&ControlCode, Level, MatchAnyKeyword);
  v12 = PortData;
  if ( PortData )
  {
    v13 = (_QWORD *)(PortData + 8);
    for ( i = *(_QWORD **)(PortData + 8); i != v13; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &LockHandle);
      for ( j = (_QWORD *)i[4]; ; j = (_QWORD *)*j )
      {
        v17 = 0LL;
        if ( j == i + 4 )
          break;
        v17 = j - 8;
        if ( (int)RaidAcquireAdapterRemoveLock((__int64)(j - 8)) >= 0 )
          break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v17 )
      {
        for ( k = (_QWORD *)i[9]; k != i + 9; k = (_QWORD *)*k )
        {
          v20 = k - 26;
          if ( k != (_QWORD *)208 && *(_DWORD *)v20 == 208 )
          {
            v21 = (void (__fastcall *)(__int64, __int64))v20[22];
            if ( v21 )
            {
              LOBYTE(v18) = v8;
              v21(v17[67] + 16LL, v18);
            }
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v17[32]);
      }
    }
    RaidReleasePortData(v12);
  }
}
