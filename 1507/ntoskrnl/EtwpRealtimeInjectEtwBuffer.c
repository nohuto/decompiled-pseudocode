/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x1404A2364
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x1404A224C (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404ACABC (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EtwpFindUserBufferSpace @ 0x1404A257C (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x1406EADAC (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v7; // rtt
  __int64 v8; // rcx
  signed __int64 *v9; // r8
  signed __int64 *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  _DWORD *v13; // rdx
  volatile signed __int32 *v14; // r8
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rcx
  unsigned __int64 v17; // rtt
  int UserBufferSpace; // [rsp+20h] [rbp-78h]
  void *v20[3]; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  _BYTE v23[48]; // [rsp+50h] [rbp-48h] BYREF

  v20[1] = (void *)a2;
  v22 = a3;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    ++*(_DWORD *)(a2 + 84);
    if ( (a1[3] & 0x10000000) != 0 || *(_DWORD *)(a2 + 84) > 2u )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  v6 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a2 + 24) + 736LL);
  _m_prefetchw(v6);
  v7 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v7 + 2, v7)
    && !ExfAcquireRundownProtection(v6) )
  {
    return 3221225738LL;
  }
  KiStackAttachProcess(*(_KPROCESS **)(a2 + 24), 0, (__int64)v23);
  **(_DWORD **)(a2 + 136) = a1[64];
  **(_DWORD **)(a2 + 144) = a1[69];
  v8 = (unsigned int)(2 * a1[63]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v8 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v8, a2, *(unsigned int *)(a3 + 48), v20);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v20[0], (const void *)a3, *(unsigned int *)(a3 + 48));
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v13 = (char *)v20[0] + 32;
        v20[2] = (char *)v20[0] + 32;
        v14 = *(volatile signed __int32 **)(a2 + 72);
        LODWORD(v11) = *v14;
        do
        {
          *v13 = v11;
          v15 = v11;
          LODWORD(v11) = _InterlockedCompareExchange(v14, (signed __int32)v13, v11);
        }
        while ( (_DWORD)v11 != v15 );
        v11 = (unsigned int)v11;
      }
      else
      {
        v9 = (signed __int64 *)((char *)v20[0] + 32);
        v10 = *(signed __int64 **)(a2 + 72);
        _m_prefetchw(v10);
        v11 = *v10;
        do
        {
          *v9 = v11;
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10, (signed __int64)v9, v11);
        }
        while ( v11 != v12 );
      }
      v21 = v11;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v21 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
  v16 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a2 + 24) + 736LL);
  _m_prefetchw(v16);
  v17 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v17 - 2, v17) )
    ExfReleaseRundownProtection(v16);
  return (unsigned int)UserBufferSpace;
}
