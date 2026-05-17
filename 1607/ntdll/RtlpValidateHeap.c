/*
 * XREFs of RtlpValidateHeap @ 0x180091244
 * Callers:
 *     RtlValidateHeap @ 0x180076860 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917D4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B60 (RtlDebugFreeHeap.c)
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
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D300 (RtlpValidateHeapHeaders.c)
 *     RtlpCheckBusyBlockTail @ 0x18005D4CC (RtlpCheckBusyBlockTail.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 */

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r15
  __int64 v4; // r12
  int v6; // r8d
  int v7; // r13d
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rdi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  unsigned __int16 v19; // di
  __int64 v20; // rsi
  unsigned __int16 v21; // di
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+58h] BYREF

  v25 = a1;
  v3 = 0;
  v4 = 0LL;
  v27 = 0LL;
  if ( !RtlpValidateHeapHeaders((void **)a1, 0) )
    goto LABEL_30;
  if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
  {
    v7 = 0;
    v8 = *(_QWORD **)(a1 + 336);
    while ( (_QWORD *)(a1 + 336) != v8 )
    {
      v13 = v8 - 2;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( *((_BYTE *)v13 + 11) != (*((_BYTE *)v13 + 8) ^ (unsigned __int8)(*((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v8 - 2);
      }
      v8 = (_QWORD *)*v8;
      v28 = *((unsigned __int16 *)v13 + 4);
      v25 = (__int64)v13;
      if ( (*((_BYTE *)v13 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", v28, v13);
        goto LABEL_26;
      }
      if ( *((_WORD *)v13 + 4) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", v13);
LABEL_26:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v13 + 11) = *((_BYTE *)v13 + 8) ^ *((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10);
          *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_30;
      }
      v3 = *((_WORD *)v13 + 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v13 + 11) = v3 ^ *((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10);
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      ++v7;
    }
    v28 = 8LL * (*(unsigned __int16 *)(a1 + 224) + 130);
    if ( RtlpValidateHeapTagsEnable
      && *(_QWORD *)(a1 + 328)
      && (int)ZwAllocateVirtualMemory(-1LL, &v27, 0LL, &v28, 4096, 4) >= 0 )
    {
      v4 = v27 + 1032;
    }
    v9 = 129LL;
    v10 = *(__int64 **)(a1 + 272);
    if ( (__int64 *)(a1 + 272) != v10 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v10 + 59) != (*((_BYTE *)v10 + 56) ^ (unsigned __int8)(*((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58))) )
          {
            RtlpAnalyzeHeapFailure(a1, v10 + 6);
            v9 = 129LL;
          }
        }
        if ( v4 )
        {
          v11 = *((_WORD *)v10 + 9);
          if ( v11 )
          {
            if ( (v11 & 0x8000u) == 0 )
            {
              if ( (v11 & 0x800) == 0 && v11 < *(_WORD *)(a1 + 224) )
                *(_QWORD *)(v4 + 8LL * v11) += (unsigned __int64)v10[4] >> 4;
            }
            else
            {
              v12 = v11 & 0x7FFF;
              if ( v12 < 0x81u )
              {
                v9 = v12;
                *(_QWORD *)(v27 + 8LL * v12) += (unsigned __int64)v10[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v10 + 58) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned __int64)(v10 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v10 + 59) = *((_BYTE *)v10 + 56) ^ *((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58);
          *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
        }
        v10 = (__int64 *)*v10;
        if ( (__int64 *)(a1 + 272) == v10 )
          goto LABEL_37;
        v9 = 129LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v10 + 59) = *((_BYTE *)v10 + 56) ^ *((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58);
        *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
LABEL_37:
    v16 = 0;
    v17 = *(_QWORD **)(a1 + 288);
    v18 = 0LL;
    v26 = 0;
    v24 = 0LL;
    if ( v17 == (_QWORD *)(a1 + 288) )
    {
LABEL_41:
      if ( v7 == v16 )
      {
        if ( *(_QWORD *)(a1 + 192) == v18 )
        {
          if ( !v27 )
            return 1;
          v20 = *(_QWORD *)(a1 + 328);
          if ( v20 )
          {
            v21 = 1;
            while ( 1 )
            {
              v20 += 16LL;
              v18 = *(_QWORD *)(v20 + 8);
              if ( *(_QWORD *)(v27 + 8LL * v21) != v18 )
                break;
              if ( ++v21 >= 0x81u )
                goto LABEL_59;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL, 129LL);
            else
              DbgPrint("HEAP: ", v21, 1LL, 129LL);
            DbgPrint(
              "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
              v21,
              *(_QWORD *)(v20 + 8),
              *(_QWORD *)(v27 + 8LL * v21),
              (const void *)(v27 + 8LL * v21));
          }
          else
          {
LABEL_59:
            v22 = *(_QWORD *)(a1 + 232);
            if ( !v22 || (v23 = *(unsigned __int16 *)(a1 + 224), v19 = 1, (unsigned __int16)v23 <= 1u) )
            {
LABEL_48:
              v28 = 0LL;
              RtlpSecMemFreeVirtualMemory(v18, &v27, &v28, 0x8000LL);
              return 1;
            }
            while ( 1 )
            {
              v18 = v19;
              v22 += 72LL;
              if ( *(_QWORD *)(v4 + 8LL * v19) != *(_QWORD *)(v22 + 8) )
                break;
              if ( ++v19 >= (unsigned __int16)v23 )
                goto LABEL_48;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL);
            else
              DbgPrint("HEAP: ", v23, 1LL);
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v19,
              v22 + 20,
              *(_QWORD *)(v22 + 8),
              *(_QWORD *)(v4 + 8LL * v19),
              v4 + 8LL * v19);
          }
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", v9);
          DbgPrint(
            "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
            v24,
            *(_QWORD *)(a1 + 192));
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v9);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", v26, v7);
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (int)v17 - 24,
                                 v6,
                                 (unsigned int)&v26,
                                 (__int64)&v24,
                                 (__int64)&v25,
                                 v4,
                                 v27) )
      {
        v17 = (_QWORD *)*v17;
        if ( v17 == (_QWORD *)(a1 + 288) )
        {
          v16 = v26;
          v18 = v24;
          goto LABEL_41;
        }
      }
    }
LABEL_30:
    RtlpBreakPointHeap(0x8000LL);
    if ( v27 )
    {
      v28 = 0LL;
      RtlpSecMemFreeVirtualMemory(v14, &v27, &v28, (unsigned int)v14);
    }
    return 0;
  }
  return 1;
}
