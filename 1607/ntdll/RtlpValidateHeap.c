/*
 * XREFs of RtlpValidateHeap @ 0x180091234
 * Callers:
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800FA590 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800FA6D4 (RtlDebugDestroyHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800FA938 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FB4C8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FB554 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlpCheckBusyBlockTail @ 0x18005D4BC (RtlpCheckBusyBlockTail.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 */

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r15
  char *v4; // r12
  int v6; // r13d
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 *v9; // rdi
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  unsigned __int16 v17; // di
  __int64 v18; // rsi
  unsigned __int16 v19; // di
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v23 = a1;
  v3 = 0;
  v4 = 0LL;
  BaseAddress = 0LL;
  if ( !RtlpValidateHeapHeaders((PVOID *)a1, 0) )
    goto LABEL_30;
  if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
  {
    v6 = 0;
    v7 = *(_QWORD **)(a1 + 336);
    while ( (_QWORD *)(a1 + 336) != v7 )
    {
      v12 = (__int64)(v7 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v7 - 2);
      }
      v7 = (_QWORD *)*v7;
      RegionSize = *(unsigned __int16 *)(v12 + 8);
      v23 = v12;
      if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v12);
        goto LABEL_26;
      }
      if ( *(_WORD *)(v12 + 8) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v12);
LABEL_26:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
          *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_30;
      }
      v3 = *(_WORD *)(v12 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = v3 ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      ++v6;
    }
    RegionSize = 8LL * (*(unsigned __int16 *)(a1 + 224) + 130);
    if ( RtlpValidateHeapTagsEnable
      && *(_QWORD *)(a1 + 328)
      && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
    {
      v4 = (char *)BaseAddress + 1032;
    }
    v8 = 129LL;
    v9 = *(__int64 **)(a1 + 272);
    if ( (__int64 *)(a1 + 272) != v9 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v9 + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v9 + 59) != (*((_BYTE *)v9 + 56) ^ (unsigned __int8)(*((_BYTE *)v9 + 57) ^ *((_BYTE *)v9 + 58))) )
          {
            RtlpAnalyzeHeapFailure(a1, v9 + 6);
            v8 = 129LL;
          }
        }
        if ( v4 )
        {
          v10 = *((_WORD *)v9 + 9);
          if ( v10 )
          {
            if ( (v10 & 0x8000u) == 0 )
            {
              if ( (v10 & 0x800) == 0 && v10 < *(_WORD *)(a1 + 224) )
                *(_QWORD *)&v4[8 * v10] += (unsigned __int64)v9[4] >> 4;
            }
            else
            {
              v11 = v10 & 0x7FFF;
              if ( v11 < 0x81u )
              {
                v8 = v11;
                *((_QWORD *)BaseAddress + v11) += (unsigned __int64)v9[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v9 + 58) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned __int64)(v9 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v9 + 59) = *((_BYTE *)v9 + 56) ^ *((_BYTE *)v9 + 57) ^ *((_BYTE *)v9 + 58);
          *((_DWORD *)v9 + 14) ^= *(_DWORD *)(a1 + 136);
        }
        v9 = (__int64 *)*v9;
        if ( (__int64 *)(a1 + 272) == v9 )
          goto LABEL_37;
        v8 = 129LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v9 + 59) = *((_BYTE *)v9 + 56) ^ *((_BYTE *)v9 + 57) ^ *((_BYTE *)v9 + 58);
        *((_DWORD *)v9 + 14) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
LABEL_37:
    v15 = *(_QWORD **)(a1 + 288);
    v16 = 0LL;
    v22 = 0LL;
    if ( v15 == (_QWORD *)(a1 + 288) )
    {
LABEL_41:
      if ( v6 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v8);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v6);
      }
      else if ( *(_QWORD *)(a1 + 192) == v16 )
      {
        if ( !BaseAddress )
          return 1;
        v18 = *(_QWORD *)(a1 + 328);
        if ( v18 )
        {
          v19 = 1;
          while ( 1 )
          {
            v18 += 16LL;
            v16 = *(_QWORD *)(v18 + 8);
            if ( *((_QWORD *)BaseAddress + v19) != v16 )
              break;
            if ( ++v19 >= 0x81u )
              goto LABEL_59;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL, 129LL);
          else
            DbgPrint("HEAP: ", v19, 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v19,
            *(_QWORD *)(v18 + 8),
            *((_QWORD *)BaseAddress + v19),
            (char *)BaseAddress + 8 * v19);
        }
        else
        {
LABEL_59:
          v20 = *(_QWORD *)(a1 + 232);
          if ( !v20 || (v21 = *(unsigned __int16 *)(a1 + 224), v17 = 1, (unsigned __int16)v21 <= 1u) )
          {
LABEL_48:
            RegionSize = 0LL;
            RtlpSecMemFreeVirtualMemory(v16, &BaseAddress, &RegionSize, 0x8000u);
            return 1;
          }
          while ( 1 )
          {
            v16 = v17;
            v20 += 72LL;
            if ( *(_QWORD *)&v4[8 * v17] != *(_QWORD *)(v20 + 8) )
              break;
            if ( ++v17 >= (unsigned __int16)v21 )
              goto LABEL_48;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL);
          else
            DbgPrint("HEAP: ", v21, 1LL);
          DbgPrint(
            "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
            v17,
            v20 + 20,
            *(_QWORD *)(v20 + 8),
            *(_QWORD *)&v4[8 * v17],
            &v4[8 * v17]);
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v8);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v22,
          *(_QWORD *)(a1 + 192));
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (__int64)&v22,
                                 (__int64)&v23,
                                 (__int64)v4,
                                 (__int64)BaseAddress) )
      {
        v15 = (_QWORD *)*v15;
        if ( v15 == (_QWORD *)(a1 + 288) )
        {
          v16 = v22;
          goto LABEL_41;
        }
      }
    }
LABEL_30:
    RtlpBreakPointHeap(0x8000LL);
    if ( BaseAddress )
    {
      RegionSize = 0LL;
      RtlpSecMemFreeVirtualMemory(v13, &BaseAddress, &RegionSize, v13);
    }
    return 0;
  }
  return 1;
}
