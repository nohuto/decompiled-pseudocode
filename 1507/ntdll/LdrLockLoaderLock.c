/*
 * XREFs of LdrLockLoaderLock @ 0x1800086A0
 * Callers:
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpTryAcquireLoaderLock @ 0x180008804 (LdrpTryAcquireLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrLockLoaderLock(int a1, _DWORD *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int16 v8; // cx
  __int16 v9; // ax
  int UniqueThread; // eax
  int v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+48h] [rbp+10h]

  v5 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else if ( a3 )
  {
    if ( (a1 & 2) == 0 || a2 )
    {
      if ( LdrInitState == 3 )
      {
        if ( (a1 & 1) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
            {
              UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
              *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                            &LdrpLoaderLockAcquisitionCount,
                                                                                            1u)
                                                                                        + 1) & 0xFFFE | 1LL;
              *a2 = 1;
            }
            else
            {
              *a2 = 2;
            }
          }
          else
          {
            LdrpAcquireLoaderLock();
            if ( a2 )
              *a2 = 1;
            v6 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *a3 = ((unsigned __int64)(v6 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                &LdrpLoaderLockAcquisitionCount,
                                                                                1u)
                                                                            + 1) & 0xFFFE | 1LL;
          }
        }
        else
        {
          if ( (a1 & 2) != 0 )
          {
            if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
            {
              *a2 = 2;
              return v5;
            }
            *a2 = 1;
            v11 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v8 = _InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u);
            v9 = v11;
          }
          else
          {
            LdrpAcquireLoaderLock();
            if ( a2 )
              *a2 = 1;
            v12 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v8 = _InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u);
            v9 = v12;
          }
          *a3 = ((unsigned __int64)(v9 & 0xFFF) << 48) | (unsigned __int16)(v8 + 1) & 0xFFFE | 1LL;
        }
      }
    }
    else
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225713LL);
    return (unsigned int)-1073741583;
  }
  return v5;
}
