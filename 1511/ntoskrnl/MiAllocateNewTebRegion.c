/*
 * XREFs of MiAllocateNewTebRegion @ 0x140482F48
 * Callers:
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400B480C (RtlFindClearBitsAndSetEx.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiInsertPrivateVad @ 0x1400BC014 (MiInsertPrivateVad.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1404831E8 (MiCreateVadEventBitmap.c)
 *     MiAdvanceVadHint @ 0x14049D2A0 (MiAdvanceVadHint.c)
 *     MiFreeVadEventBitmap @ 0x140623EA4 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewTebRegion(unsigned int a1, int a2, unsigned __int64 *a3, __int64 *a4)
{
  unsigned int v5; // esi
  PVOID PoolWithTag; // rax
  unsigned __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  void *v11; // r15
  __int64 *v12; // r13
  __int64 v13; // r9
  __int64 v14; // rbp
  int v15; // eax
  unsigned int v16; // r12d
  int VadEventBitmap; // edi
  struct _KPROCESS *v18; // rbp
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  int v22; // edx
  unsigned __int16 v23; // ax
  unsigned __int64 ClearBitsAndSet; // rsi
  __int64 *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  struct _KPROCESS *Process; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  _DWORD *v31; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp+20h] BYREF

  *a3 = 0LL;
  v5 = 512;
  *a4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v8 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFF27;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 16) = -2LL;
    *(_DWORD *)(v8 + 48) = v9 | 0x8020;
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    if ( a2 == 1 )
      v10 = 33;
    v13 = 0x200000LL;
    if ( a2 == 2 )
      v10 = 32;
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v14 = v10;
    do
    {
      v15 = *(_DWORD *)(v8 + 48);
      v36 = 0;
      v16 = v5 << 12;
      VadEventBitmap = MiSelectUserAddress(0, v14, v5 << 12, v13, (unsigned __int8)v15 >> 3, 0x80000000, &v36, a4);
      if ( VadEventBitmap >= 0 )
        break;
      v5 >>= 1;
      v13 = 0x10000LL;
    }
    while ( v5 >= 0x10 );
    v18 = Process;
    if ( v5 >= 0x10 )
    {
      v19 = (unsigned __int64)*a4 >> 12;
      v20 = v16 + *a4 - 1;
      *(_DWORD *)(v8 + 24) = v19;
      v30 = v20;
      v21 = v20 >> 12;
      *(_BYTE *)(v8 + 32) = BYTE4(v19);
      *(_BYTE *)(v8 + 33) = v20 >> 12 >> 32;
      *(_DWORD *)(v8 + 28) = v20 >> 12;
      VadEventBitmap = MiCreateVadEventBitmap(v18, v8, v5, 64LL);
      if ( VadEventBitmap < 0 )
      {
LABEL_28:
        ExFreePoolWithTag((PVOID)v8, 0);
        return (unsigned int)VadEventBitmap;
      }
      v12 = MiLocateVadEvent(v8, 64) + 2;
      v23 = (v5 - (v22 - 63)) & ExGenRandom(v22 - 63);
      *((_WORD *)v12 + 21) = v23;
      ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)v12, a1, v23);
      *((_DWORD *)v12 + 11) = a1;
      v12[4] = v8;
      *((_WORD *)v12 + 21) = ClearBitsAndSet + a1;
      *((_WORD *)v12 + 20) = a2;
      v31 = MiAddSecureEntry(v8, *a4, v30, -2147483647, 0);
      if ( v31 )
      {
        VadEventBitmap = MiInsertVadCharges(v8, v18);
        if ( VadEventBitmap >= 0 )
        {
          MiInsertPrivateVad(v8, 0LL, (__int64)v18);
          if ( v36 == 1 )
            MiAdvanceVadHint(v19, v21, 0x80000000LL);
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)v18);
          v25 = v12 + 2;
          v26 = (__int64 *)(16LL * a2 - 0xA7FEF7FBD88LL);
          v27 = *v26;
          v12[2] = *v26;
          v12[3] = (__int64)v26;
          if ( *(__int64 **)(v27 + 8) != v26 )
            __fastfail(3u);
          *(_QWORD *)(v27 + 8) = v25;
          *v26 = (__int64)v25;
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)v18);
          v11 = v31;
          *a4 += ClearBitsAndSet << 12;
          *a3 = v8;
          goto LABEL_16;
        }
        v11 = v31;
      }
      else
      {
        VadEventBitmap = -1073741670;
        v11 = 0LL;
      }
LABEL_24:
      if ( v12 )
        MiFreeVadEventBitmap(v18, v8, 64LL);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      goto LABEL_28;
    }
LABEL_16:
    if ( VadEventBitmap >= 0 )
      return (unsigned int)VadEventBitmap;
    goto LABEL_24;
  }
  return 3221225495LL;
}
