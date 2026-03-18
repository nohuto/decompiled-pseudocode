/*
 * XREFs of MiFindLargePageMemory @ 0x14062B53C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14062B1CC (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiReturnPartitionResidentAvailable @ 0x140166F8C (MiReturnPartitionResidentAvailable.c)
 *     MiReturnLargePages @ 0x1401E2488 (MiReturnLargePages.c)
 *     MiUpdateLargePagePfns @ 0x1401E2B64 (MiUpdateLargePagePfns.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFindLargePageMemory(unsigned __int64 a1, __int64 a2, signed __int64 a3, int a4, unsigned int a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *PoolWithTag; // rdi
  __int64 v11; // rax
  unsigned __int16 *v12; // r12
  unsigned int v13; // ebp
  unsigned __int64 v14; // r13
  unsigned int v15; // r15d
  int ContiguousPages; // eax
  __int64 v17; // r13
  _QWORD *v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-50h]
  unsigned __int16 *v23; // [rsp+60h] [rbp-48h]
  __int64 v24; // [rsp+68h] [rbp-40h]
  unsigned int v25; // [rsp+B0h] [rbp+8h]
  ULONG_PTR v26; // [rsp+C0h] [rbp+18h]

  v6 = a3;
  if ( a3 > *(_QWORD *)(a1 + 5888) - 160LL || !(unsigned int)MiChargeResident((int *)a1, a3, 0LL) )
    return 0LL;
  if ( (int *)a1 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1402FF4C0, v6);
  PoolWithTag = 0LL;
  v22 = 0LL;
  v11 = 1LL;
  if ( a5 >> 3 == 1 )
  {
    v11 = 0LL;
  }
  else if ( a5 >> 3 == 3 && (a5 & 7) != 0 )
  {
    v11 = 2LL;
  }
  v23 = 0LL;
  v12 = 0LL;
  v25 = MiPlatformCacheAttributes[v11];
  v24 = *(_QWORD *)(a2 + 16);
  if ( !a4 )
    a4 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23524) + 1;
  v13 = a4 - 1;
  if ( v13 >= (unsigned __int16)KeNumberNodes )
  {
    v13 = 0x80000000;
  }
  else
  {
    v12 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * v13 * (unsigned __int16)KeNumberNodes);
    v23 = &v12[(unsigned __int16)KeNumberNodes];
  }
  v14 = BugCheckParameter3;
  v26 = BugCheckParameter3;
  v15 = 538968128;
  while ( 1 )
  {
    if ( !PoolWithTag )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C4C6D4Du);
      if ( !PoolWithTag )
        break;
    }
    ContiguousPages = MiFindContiguousPages(
                        a1,
                        512LL,
                        v14,
                        512LL,
                        0x200uLL,
                        v25,
                        v13,
                        0x80000000,
                        v15,
                        (unsigned __int64 *)&v21);
    if ( ContiguousPages >= 0 )
      goto LABEL_24;
    if ( (v15 & 0x40) != 0 )
    {
      v15 &= ~0x40u;
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          512LL,
                          v14,
                          512LL,
                          0x200uLL,
                          v25,
                          v13,
                          0x80000000,
                          v15,
                          (unsigned __int64 *)&v21);
    }
    if ( ContiguousPages < 0 )
    {
LABEL_34:
      if ( v13 == 0x80000000 )
        goto LABEL_37;
      if ( ++v12 == v23 )
        goto LABEL_37;
      v14 = BugCheckParameter3;
      v15 |= 0x40u;
      v13 = *v12;
      v26 = BugCheckParameter3;
    }
    else
    {
LABEL_24:
      v17 = v21;
      v6 -= 512LL;
      if ( (unsigned int)MiUpdateLargePagePfns(v24, v21) == 1 )
        *(_DWORD *)(a2 + 24) = 1;
      v18 = v22;
      if ( v22 && (v19 = v22[2], v17 + 512 == v19) )
      {
        v22[3] += 512LL;
        v18[2] = v19 - 512;
      }
      else
      {
        PoolWithTag[2] = v17;
        PoolWithTag[3] = 512LL;
        v20 = *(_QWORD **)(a2 + 8);
        *PoolWithTag = a2;
        PoolWithTag[1] = v20;
        if ( *v20 != a2 )
          __fastfail(3u);
        *v20 = PoolWithTag;
        *(_QWORD *)(a2 + 8) = PoolWithTag;
        v22 = PoolWithTag;
        PoolWithTag = 0LL;
      }
      if ( !v6 )
      {
LABEL_37:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        break;
      }
      if ( (v15 & 0x40) != 0 )
      {
        v14 = v26;
      }
      else
      {
        v14 = v17 - 1;
        v26 = v14;
        if ( v14 <= 0x200 )
          goto LABEL_34;
      }
    }
  }
  if ( v6 )
  {
    MiReturnLargePages((__int64 **)a2);
    if ( (int *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v6);
      _InterlockedExchangeAdd64(&qword_1402FF4D0, v6);
    }
    else
    {
      MiReturnPartitionResidentAvailable(a1, v6);
    }
    return 0LL;
  }
  return 1LL;
}
