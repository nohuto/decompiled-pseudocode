/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x140479740
 * Callers:
 *     PsRestoreImpersonation @ 0x140435590 (PsRestoreImpersonation.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _KPROCESS *v5; // r14
  bool v6; // cl
  BOOL v7; // eax
  unsigned __int64 v9; // rtt
  unsigned __int64 v10; // rtt
  signed __int32 v11[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v12; // [rsp+20h] [rbp-88h]
  bool v13; // [rsp+21h] [rbp-87h]
  _DWORD *v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  BOOL v16; // [rsp+38h] [rbp-70h]
  _KPROCESS *v17; // [rsp+48h] [rbp-60h]
  _BYTE v18[48]; // [rsp+50h] [rbp-58h] BYREF

  v15 = a1;
  v4 = *(_DWORD **)(a1 + 240);
  v14 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_KPROCESS **)(a1 + 544);
    v17 = v5;
    if ( *(_KPROCESS **)(a2 + 184) == v5 )
    {
      v12 = 0;
    }
    else
    {
      KiStackAttachProcess(v5, 0, (__int64)v18);
      v12 = 1;
    }
    if ( a1 == a2
      || (_m_prefetchw((const void *)(a1 + 1696)),
          v9 = *(_QWORD *)(a1 + 1696) & 0xFFFFFFFFFFFFFFFEuLL,
          v9 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1696), v9 + 2, v9))
      || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1696)) )
    {
      do
      {
        v13 = (*(_DWORD *)(a1 + 1724) & 8) != 0;
        v6 = v13;
        v7 = v13;
        v16 = v7;
        v4[1511] = v7;
        v4[1530] = 0;
        if ( v5[1].ActiveProcessors.Bitmap[7] )
        {
          v4[3047] = v7;
          v4[3057] = 0;
        }
        _InterlockedOr(v11, 0);
      }
      while ( v6 != ((*(_DWORD *)(a1 + 1724) & 8) != 0) );
      if ( a1 != a2 )
      {
        _m_prefetchw((const void *)(a1 + 1696));
        v10 = *(_QWORD *)(a1 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1696), v10 - 2, v10) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1696));
      }
    }
    if ( v12 )
      KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  }
  return 0LL;
}
