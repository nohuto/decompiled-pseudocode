/*
 * XREFs of xxxCsEvent @ 0x1C000C5DC
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C0108BF8 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C0219660 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C02396E8 (xxxMessageEvent.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rsi
  _WORD *v8; // rax
  _WORD *v9; // rbx
  int v10; // r14d
  int v11; // r15d
  struct tagSVR_INSTANCE_INFO *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 i; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r13
  _QWORD v22[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v24[24]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = gptiCurrent;
  v7 = (unsigned int)a2 + 8;
  v8 = (_WORD *)Win32AllocPoolWithQuota(v7, 895775573LL);
  v9 = v8;
  if ( !v8 )
    return 16392LL;
  memmove(v8, Src, (unsigned int)v7);
  v9[3] = a2;
  v10 = 0;
  v11 = 0;
  v12 = psiiList;
  if ( psiiList )
  {
    while ( 1 )
    {
      if ( ((*(_DWORD *)v9 & *((_DWORD *)v12 + 10)) == 0 || v9[2])
        && ((*(_DWORD *)v9 & *((_DWORD *)v12 + 10)) != 0 || !v9[2]) )
      {
        if ( v10 >= v11 )
        {
          if ( v5 )
          {
            v20 = (unsigned int)(8 * v11);
            v21 = v5;
            v11 += 8;
            v5 = UserReAllocPoolWithQuota(v5, v20, 8LL * v11, 929330005LL);
            if ( !v5 )
              Win32FreePool(v21);
          }
          else
          {
            v11 = 8;
            v5 = Win32AllocPoolWithQuota(64LL, 912552789LL);
          }
          if ( !v5 )
          {
            Win32FreePool(v9);
            return 16392LL;
          }
        }
        v13 = (__int64 *)*((_QWORD *)v12 + 6);
        if ( v13 )
          v14 = *v13;
        else
          v14 = 0LL;
        *(_QWORD *)(v4 + v5) = v14;
        ++v10;
        v4 += 8LL;
      }
      v12 = (struct tagSVR_INSTANCE_INFO *)*((_QWORD *)v12 + 3);
      if ( !v12 )
      {
        v6 = gptiCurrent;
        break;
      }
    }
  }
  PushW32ThreadLock(v9, v24, Win32FreePool);
  if ( v5 )
  {
    PushW32ThreadLock(v5, v23, Win32FreePool);
    for ( i = 0LL; i < v10; ++i )
    {
      v16 = ValidateHwnd(*(_QWORD *)(v5 + 8 * i));
      if ( v16 )
      {
        v22[0] = *(_QWORD *)(v6 + 368);
        *(_QWORD *)(v6 + 368) = v22;
        v22[1] = v16;
        ++*(_DWORD *)(v16 + 8);
        xxxSendMessage(v16, 60LL, 0LL, v9);
        ThreadUnlock1(v18, v17);
      }
    }
    PopAndFreeAlwaysW32ThreadLock(v23);
  }
  PopAndFreeAlwaysW32ThreadLock(v24);
  return 0LL;
}
