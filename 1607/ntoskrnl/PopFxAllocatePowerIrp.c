/*
 * XREFs of PopFxAllocatePowerIrp @ 0x14012B9B0
 * Callers:
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *OldIrql,
        _QWORD *a8)
{
  volatile LONG *v9; // r13
  KIRQL v13; // al
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  char v17; // al
  bool v18; // zf
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21; // ett
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // edx
  KIRQL OldIrqla; // [rsp+90h] [rbp+38h]

  v9 = (volatile LONG *)(a1 + 88);
  *OldIrql = 0LL;
  *a8 = 0LL;
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v14 = *(_QWORD *)(a1 + 80);
  OldIrqla = v13;
  if ( v14 )
  {
    if ( a6 )
    {
      v15 = 0;
    }
    else
    {
      v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v14 + 208), 0LL, &File, 1u, 0x20u);
      if ( v15 < 0 )
        goto LABEL_3;
    }
    _m_prefetchw((const void *)(v14 + 32));
    v17 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
    _m_prefetchw((const void *)(v14 + 32));
    v18 = (v17 & 0x10) == 0;
    v19 = *(_DWORD *)(v14 + 32);
    if ( v18 )
    {
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 32), v19, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x10) == 0 )
      {
        _m_prefetchw((const void *)(v14 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x20) != 0 )
        {
          if ( a6 )
          {
            _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
            _InterlockedXor((volatile signed __int32 *)(v14 + 32), 0x100u);
            _m_prefetchw((const void *)(v14 + 32));
            v24 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 8) & 1;
            _m_prefetchw((const void *)(v14 + 32));
            if ( v24 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1) )
              _InterlockedAnd((volatile signed __int32 *)(v14 + 32), 0xFFFFFFDF);
            _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u);
            v15 = 0;
            *OldIrql = *(_QWORD *)(v14 + 16);
            *a8 = *(_QWORD *)(v14 + 24);
          }
          else
          {
            v15 = -1073741670;
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v14 + 208), 0LL, 0x20u);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u);
          KeResetEvent((PRKEVENT)(v14 + 536));
          v15 = 0;
          *OldIrql = *(_QWORD *)(v14 + 16);
          *a8 = *(_QWORD *)(v14 + 24);
        }
      }
    }
    else
    {
      do
      {
        v21 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 32), v19, v19);
      }
      while ( v21 != v19 );
      if ( (v19 & 0x20) != 0
        && (_m_prefetchw((const void *)(v14 + 32)),
            v22 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 8) & 1,
            _m_prefetchw((const void *)(v14 + 32)),
            v22 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1)) )
      {
        v15 = -1073741670;
      }
      else
      {
        _m_prefetchw((const void *)(v14 + 32));
        v23 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1;
        _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x20u);
        _InterlockedXor((volatile signed __int32 *)(v14 + 32), 0x200u);
        v15 = 259;
        *(_QWORD *)(v14 + 8 * v23 + 480) = a2;
        *(_DWORD *)(v14 + 4LL * (unsigned int)v23 + 496) = a3;
        *(_QWORD *)(v14 + 8LL * (unsigned int)v23 + 520) = a5;
        *(_QWORD *)(v14 + 8LL * (unsigned int)v23 + 504) = a4;
      }
    }
  }
  else
  {
    v15 = -1073741130;
  }
LABEL_3:
  ExReleaseSpinLockExclusive(v9, OldIrqla);
  return (unsigned int)v15;
}
