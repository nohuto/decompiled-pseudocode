/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140085234
 * Callers:
 *     _TlgWriteAgg @ 0x14008517C (_TlgWriteAgg.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RunningHash @ 0x140085534 (RunningHash.c)
 *     CreateNewEventEntry @ 0x1400855EC (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1400AD780 (DestroyEventEntry.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     EnableFlushTimer @ 0x1400F8C24 (EnableFlushTimer.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r15
  _WORD *v8; // r12
  char v9; // r8
  unsigned __int8 v10; // cl
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r11
  unsigned int v14; // ecx
  int v15; // r13d
  __int64 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rdi
  int v19; // r9d
  volatile signed __int64 *v20; // rdi
  unsigned __int16 *v21; // r14
  unsigned int v22; // esi
  __int64 v23; // r12
  __int64 v24; // r10
  __int64 v25; // rax
  int v26; // ecx
  unsigned __int8 v27; // r9
  int v28; // r11d
  signed __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // r10d
  volatile signed __int64 *v32; // r8
  unsigned int v33; // esi
  signed __int64 v35; // rax
  unsigned int NewEventEntry; // eax
  unsigned int v37; // eax
  volatile signed __int64 v38; // rtt
  unsigned int v39; // [rsp+30h] [rbp-28h] BYREF
  signed __int64 v40[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = a3;
  v40[0] = 0LL;
  v41 = 0;
  v39 = 0;
  v8 = a2;
  RunningHash(&v39, a2, 2LL);
  v10 = v9 + a5;
  if ( (unsigned __int8)(v9 + a5) < v6 )
  {
    v11 = a4 + 16LL * v10;
    v12 = (unsigned __int8)(v6 - v10);
    do
    {
      RunningHash(&v39, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
  }
  v14 = ((9 * v39) >> 11) ^ (9 * v39);
  v15 = 32769 * v14;
  v39 = v14;
  v16 = v14 & 0x1F;
  if ( KeGetCurrentIrql() >= 2u )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
  }
  else
  {
    v18 = KeAbPreAcquire(v5 + 328, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 328), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5 + 328, v18, v5 + 328);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
  }
  v20 = (volatile signed __int64 *)(v5 + 8 * v16);
  while ( 1 )
  {
    if ( !*v20 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 372);
        v33 = -1073741789;
        goto LABEL_28;
      }
      if ( !v40[0] )
      {
        LOBYTE(v19) = a5;
        LOBYTE(v17) = v6;
        NewEventEntry = CreateNewEventEntry((_DWORD)v8, v17, a4, v19, v15, (__int64)v40);
        v41 = NewEventEntry;
        v33 = NewEventEntry;
        if ( !v40[0] )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 376);
          else
            ++*(_DWORD *)(v5 + 380);
          goto LABEL_28;
        }
      }
      if ( !_InterlockedCompareExchange64(v20, v40[0], 0LL) )
      {
        v40[0] = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 416), *(unsigned int *)(v5 + 424), 0LL);
        v37 = *(_DWORD *)(v5 + 256);
        v33 = v41;
        if ( *(_DWORD *)(v5 + 360) < v37 )
          *(_DWORD *)(v5 + 360) = v37;
        goto LABEL_28;
      }
    }
    v21 = (unsigned __int16 *)*v20;
    v17 = *(_DWORD *)(*v20 + 40);
    if ( v15 != v17 )
    {
      v26 = v15 - v17;
LABEL_20:
      v24 = a4;
      goto LABEL_21;
    }
    if ( *v8 != *v21 )
    {
      v26 = (unsigned __int16)*v8 - *v21;
      goto LABEL_20;
    }
    v22 = *((unsigned __int8 *)v21 + 45) + 2;
    if ( v22 >= v6 )
    {
LABEL_18:
      v26 = 0;
LABEL_19:
      v6 = a3;
      goto LABEL_20;
    }
    v23 = *((_QWORD *)v21 + 2);
    while ( 1 )
    {
      v24 = a4;
      v25 = 16LL * v22;
      v17 = *(_DWORD *)(v25 + a4 + 8);
      v26 = v17 - *(_DWORD *)(v25 + v23 + 8);
      if ( v26 )
        break;
      v26 = memcmp(*(const void **)(v25 + a4), *(const void **)(v25 + v23), v17);
      if ( v26 )
        goto LABEL_19;
      if ( ++v22 >= v6 )
        goto LABEL_18;
    }
    v6 = a3;
LABEL_21:
    if ( !v26 )
      break;
    v20 = (volatile signed __int64 *)(v21 + 12);
    if ( v26 >= 0 )
      v20 = (volatile signed __int64 *)(v21 + 16);
    v8 = a2;
  }
  if ( v21 )
  {
    v27 = 2;
    v28 = a5 + 2;
    if ( !__OFSUB__(v28, 2) && v28 != 2 )
    {
      do
      {
        v29 = **(_QWORD **)(v24 + 16LL * v27);
        v30 = *((_QWORD *)v21 + 2);
        v31 = *(unsigned __int8 *)(v30 + 16LL * v27 + 13);
        v32 = *(volatile signed __int64 **)(v30 + 16LL * v27);
        if ( v31 == 113 )
        {
          _InterlockedExchangeAdd64(v32, v29);
        }
        else if ( (unsigned int)(v31 - 114) <= 1 )
        {
          do
          {
            v35 = *v32;
            if ( v31 == 114 )
            {
              if ( v29 >= v35 )
                break;
            }
            else if ( v29 <= v35 )
            {
              break;
            }
            v38 = *v32;
          }
          while ( v38 != _InterlockedCompareExchange64(v32, v29, v35) );
        }
        v24 = a4;
        ++v27;
      }
      while ( v27 < v28 );
    }
  }
  v33 = v41;
LABEL_28:
  if ( KeGetCurrentIrql() >= 2u )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 328), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 328);
    KeAbPostRelease(v5 + 328);
  }
  if ( v40[0] )
    DestroyEventEntry();
  return v33;
}
