/*
 * XREFs of RtlpInsertFreeBlock @ 0x18004ADF0
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x18004B1E0 (RtlpHeapFindListLookupEntry.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rbx
  __int16 v6; // di
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbp
  char v9; // al
  unsigned __int64 *v10; // r14
  unsigned __int16 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 *v16; // rax
  int v17; // ecx
  __int64 ListLookupEntry; // rax
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // ax
  __int64 *v22; // rax
  unsigned __int64 *v23; // rdx
  __int64 *v24; // rdi
  unsigned __int64 v25; // r13
  __int64 *v26; // rax
  int v27; // ecx
  unsigned int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r14
  bool v32; // zf
  unsigned __int64 v33; // rdx
  __int16 v34; // [rsp+30h] [rbp-68h]
  unsigned __int64 v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+58h] [rbp-40h]
  unsigned __int64 v38; // [rsp+B0h] [rbp+18h]
  char v39; // [rsp+B8h] [rbp+20h]

  if ( !a3 )
    return;
  v38 = a3;
  v3 = a3;
  v4 = a2;
  v6 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
  if ( !v6
    && RtlpHeapErrorHandlerThreshold >= 1
    && (*(_BYTE *)(a2 + 10) & 8) == 0
    && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
    RtlpHeapHandleError(1LL);
    v3 = v38;
  }
  v7 = *(_BYTE *)(v4 + 14);
  if ( v7 )
    v8 = (v4 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = *(_BYTE *)(v4 + 10);
  v10 = (unsigned __int64 *)(a1 + 336);
  v39 = v9;
  do
  {
    if ( v3 > 0xFF00 )
    {
      v11 = -256;
      v34 = -256;
      if ( v3 == 65281 )
      {
        v11 = -272;
        v34 = -272;
      }
      *(_BYTE *)(v4 + 10) = 0;
    }
    else
    {
      v11 = v3;
      *(_BYTE *)(v4 + 10) = v9;
      v34 = v3;
    }
    *(_WORD *)(v4 + 12) = v6 ^ *(_WORD *)(a1 + 140);
    v12 = *(_QWORD *)(v8 + 40);
    if ( v12 == v8 )
    {
      LOBYTE(v13) = 0;
    }
    else
    {
      v13 = ((v4 - v8) >> 16) + 1;
      if ( (v4 - v8) >> 16 > 0xFC )
      {
        RtlpLogHeapFailure(3, v12, v4, v8, 0LL, 0LL);
        v3 = v38;
        v11 = v34;
      }
    }
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 14) = v13;
    *(_WORD *)(v4 + 8) = v11;
    *(_BYTE *)(v4 + 11) = 0;
    v14 = v11;
    *(_BYTE *)(v4 + 15) = 0;
    v35 = v11;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      a3 = v4 + 32;
      v33 = (16 * (unsigned __int64)v11 - 32) >> 2;
      if ( v33 )
      {
        if ( (a3 & 4) == 0 )
          goto LABEL_72;
        *(_DWORD *)a3 = -17891602;
        if ( --v33 )
        {
          a3 = v4 + 36;
LABEL_72:
          memset64((void *)a3, 0xFEEEFEEEFEEEFEEEuLL, v33 >> 1);
          if ( (v33 & 1) != 0 )
            *(_DWORD *)(a3 + 4 * v33 - 4) = -17891602;
        }
      }
      *(_BYTE *)(v4 + 10) |= 4u;
    }
    v15 = *(__int64 **)(a1 + 312);
    if ( v15 )
    {
      if ( v11 < (unsigned __int64)*((unsigned int *)v15 + 2) )
      {
LABEL_49:
        v17 = v11;
      }
      else
      {
        while ( 1 )
        {
          v16 = (__int64 *)*v15;
          if ( !*v15 )
            break;
          v15 = (__int64 *)*v15;
          if ( v11 < (unsigned __int64)*((unsigned int *)v16 + 2) )
            goto LABEL_49;
        }
        v17 = *((_DWORD *)v15 + 2) - 1;
      }
      while ( 1 )
      {
        LOBYTE(a3) = 1;
        ListLookupEntry = RtlpHeapFindListLookupEntry(a1, (_DWORD)v15, a3, v17, v14);
        v14 = v35;
        a3 = ListLookupEntry;
        if ( ListLookupEntry )
          break;
        v15 = (__int64 *)*v15;
        v17 = *((_DWORD *)v15 + 6);
      }
      v3 = v38;
      v11 = v34;
    }
    else
    {
      a3 = *v10;
    }
    if ( v10 != (unsigned __int64 *)a3 )
    {
      v19 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v19 )
        {
          v20 = *(_DWORD *)(a3 - 8);
          v19 = *(_DWORD *)(a1 + 124);
          LOWORD(v37) = v20;
          if ( (v19 & v20) != 0 )
            v37 = *(_DWORD *)(a1 + 136) ^ v20;
          v21 = v37;
        }
        else
        {
          v21 = *(_WORD *)(a3 - 8);
        }
        if ( v14 <= v21 )
          break;
        a3 = *(_QWORD *)a3;
      }
      while ( v10 != (unsigned __int64 *)a3 );
    }
    v22 = *(__int64 **)(a3 + 8);
    v23 = (unsigned __int64 *)(v4 + 16);
    if ( *v22 == a3 )
    {
      *v23 = a3;
      *(_QWORD *)(v4 + 24) = v22;
      *v22 = (__int64)v23;
      *(_QWORD *)(a3 + 8) = v23;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, a3, 0, *v22, 0LL);
      v14 = v35;
      v23 = (unsigned __int64 *)(v4 + 16);
      v3 = v38;
      v11 = v34;
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
    v24 = *(__int64 **)(a1 + 312);
    if ( v24 )
    {
      v25 = *(unsigned __int16 *)(v4 + 8);
      if ( v25 < *((unsigned int *)v24 + 2) )
      {
LABEL_51:
        v27 = *(unsigned __int16 *)(v4 + 8);
      }
      else
      {
        while ( 1 )
        {
          v26 = (__int64 *)*v24;
          if ( !*v24 )
            break;
          v24 = (__int64 *)*v24;
          if ( v25 < *((unsigned int *)v26 + 2) )
            goto LABEL_51;
        }
        v27 = *((_DWORD *)v24 + 2) - 1;
      }
      v28 = v27 - *((_DWORD *)v24 + 6);
      if ( *((_DWORD *)v24 + 3) )
        v29 = 2 * v28;
      else
        v29 = v28;
      ++*((_DWORD *)v24 + 4);
      v30 = 8 * v29;
      v31 = *(_QWORD *)(8 * v29 + v24[6]);
      if ( v27 == *((_DWORD *)v24 + 2) - 1 )
        ++*((_DWORD *)v24 + 5);
      if ( !v31 )
        goto LABEL_52;
      LODWORD(a3) = v31 - 16;
      v36 = *(_DWORD *)(v31 - 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v36 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v31 - 8);
        if ( HIBYTE(v36) != ((unsigned __int8)v36 ^ (unsigned __int8)(BYTE1(v36) ^ BYTE2(v36))) )
        {
          RtlpLogHeapFailure(3, a1, a3, 0, 0LL, 0LL);
          v14 = v35;
          v23 = (unsigned __int64 *)(v4 + 16);
          v3 = v38;
          v11 = v34;
        }
      }
      if ( (int)(v25 - (unsigned __int16)v36) <= 0 )
LABEL_52:
        *(_QWORD *)(v30 + v24[6]) = v23;
      v32 = v31 == 0;
      v10 = (unsigned __int64 *)(a1 + 336);
      if ( v32 )
      {
        v23 = (unsigned __int64 *)(v24[5] + 4LL * (v28 >> 5));
        *(_DWORD *)v23 |= 1 << (v28 & 0x1F);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
      *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v3 -= v14;
    v6 = v11;
    v4 += 16 * v14;
    v38 = v3;
    if ( v4 >= *(_QWORD *)(v8 + 72) )
      return;
    v9 = v39;
  }
  while ( v3 );
  *(_WORD *)(v4 + 12) = v11 ^ *(_WORD *)(a1 + 140);
  if ( !v11 && RtlpHeapErrorHandlerThreshold >= 1 && ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ", v23);
    DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
    RtlpHeapHandleError(1LL);
  }
}
