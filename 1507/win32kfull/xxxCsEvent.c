/*
 * XREFs of xxxCsEvent @ 0x1C02392D4
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C00FBA48 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C02197D0 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C0239504 (xxxMessageEvent.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  size_t v7; // rsi
  void *v8; // rax
  __int64 v9; // rbx
  int v11; // r14d
  int v12; // r15d
  struct tagSVR_INSTANCE_INFO *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 i; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v22[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = gptiCurrent;
  v7 = (unsigned int)a2 + 8;
  v8 = (void *)Win32AllocPoolWithQuota(v7, 895775573LL);
  v9 = (__int64)v8;
  if ( !v8 )
    return 16392LL;
  memmove(v8, Src, v7);
  *(_WORD *)(v9 + 6) = a2;
  v11 = 0;
  v12 = 0;
  v13 = psiiList;
  if ( psiiList )
  {
    while ( 1 )
    {
      if ( ((*(_DWORD *)v9 & *((_DWORD *)v13 + 10)) == 0 || *(_WORD *)(v9 + 4))
        && ((*(_DWORD *)v9 & *((_DWORD *)v13 + 10)) != 0 || !*(_WORD *)(v9 + 4)) )
      {
        if ( v11 >= v12 )
        {
          if ( v5 )
          {
            v14 = (unsigned int)(8 * v12);
            v15 = v5;
            v12 += 8;
            v5 = UserReAllocPoolWithQuota(v5, v14, 8LL * v12, 929330005LL);
            if ( !v5 )
              Win32FreePool(v15);
          }
          else
          {
            v12 = 8;
            v5 = Win32AllocPoolWithQuota(64LL, 912552789LL);
          }
          if ( !v5 )
          {
            Win32FreePool(v9);
            return 16392LL;
          }
        }
        v16 = (__int64 *)*((_QWORD *)v13 + 6);
        if ( v16 )
          v17 = *v16;
        else
          v17 = 0LL;
        *(_QWORD *)(v4 + v5) = v17;
        ++v11;
        v4 += 8LL;
      }
      v13 = (struct tagSVR_INSTANCE_INFO *)*((_QWORD *)v13 + 3);
      if ( !v13 )
      {
        v6 = gptiCurrent;
        break;
      }
    }
  }
  PushW32ThreadLock(v9, v24, (__int64)Win32FreePool);
  if ( v5 )
  {
    PushW32ThreadLock(v5, v23, (__int64)Win32FreePool);
    for ( i = 0LL; i < v11; ++i )
    {
      v19 = ValidateHwnd(*(_QWORD *)(v5 + 8 * i));
      if ( v19 )
      {
        v22[0] = *(_QWORD *)(v6 + 376);
        *(_QWORD *)(v6 + 376) = v22;
        v22[1] = v19;
        ++*(_DWORD *)(v19 + 8);
        xxxSendMessage((struct tagWND *)v19, 0x3Cu, 0LL, v9);
        ThreadUnlock1(v21, v20);
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v23);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v24);
  return 0LL;
}
