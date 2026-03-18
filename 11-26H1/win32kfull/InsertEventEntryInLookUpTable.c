/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1401B0620
 * Callers:
 *     _tlgWriteAgg @ 0x1401B04AC (_tlgWriteAgg.c)
 * Callees:
 *     ComputeEventEntryHash @ 0x1401B09AC (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x1401B0A4C (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x1401B0B70 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1402687A0 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1403021D0 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v6; // r13
  signed __int64 v7; // rsi
  unsigned int v8; // r12d
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // r8d
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r10
  signed __int64 v17; // r9
  __int64 v18; // rax
  int v19; // r11d
  volatile signed __int64 *v20; // rdx
  unsigned int NewEventEntry; // eax
  unsigned int v23; // eax
  KIRQL v24; // al
  KIRQL CurrentIrql; // al
  signed __int64 v26; // rax
  volatile signed __int64 v27; // rtt
  volatile LONG *v28; // rcx
  signed __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  int v32; // [rsp+A8h] [rbp+10h]

  v32 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a5;
  v29 = 0LL;
  v30 = v5;
  v7 = 0LL;
  v8 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_40;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v24 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v24, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_40:
    v6 = 1;
    goto LABEL_4;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_4:
  v12 = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
  while ( 1 )
  {
    if ( !*v12 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_16;
      }
      if ( !v7 )
      {
        LOBYTE(v11) = a3;
        LOBYTE(v10) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v10, v32, v11, a4, a5, v9, (__int64)&v29);
        v7 = v29;
        v8 = NewEventEntry;
        if ( !v29 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_16;
        }
      }
      if ( !_InterlockedCompareExchange64(v12, v7, 0LL) )
      {
        v7 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v23 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v23 )
          *(_DWORD *)(v5 + 304) = v23;
        goto LABEL_16;
      }
    }
    v13 = *v12;
    v10 = *(unsigned int *)(v13 + 40);
    if ( v9 == (_DWORD)v10 )
    {
      LOBYTE(v10) = a3;
      v14 = CompareEventEntry(v10, a4, v13);
    }
    else
    {
      v14 = v9 - v10;
    }
    if ( !v14 )
      break;
    if ( v14 >= 0 )
      v12 = (volatile signed __int64 *)(v13 + 32);
    else
      v12 = (volatile signed __int64 *)(v13 + 24);
  }
  if ( v13 && a5 < 0xFEu && a5 != 0 )
  {
    v15 = 32LL;
    v16 = a5;
    do
    {
      v17 = **(_QWORD **)(v15 + a4);
      v18 = *(_QWORD *)(v13 + 16);
      v19 = *(unsigned __int8 *)(v15 + v18 + 13);
      v20 = *(volatile signed __int64 **)(v15 + v18);
      if ( v19 == 113 )
      {
        _InterlockedAdd64(v20, v17);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v15 + v18 + 13) - 114 < 2 )
      {
        do
        {
          v26 = *v20;
          if ( v19 == 114 )
          {
            if ( v17 >= v26 )
              break;
          }
          else if ( v17 <= v26 )
          {
            break;
          }
          v27 = *v20;
        }
        while ( v27 != _InterlockedCompareExchange64(v20, v17, v26) );
      }
      v15 += 16LL;
      --v16;
    }
    while ( v16 );
    v5 = v30;
  }
LABEL_16:
  if ( v6 )
  {
    v28 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v28);
    else
      ExReleaseSpinLockShared(v28, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
