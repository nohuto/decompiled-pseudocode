/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C00F8FD8
 * Callers:
 *     _TlgWriteAgg @ 0x1C00BC1D8 (_TlgWriteAgg.c)
 * Callees:
 *     memcmp @ 0x1C0089C20 (memcmp.c)
 *     CreateNewEventEntry @ 0x1C00F8A74 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1C00F8C94 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1C00F8CB0 (EnableFlushTimer.c)
 *     RunningHash @ 0x1C00F9368 (RunningHash.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  unsigned __int8 v7; // r12
  __int64 v8; // r15
  __int128 *v9; // r13
  char v10; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r11
  unsigned int v15; // ecx
  int v16; // r14d
  __int64 v17; // rsi
  volatile signed __int64 *v18; // rsi
  unsigned int v19; // eax
  volatile signed __int64 v20; // r15
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // r14d
  __int64 v25; // r13
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // eax
  unsigned __int8 v30; // r9
  int v31; // r11d
  signed __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r10d
  volatile signed __int64 *v35; // r8
  signed __int64 v36; // rax
  volatile signed __int64 v37; // rtt
  unsigned int v39; // [rsp+30h] [rbp-18h] BYREF
  int v40; // [rsp+34h] [rbp-14h]
  __int64 v41; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v42; // [rsp+90h] [rbp+48h]

  v5 = qword_1C0118780;
  v6 = 0LL;
  v39 = 0;
  v7 = a3;
  v8 = a4;
  v41 = 0LL;
  v9 = a2;
  v42 = 0;
  RunningHash(&v39, a2, 2LL);
  v11 = v10 + a5;
  if ( (unsigned __int8)(v10 + a5) < v7 )
  {
    v12 = v8 + 16LL * v11;
    v13 = (unsigned __int8)(v7 - v11);
    do
    {
      RunningHash(&v39, *(_QWORD *)v12, *(unsigned int *)(v12 + 8));
      v12 = v14 + 16;
      --v13;
    }
    while ( v13 );
  }
  v15 = ((9 * v39) >> 11) ^ (9 * v39);
  v16 = 32769 * v15;
  v39 = v15;
  v40 = 32769 * v15;
  v17 = v15 & 0x1F;
  if ( KeGetCurrentIrql() >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
  else
    ExAcquirePushLockSharedEx(v5 + 328, 0LL);
  v18 = (volatile signed __int64 *)(v5 + 8 * v17);
  while ( 1 )
  {
    if ( !*v18 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 372);
        v28 = -1073741789;
        goto LABEL_54;
      }
      if ( !v6 )
      {
        v19 = CreateNewEventEntry(v9, v7, v8, a5, v16, &v41);
        v6 = v41;
        v42 = v19;
        if ( !v41 )
        {
          v28 = v19;
          if ( v19 == -1073741801 )
            ++*(_DWORD *)(v5 + 376);
          else
            ++*(_DWORD *)(v5 + 380);
          goto LABEL_54;
        }
      }
      if ( !_InterlockedCompareExchange64(v18, v6, 0LL) )
      {
        v41 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 416), *(_DWORD *)(v5 + 424));
        v29 = *(_DWORD *)(v5 + 256);
        v6 = v41;
        v28 = v42;
        if ( *(_DWORD *)(v5 + 360) < v29 )
          *(_DWORD *)(v5 + 360) = v29;
        goto LABEL_54;
      }
      v6 = v41;
    }
    v20 = *v18;
    v21 = *(_DWORD *)(*v18 + 40);
    if ( v16 != v21 )
    {
      v22 = v16;
LABEL_16:
      v23 = v22 - v21;
LABEL_26:
      v26 = a4;
      goto LABEL_27;
    }
    LOWORD(v22) = *(_WORD *)v9;
    LOWORD(v21) = *(_WORD *)v20;
    if ( *(_WORD *)v9 != *(_WORD *)v20 )
    {
      v21 = (unsigned __int16)v21;
      v22 = (unsigned __int16)v22;
      goto LABEL_16;
    }
    v24 = *(unsigned __int8 *)(v20 + 45) + 2;
    if ( v24 >= v7 )
    {
LABEL_24:
      v23 = 0;
LABEL_25:
      v7 = a3;
      v16 = v40;
      goto LABEL_26;
    }
    v25 = *(_QWORD *)(v20 + 16);
    while ( 1 )
    {
      v26 = a4;
      v27 = 16LL * v24;
      v23 = *(_DWORD *)(v27 + a4 + 8) - *(_DWORD *)(v27 + v25 + 8);
      if ( v23 )
        break;
      v23 = memcmp(*(const void **)(v27 + a4), *(const void **)(v27 + v25), *(unsigned int *)(v27 + a4 + 8));
      if ( v23 )
        goto LABEL_25;
      if ( ++v24 >= v7 )
        goto LABEL_24;
    }
    v16 = v40;
    v7 = a3;
LABEL_27:
    if ( !v23 )
      break;
    v18 = (volatile signed __int64 *)(v20 + 24);
    if ( v23 >= 0 )
      v18 = (volatile signed __int64 *)(v20 + 32);
    v9 = a2;
    v8 = a4;
  }
  if ( v20 )
  {
    v30 = 2;
    v31 = a5 + 2;
    if ( !__OFSUB__(v31, 2) && v31 != 2 )
    {
      do
      {
        v32 = **(_QWORD **)(v26 + 16LL * v30);
        v33 = *(_QWORD *)(v20 + 16);
        v34 = *(unsigned __int8 *)(v33 + 16LL * v30 + 13);
        v35 = *(volatile signed __int64 **)(v33 + 16LL * v30);
        if ( v34 == 113 )
        {
          _InterlockedExchangeAdd64(v35, v32);
        }
        else if ( (unsigned int)(v34 - 114) <= 1 )
        {
          do
          {
            v36 = *v35;
            if ( v34 == 114 )
            {
              if ( v32 >= v36 )
                break;
            }
            else if ( v32 <= v36 )
            {
              break;
            }
            v37 = *v35;
          }
          while ( v37 != _InterlockedCompareExchange64(v35, v32, v36) );
        }
        v26 = a4;
        ++v30;
      }
      while ( v30 < v31 );
      v6 = v41;
    }
  }
  v28 = v42;
LABEL_54:
  if ( KeGetCurrentIrql() >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
  else
    ExReleasePushLockSharedEx(v5 + 328);
  if ( v6 )
    DestroyEventEntry(v6);
  return v28;
}
