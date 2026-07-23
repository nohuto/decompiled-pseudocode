/*
 * XREFs of RtlpValidateHeap @ 0x180092BC8
 * Callers:
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800EF1BC (RtlDebugDestroyHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800EF428 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800EFAE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800EFE54 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800EFFE4 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800F0070 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlpCheckBusyBlockTail @ 0x18004B868 (RtlpCheckBusyBlockTail.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpValidateHeap(PVOID *BaseAddress, char a2)
{
  unsigned __int16 v3; // r15
  char *v4; // r12
  char v6; // al
  __int64 v7; // rdx
  int v8; // r13d
  PVOID *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  PVOID *v12; // rdi
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  ULONG v15; // edx
  __int64 v16; // rcx
  PVOID *v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  unsigned __int16 v21; // di
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  unsigned __int16 v24; // di
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddressa; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v25 = (__int64)BaseAddress;
  v3 = 0;
  v4 = 0LL;
  BaseAddressa = 0LL;
  v6 = RtlpValidateHeapHeaders(BaseAddress, 0);
  v7 = 0x8000LL;
  if ( !v6 )
    goto LABEL_37;
  if ( a2 || ((_DWORD)BaseAddress[14] & 0x20000000) != 0 )
  {
    v8 = 0;
    v9 = (PVOID *)BaseAddress[42];
    while ( BaseAddress + 42 != v9 )
    {
      v10 = (__int64)(v9 - 2);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v9 - 2);
      }
      v9 = (PVOID *)*v9;
      RegionSize = *(unsigned __int16 *)(v10 + 8);
      v25 = v10;
      if ( (*(_BYTE *)(v10 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v7);
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v10);
LABEL_35:
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
          *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        goto LABEL_37;
      }
      if ( *(_WORD *)(v10 + 8) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v7);
        DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v10);
        goto LABEL_35;
      }
      v3 = *(_WORD *)(v10 + 8);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v10 + 11) = v3 ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
        *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      ++v8;
    }
    RegionSize = 8LL * (*((unsigned __int16 *)BaseAddress + 112) + 130);
    if ( RtlpValidateHeapTagsEnable
      && BaseAddress[41]
      && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
    {
      v4 = (char *)BaseAddressa + 1032;
    }
    v11 = 129LL;
    v12 = (PVOID *)BaseAddress[34];
    if ( BaseAddress + 34 != v12 )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_DWORD *)v12 + 14) ^= *((_DWORD *)BaseAddress + 34);
          if ( *((_BYTE *)v12 + 59) != (*((_BYTE *)v12 + 56) ^ (unsigned __int8)(*((_BYTE *)v12 + 57) ^ *((_BYTE *)v12 + 58))) )
          {
            RtlpAnalyzeHeapFailure(BaseAddress, v12 + 6);
            v11 = 129LL;
          }
        }
        if ( v4 )
        {
          v13 = *((_WORD *)v12 + 9);
          if ( v13 )
          {
            if ( (v13 & 0x8000u) == 0 )
            {
              if ( (v13 & 0x800) == 0 && v13 < *((_WORD *)BaseAddress + 112) )
                *(_QWORD *)&v4[8 * v13] += (unsigned __int64)v12[4] >> 4;
            }
            else
            {
              v14 = v13 & 0x7FFF;
              if ( v14 < 0x81u )
              {
                v11 = v14;
                *((_QWORD *)BaseAddressa + v14) += (unsigned __int64)v12[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v12 + 58) & 4) != 0
          && !RtlpCheckBusyBlockTail((__int64)BaseAddress, (unsigned __int64)(v12 + 6)) )
        {
          break;
        }
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_BYTE *)v12 + 59) = *((_BYTE *)v12 + 56) ^ *((_BYTE *)v12 + 57) ^ *((_BYTE *)v12 + 58);
          *((_DWORD *)v12 + 14) ^= *((_DWORD *)BaseAddress + 34);
        }
        v12 = (PVOID *)*v12;
        if ( BaseAddress + 34 == v12 )
          goto LABEL_51;
        v11 = 129LL;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *((_BYTE *)v12 + 59) = *((_BYTE *)v12 + 56) ^ *((_BYTE *)v12 + 57) ^ *((_BYTE *)v12 + 58);
        *((_DWORD *)v12 + 14) ^= *((_DWORD *)BaseAddress + 34);
      }
      return 0;
    }
LABEL_51:
    v18 = (PVOID *)BaseAddress[36];
    v19 = 0LL;
    v26 = 0LL;
    if ( v18 == BaseAddress + 36 )
    {
LABEL_55:
      v25 = (__int64)BaseAddress;
      if ( v8 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v11);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v8);
      }
      else if ( BaseAddress[24] == (PVOID)v19 )
      {
        if ( !BaseAddressa )
          return 1;
        v20 = BaseAddress[41];
        if ( v20 )
        {
          v21 = 1;
          while ( 1 )
          {
            v20 += 2;
            v19 = v20[1];
            if ( *((_QWORD *)BaseAddressa + v21) != v19 )
              break;
            if ( ++v21 >= 0x81u )
              goto LABEL_70;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL, 129LL);
          else
            DbgPrint("HEAP: ", v21, 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v21,
            v20[1],
            *((_QWORD *)BaseAddressa + v21),
            (char *)BaseAddressa + 8 * v21);
        }
        else
        {
LABEL_70:
          v22 = BaseAddress[29];
          if ( !v22 || (v23 = *((unsigned __int16 *)BaseAddress + 112), v24 = 1, (unsigned __int16)v23 <= 1u) )
          {
LABEL_74:
            RegionSize = 0LL;
            RtlpSecMemFreeVirtualMemory(v19, &BaseAddressa, &RegionSize, 0x8000u);
            return 1;
          }
          while ( 1 )
          {
            v19 = v24;
            v22 += 9;
            if ( *(_QWORD *)&v4[8 * v24] != v22[1] )
              break;
            if ( ++v24 >= (unsigned __int16)v23 )
              goto LABEL_74;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL);
          else
            DbgPrint("HEAP: ", v23, 1LL);
          DbgPrint(
            "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
            v24,
            (char *)v22 + 20,
            v22[1],
            *(_QWORD *)&v4[8 * v24],
            &v4[8 * v24]);
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v11);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v26,
          (unsigned int)BaseAddress[24]);
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(
                                 BaseAddress,
                                 (__int64)&v26,
                                 (__int64)&v25,
                                 (__int64)v4,
                                 (__int64)BaseAddressa) )
      {
        v18 = (PVOID *)*v18;
        if ( v18 == BaseAddress + 36 )
        {
          v19 = v26;
          goto LABEL_55;
        }
      }
    }
LABEL_37:
    RtlpBreakPointHeap(v25);
    if ( BaseAddressa )
    {
      RegionSize = 0LL;
      RtlpSecMemFreeVirtualMemory(v16, &BaseAddressa, &RegionSize, v15);
    }
    return 0;
  }
  return 1;
}
