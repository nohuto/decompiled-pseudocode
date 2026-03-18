/*
 * XREFs of PfSnReferenceProcessTrace @ 0x1400FAFB0
 * Callers:
 *     PfSnLogPageFault @ 0x1400A7010 (PfSnLogPageFault.c)
 *     PfSnEndProcessTrace @ 0x1404D62A0 (PfSnEndProcessTrace.c)
 *     PfSnLogHelper @ 0x1404D6B68 (PfSnLogHelper.c)
 *     PfSnAsyncContextInitialize @ 0x1404DFB18 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FB130 (ExAcquireRundownProtectionEx.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx
  unsigned int v5; // r8d
  BOOLEAN v6; // si
  signed __int64 *v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  KIRQL v11; // bp
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // rdx

  _m_prefetchw((const void *)(a1 + 1192));
  v2 = *(_QWORD *)(a1 + 1192);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v2 & 0xF;
    v6 = 1;
    if ( v5 <= 1 )
    {
      if ( v5 )
      {
        v8 = (signed __int64 *)&v4[45];
        if ( ExAcquireRundownProtectionEx(v4 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(a1 + 1192));
          v9 = *(_QWORD *)(a1 + 1192);
          while ( (unsigned __int64)(v9 & 0xF) + 15 <= 0xF
               && v4 == (struct _EX_RUNDOWN_REF *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v10 = v9;
            v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v9 + 15, v9);
            if ( v10 == v9 )
              return v4;
          }
          _m_prefetchw(v8);
          v12 = *v8;
          if ( (*v8 & 1) != 0 )
          {
LABEL_22:
            v15 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v15 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v14 = _InterlockedCompareExchange64(v8, v12 - 30, v12);
              v13 = v12 == v14;
              v12 = v14;
              if ( v13 )
                break;
              if ( (v14 & 1) != 0 )
                goto LABEL_22;
            }
          }
        }
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
        v4 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v4 )
          v6 = ExAcquireRundownProtection(v4 + 45);
        KeReleaseSpinLock(&qword_1403058D0, v11);
        if ( !v6 )
          return 0LL;
      }
    }
  }
  return v4;
}
