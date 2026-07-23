/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x14008B744
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpAeStopMeasurement @ 0x14008B818 (ExpAeStopMeasurement.c)
 */

__int64 __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, _QWORD *a2)
{
  signed __int64 v4; // rdx
  signed __int64 v5; // rcx
  bool v6; // zf
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 i; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  LONG SpareLong; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    SpareLong = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    v13 = __rdtsc();
  }
  _m_prefetchw(a1);
  v4 = *a1;
  if ( (*a1 & 2) != 0 )
  {
LABEL_11:
    if ( (v4 & 8) != 0 )
    {
      for ( i = v4 & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
      {
        v12 = *(_QWORD *)(i + 32);
        if ( v12 )
          break;
      }
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 48));
      if ( (int)result > 0 )
        return result;
      v8 = -9LL;
    }
    else
    {
      v8 = -1LL;
    }
    while ( 1 )
    {
      v9 = v8 + 4;
      if ( (v4 & 6) != 2 )
        v9 = v8;
      v10 = v9 + v4;
      result = _InterlockedCompareExchange64(a1, v9 + v4, v4);
      if ( v4 == result )
        break;
      v4 = result;
    }
    if ( (v4 & 6) == 2 )
      return ExpWakePushLock(a1, v10);
  }
  else
  {
    while ( 1 )
    {
      v5 = v4 - 16;
      if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
        v5 = 0LL;
      result = _InterlockedCompareExchange64(a1, v5, v4);
      v6 = v4 == result;
      v4 = result;
      if ( v6 )
        break;
      if ( (result & 2) != 0 )
        goto LABEL_11;
    }
    if ( a2 )
      return ExpAeStopMeasurement(&v13, a2);
  }
  return result;
}
