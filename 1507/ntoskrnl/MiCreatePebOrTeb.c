/*
 * XREFs of MiCreatePebOrTeb @ 0x140421270
 * Callers:
 *     MmCreateTeb @ 0x140420A54 (MmCreateTeb.c)
 *     MiInitializeWowPeb @ 0x140462398 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140010018 (MiCheckForConflictingVadExistence.c)
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiGetWsAndInsertVad @ 0x14008A9F0 (MiGetWsAndInsertVad.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiFindEmptyAddressRangeDown @ 0x140527984 (MiFindEmptyAddressRangeDown.c)
 */

__int64 __fastcall MiCreatePebOrTeb(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v5; // r15
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned int v15; // eax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  void *v19; // r13
  int EmptyAddressRangeDown; // esi
  unsigned __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]

  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_QWORD *)(v9 + 16) = -2LL;
  v12 = MEMORY[0xFFFFF58010804248];
  if ( a2 )
    v12 = MEMORY[0xFFFFF580108042F8];
  v13 = ((v5 & 0xFFF) != 0) + ((unsigned int)v5 >> 12);
  *(_BYTE *)(v9 + 34) = v13 >> 31;
  v14 = (unsigned __int64)(unsigned int)v13 << 12;
  *(_DWORD *)(v9 + 52) = v13 | 0x80000000;
  v15 = *(_DWORD *)(v9 + 48) & 0xFFFF7F07 | 0x8020;
  *(_DWORD *)(v9 + 48) = v15;
  if ( (_DWORD)v5 == 6200 )
    *(_DWORD *)(v9 + 48) = v15 | 0x10000;
  *(_QWORD *)(v9 + 40) = 0LL;
  v25 = 1;
  if ( (_DWORD)v5 == 904 || (_DWORD)v5 == 608 )
  {
    v16 = MEMORY[0xFFFFF58010804240];
    if ( (_DWORD)v5 == 608 && !*(_QWORD *)(a1 + 1064) )
      v16 = 0x80000000LL - ((unsigned __int8)ExGenRandom(1) << 16);
    v22 = v16 - ((((v5 & 0xFFF) != 0) + ((unsigned int)v5 >> 12) + 1 + (ExGenRandom(1) & 0xF)) << 12);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v23, v24);
    if ( (v22 >= 0x10000 || *(_QWORD *)(a1 + 1784)) && !MiCheckForConflictingVadExistence() )
    {
      v25 = 0;
      *a4 = v22;
      goto LABEL_13;
    }
    if ( v12 < v16 )
      v16 = v12;
  }
  else
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v10, v11);
    v16 = v12;
  }
  if ( v16 >= v14 && (v16 - v14 >= 0x10000 || *(_QWORD *)(a1 + 1784)) && !MiCheckForConflictingVadExistence() )
  {
    *a4 = v16 - v14;
    goto LABEL_13;
  }
  EmptyAddressRangeDown = MiFindEmptyAddressRangeDown(
                            (int)a1 + 1544,
                            v14,
                            4096,
                            v16,
                            (*(_DWORD *)(v9 + 48) >> 3) & 0x1F,
                            (__int64)a4);
  if ( EmptyAddressRangeDown >= 0 )
  {
LABEL_13:
    v17 = *a4 >> 12;
    *(_DWORD *)(v9 + 24) = v17;
    *(_BYTE *)(v9 + 32) = BYTE4(v17);
    v18 = (v5 - 1 + *a4) >> 12;
    *(_DWORD *)(v9 + 28) = v18;
    *(_BYTE *)(v9 + 33) = BYTE4(v18);
    v19 = (void *)MiAddSecureEntry(v9, *a4, ((_DWORD)v18 << 12) | 0xFFFu, -2147483647, 0);
    if ( v19 )
    {
      EmptyAddressRangeDown = MiInsertVadCharges(v9, a1);
      if ( EmptyAddressRangeDown >= 0 )
      {
        if ( v25 == 1 && v16 == v12 )
        {
          if ( a2 )
            MEMORY[0xFFFFF580108042F8] = *a4;
          else
            MEMORY[0xFFFFF58010804248] = *a4;
        }
        if ( (_DWORD)v5 == 6200 )
        {
          *(_QWORD *)(v9 + 72) = 0LL;
          *(_QWORD *)(v9 + 80) = 0LL;
        }
        MiGetWsAndInsertVad(v9);
      }
    }
    else
    {
      EmptyAddressRangeDown = -1073741670;
    }
    goto LABEL_22;
  }
  v19 = 0LL;
LABEL_22:
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  if ( EmptyAddressRangeDown < 0 )
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  return (unsigned int)EmptyAddressRangeDown;
}
