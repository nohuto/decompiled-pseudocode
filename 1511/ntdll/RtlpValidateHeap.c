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

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r15
  __int64 v4; // r12
  char v6; // al
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // r13d
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // rdi
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v19; // eax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int16 v23; // di
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int16 v26; // di
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+48h] [rbp-8h] BYREF
  int v29; // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a1;
  v3 = 0;
  v4 = 0LL;
  v30 = 0LL;
  v6 = RtlpValidateHeapHeaders((void **)a1, 0);
  v8 = 0x8000LL;
  if ( !v6 )
    goto LABEL_37;
  if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
  {
    v9 = 0;
    v10 = *(_QWORD **)(a1 + 336);
    while ( (_QWORD *)(a1 + 336) != v10 )
    {
      v11 = v10 - 2;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( *((_BYTE *)v11 + 11) != (*((_BYTE *)v11 + 8) ^ (unsigned __int8)(*((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v10 - 2);
      }
      v10 = (_QWORD *)*v10;
      v31 = *((unsigned __int16 *)v11 + 4);
      v27 = (__int64)v11;
      if ( (*((_BYTE *)v11 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v8);
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", v31, v11);
LABEL_35:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v11 + 11) = *((_BYTE *)v11 + 8) ^ *((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10);
          *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_37;
      }
      if ( *((_WORD *)v11 + 4) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v8);
        DbgPrint("Non-Dedicated free list element %p is out of order\n", v11);
        goto LABEL_35;
      }
      v3 = *((_WORD *)v11 + 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v11 + 11) = v3 ^ *((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10);
        *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      ++v9;
    }
    v31 = 8LL * (*(unsigned __int16 *)(a1 + 224) + 130);
    if ( RtlpValidateHeapTagsEnable
      && *(_QWORD *)(a1 + 328)
      && (int)ZwAllocateVirtualMemory(-1LL, &v30, 0LL, &v31, 4096, 4) >= 0 )
    {
      v4 = v30 + 1032;
    }
    v12 = 129LL;
    v13 = *(__int64 **)(a1 + 272);
    if ( (__int64 *)(a1 + 272) != v13 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v13 + 59) != (*((_BYTE *)v13 + 56) ^ (unsigned __int8)(*((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58))) )
          {
            RtlpAnalyzeHeapFailure(a1, v13 + 6);
            v12 = 129LL;
          }
        }
        if ( v4 )
        {
          v14 = *((_WORD *)v13 + 9);
          if ( v14 )
          {
            if ( (v14 & 0x8000u) == 0 )
            {
              if ( (v14 & 0x800) == 0 && v14 < *(_WORD *)(a1 + 224) )
                *(_QWORD *)(v4 + 8LL * v14) += (unsigned __int64)v13[4] >> 4;
            }
            else
            {
              v15 = v14 & 0x7FFF;
              if ( v15 < 0x81u )
              {
                v12 = v15;
                *(_QWORD *)(v30 + 8LL * v15) += (unsigned __int64)v13[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v13 + 58) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned __int64)(v13 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v13 + 59) = *((_BYTE *)v13 + 56) ^ *((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58);
          *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
        }
        v13 = (__int64 *)*v13;
        if ( (__int64 *)(a1 + 272) == v13 )
          goto LABEL_51;
        v12 = 129LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v13 + 59) = *((_BYTE *)v13 + 56) ^ *((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58);
        *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
LABEL_51:
    v19 = 0;
    v20 = *(_QWORD **)(a1 + 288);
    v21 = 0LL;
    v29 = 0;
    v28 = 0LL;
    if ( v20 == (_QWORD *)(a1 + 288) )
    {
LABEL_55:
      v27 = a1;
      if ( v9 == v19 )
      {
        if ( *(_QWORD *)(a1 + 192) == v21 )
        {
          if ( !v30 )
            return 1;
          v22 = *(_QWORD *)(a1 + 328);
          if ( v22 )
          {
            v23 = 1;
            while ( 1 )
            {
              v22 += 16LL;
              v21 = *(_QWORD *)(v22 + 8);
              if ( *(_QWORD *)(v30 + 8LL * v23) != v21 )
                break;
              if ( ++v23 >= 0x81u )
                goto LABEL_70;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL, 129LL);
            else
              DbgPrint("HEAP: ", v23, 1LL, 129LL);
            DbgPrint(
              "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
              v23,
              *(_QWORD *)(v22 + 8),
              *(_QWORD *)(v30 + 8LL * v23),
              (const void *)(v30 + 8LL * v23));
          }
          else
          {
LABEL_70:
            v24 = *(_QWORD *)(a1 + 232);
            if ( !v24 || (v25 = *(unsigned __int16 *)(a1 + 224), v26 = 1, (unsigned __int16)v25 <= 1u) )
            {
LABEL_74:
              v31 = 0LL;
              RtlpSecMemFreeVirtualMemory(v21, &v30, &v31, 0x8000LL);
              return 1;
            }
            while ( 1 )
            {
              v21 = v26;
              v24 += 72LL;
              if ( *(_QWORD *)(v4 + 8LL * v26) != *(_QWORD *)(v24 + 8) )
                break;
              if ( ++v26 >= (unsigned __int16)v25 )
                goto LABEL_74;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 1LL);
            else
              DbgPrint("HEAP: ", v25, 1LL);
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v26,
              v24 + 20,
              *(_QWORD *)(v24 + 8),
              *(_QWORD *)(v4 + 8LL * v26),
              v4 + 8LL * v26);
          }
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", v12);
          DbgPrint(
            "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
            v28,
            *(_QWORD *)(a1 + 192));
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v12);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", v29, v9);
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (int)v20 - 24,
                                 v7,
                                 (unsigned int)&v29,
                                 (__int64)&v28,
                                 (__int64)&v27,
                                 v4,
                                 v30) )
      {
        v20 = (_QWORD *)*v20;
        if ( v20 == (_QWORD *)(a1 + 288) )
        {
          v19 = v29;
          v21 = v28;
          goto LABEL_55;
        }
      }
    }
LABEL_37:
    RtlpBreakPointHeap(v27);
    if ( v30 )
    {
      v31 = 0LL;
      RtlpSecMemFreeVirtualMemory(v17, &v30, &v31, v16);
    }
    return 0;
  }
  return 1;
}
