/*
 * XREFs of MiAllocateNewTebRegion @ 0x1404A6450
 * Callers:
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400171EC (RtlFindClearBitsAndSetEx.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiInsertPrivateVad @ 0x140095DF0 (MiInsertPrivateVad.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140435A80 (MiAdvanceVadHint.c)
 *     MiCreateVadEventBitmap @ 0x1404A66FC (MiCreateVadEventBitmap.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 *     MiFreeVadEventBitmap @ 0x140659E10 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewTebRegion(unsigned int a1, int a2, unsigned __int64 *a3, __int64 *a4)
{
  unsigned int v5; // ebx
  PVOID PoolWithTag; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  int v10; // r15d
  __int64 *v11; // r13
  int v12; // r9d
  struct _KPROCESS *Process; // rbp
  int v14; // eax
  unsigned int v15; // r12d
  int VadEventBitmap; // esi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  int v20; // edx
  unsigned __int16 v21; // ax
  void *v22; // rbx
  __int64 v23; // rbx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-60h]
  unsigned __int64 ClearBitsAndSet; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+C8h] [rbp+20h] BYREF

  *a3 = 0LL;
  v5 = 512;
  *a4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v8 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFF27;
    *(_QWORD *)(v8 + 16) = -2LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_DWORD *)(v8 + 48) = v9 | 0x8020;
    v28 = 0LL;
    v10 = 0;
    v11 = 0LL;
    if ( a2 == 1 )
      v10 = 33;
    v12 = 0x200000;
    if ( a2 == 2 )
      v10 = 32;
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    do
    {
      v14 = *(_DWORD *)(v8 + 48);
      v35 = 0;
      v15 = v5 << 12;
      VadEventBitmap = MiSelectUserAddress(
                         0,
                         v10,
                         v5 << 12,
                         v12,
                         (unsigned __int8)v14 >> 3,
                         0x80000000,
                         (__int64)&v35,
                         (__int64)a4);
      if ( VadEventBitmap >= 0 )
        break;
      v5 >>= 1;
      v12 = 0x10000;
    }
    while ( v5 >= 0x10 );
    if ( v5 < 0x10 )
      goto LABEL_16;
    v17 = (unsigned __int64)*a4 >> 12;
    v18 = v15 + *a4 - 1;
    *(_DWORD *)(v8 + 24) = v17;
    v29 = v18;
    v19 = v18 >> 12;
    *(_BYTE *)(v8 + 32) = BYTE4(v17);
    *(_BYTE *)(v8 + 33) = v18 >> 12 >> 32;
    *(_DWORD *)(v8 + 28) = v18 >> 12;
    VadEventBitmap = MiCreateVadEventBitmap(Process, v8, v5, 64LL);
    if ( VadEventBitmap < 0 )
    {
LABEL_27:
      ExFreePoolWithTag((PVOID)v8, 0);
      return (unsigned int)VadEventBitmap;
    }
    v11 = MiLocateVadEvent(v8, 64) + 2;
    v21 = (v5 - (v20 - 63)) & ExGenRandom(v20 - 63);
    *((_WORD *)v11 + 21) = v21;
    ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)v11, a1, v21);
    *((_DWORD *)v11 + 11) = a1;
    *((_WORD *)v11 + 21) = ClearBitsAndSet + a1;
    *((_WORD *)v11 + 20) = a2;
    v11[4] = v8;
    v28 = MiAddSecureEntry(v8, *a4, v29, -2147483647, 0);
    v22 = v28;
    if ( v28 )
    {
      VadEventBitmap = MiInsertVadCharges(v8, Process);
      if ( VadEventBitmap >= 0 )
      {
        MiInsertPrivateVad(v8, 0LL, (__int64)Process);
        if ( v35 == 1 )
          MiAdvanceVadHint(v17, v19, 0x80000000);
        v23 = qword_140327FD0 + 276840448;
        LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)Process);
        v24 = v11 + 2;
        v25 = v23 + 16 * (a2 + 8LL);
        v26 = *(_QWORD *)v25;
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
          __fastfail(3u);
        *v24 = v26;
        v11[3] = v25;
        *(_QWORD *)(v26 + 8) = v24;
        *(_QWORD *)v25 = v24;
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)Process);
        *a3 = v8;
        *a4 += ClearBitsAndSet << 12;
LABEL_16:
        if ( VadEventBitmap >= 0 )
          return (unsigned int)VadEventBitmap;
        v22 = v28;
      }
    }
    else
    {
      VadEventBitmap = -1073741670;
    }
    if ( v11 )
      MiFreeVadEventBitmap(Process, v8, 64LL);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_27;
  }
  return 3221225495LL;
}
