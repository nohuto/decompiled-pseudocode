/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x140101C68
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x140101AD0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x1400F3720 (ExpWakePushLock.c)
 */

int __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, signed __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r10
  LONG SpareLong; // ebx
  unsigned __int64 v6; // r11
  signed __int64 v7; // rdx
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 i; // rax
  __int64 v15; // rcx
  unsigned __int64 v17; // [rsp+20h] [rbp-28h]
  LONG v18; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v19; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    SpareLong = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    v6 = __rdtsc();
  }
  else
  {
    CurrentThread = v19;
    SpareLong = v18;
    v6 = v17;
  }
  _m_prefetchw(a1);
  v7 = *a1;
  if ( (*a1 & 2) != 0 )
  {
LABEL_13:
    if ( (v7 & 8) != 0 )
    {
      for ( i = v7 & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
      {
        v15 = *(_QWORD *)(i + 32);
        if ( v15 )
          break;
      }
      LODWORD(v10) = _InterlockedDecrement((volatile signed __int32 *)(v15 + 48));
      if ( (int)v10 > 0 )
        return v10;
      v11 = -9LL;
    }
    else
    {
      v11 = -1LL;
    }
    while ( 1 )
    {
      v12 = v11 + 4;
      if ( (v7 & 6) != 2 )
        v12 = v11;
      v13 = v12 + v7;
      v10 = _InterlockedCompareExchange64(a1, v12 + v7, v7);
      if ( v7 == v10 )
        break;
      v7 = v10;
    }
    if ( (v7 & 6) == 2 )
      LODWORD(v10) = ExpWakePushLock(a1, v13);
  }
  else
  {
    while ( 1 )
    {
      v8 = v7 - 16;
      if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
        v8 = 0LL;
      v10 = _InterlockedCompareExchange64(a1, v8, v7);
      v9 = v7 == v10;
      v7 = v10;
      if ( v9 )
        break;
      if ( (v10 & 2) != 0 )
        goto LABEL_13;
    }
    if ( a2 )
    {
      v10 = __rdtsc();
      if ( CurrentThread->WaitBlock[0].SpareLong == SpareLong )
      {
        v10 -= v6;
        *a2 = v10;
      }
    }
  }
  return v10;
}
