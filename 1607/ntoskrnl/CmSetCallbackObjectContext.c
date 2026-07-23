/*
 * XREFs of CmSetCallbackObjectContext @ 0x1405FB060
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14061563C (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockCallbackListShared @ 0x14054CA28 (CmpLockCallbackListShared.c)
 *     CmpUnlockCallbackList @ 0x14054D408 (CmpUnlockCallbackList.c)
 *     CmpLockContextListExclusive @ 0x140603C70 (CmpLockContextListExclusive.c)
 *     CmpLockContextListShared @ 0x140603CD0 (CmpLockContextListShared.c)
 *     CmpUnlockContextList @ 0x140603E6C (CmpUnlockContextList.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v4; // r15
  NTSTATUS v9; // edi
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  LONGLONG QuadPart; // rcx
  LONGLONG v13; // rax
  void *v14; // rax
  __int64 *v15; // rbx
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v17; // rcx
  __int64 *v18; // rbx
  LARGE_INTEGER *v19; // rax
  LARGE_INTEGER **v20; // rdx
  LONGLONG v21; // rax
  LONGLONG v22; // rdx

  v4 = 0;
  v9 = -1073741275;
  if ( !Object || *(_DWORD *)Object != 1803104306 )
    return -1073741585;
  if ( OldContext )
    *OldContext = 0LL;
  CmpLockCallbackListShared();
  CmpLockContextListShared();
  v10 = (char *)Object + 72;
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      QuadPart = Cookie->QuadPart;
      while ( 1 )
      {
        v13 = v11[4];
        if ( v13 == QuadPart )
          break;
        if ( v13 >= QuadPart )
        {
          v11 = (_QWORD *)*v11;
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_15;
      }
      v14 = (void *)_InterlockedExchange64(v11 + 7, (__int64)NewContext);
      if ( OldContext )
        *OldContext = v14;
      v9 = 0;
    }
LABEL_15:
    if ( v9 >= 0 )
      break;
    if ( v4 )
    {
      v15 = (__int64 *)CallbackListHead;
      if ( (__int64 *)CallbackListHead == &CallbackListHead )
      {
LABEL_21:
        v15 = 0LL;
      }
      else
      {
        while ( Cookie->QuadPart != v15[3] )
        {
          v15 = (__int64 *)*v15;
          if ( v15 == &CallbackListHead )
            goto LABEL_21;
        }
      }
      if ( v15 )
      {
        v9 = 0;
        PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
        v17 = (LONGLONG *)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[5].QuadPart = (LONGLONG)v15;
          v18 = v15 + 8;
          PoolWithTag[4] = *Cookie;
          v19 = PoolWithTag + 2;
          v17[7] = (LONGLONG)NewContext;
          v17[6] = (LONGLONG)Object;
          v20 = (LARGE_INTEGER **)v18[1];
          if ( *v20 != (LARGE_INTEGER *)v18 )
            __fastfail(3u);
          v19->QuadPart = (LONGLONG)v18;
          v17[3] = (LONGLONG)v20;
          *v20 = v19;
          v18[1] = (__int64)v19;
          v21 = v11[1];
          v22 = *(_QWORD *)v21;
          if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
            __fastfail(3u);
          *v17 = v22;
          v17[1] = v21;
          *(_QWORD *)(v22 + 8) = v17;
          *(_QWORD *)v21 = v17;
        }
        else
        {
          v9 = -1073741670;
        }
      }
      else
      {
        v9 = -1073741584;
      }
      break;
    }
    CmpUnlockContextList();
    v4 = 1;
    CmpLockContextListExclusive();
  }
  CmpUnlockContextList();
  CmpUnlockCallbackList();
  return v9;
}
