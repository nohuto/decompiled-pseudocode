/*
 * XREFs of RtlpInsertFreeBlock @ 0x1400928CC
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14012ED0C (RtlpInitializeHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpHeapAddListEntry @ 0x1400936E8 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x1400942D0 (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, __int64 a2, __int64 Entry)
{
  __int16 v4; // cx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbp
  char v9; // al
  __int64 *v10; // r14
  unsigned __int16 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 *v17; // rax
  __int64 *v18; // r14
  __int64 *v19; // rdx
  unsigned __int64 i; // rax
  __int64 *v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx
  int v24; // [rsp+38h] [rbp-30h]
  char v25; // [rsp+80h] [rbp+18h]

  if ( Entry )
  {
    v4 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    v5 = Entry;
    v6 = a2;
    if ( !v4
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))",
        a2,
        Entry,
        0LL);
      RtlpHeapHandleError();
    }
    v7 = *(_BYTE *)(a2 + 14);
    if ( v7 )
      v8 = (a2 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(a2 + 10);
    v10 = (__int64 *)(a1 + 336);
    v25 = v9;
    while ( 1 )
    {
      if ( v5 > 0xFF00 )
      {
        v11 = -256;
        if ( v5 == 65281 )
          v11 = -272;
        *(_BYTE *)(v6 + 10) = 0;
      }
      else
      {
        v11 = v5;
        *(_BYTE *)(v6 + 10) = v9;
      }
      *(_WORD *)(v6 + 12) = v4 ^ *(_WORD *)(a1 + 140);
      v12 = *(_QWORD *)(v8 + 40);
      if ( v12 == v8 )
      {
        LOBYTE(v13) = 0;
      }
      else
      {
        v13 = ((v6 - v8) >> 16) + 1;
        if ( (v6 - v8) >> 16 > 0xFC )
          RtlpLogHeapFailure(3, v12, v6, v8, 0LL);
      }
      *(_BYTE *)(v6 + 10) &= 0xF0u;
      *(_BYTE *)(v6 + 14) = v13;
      *(_WORD *)(v6 + 8) = v11;
      *(_BYTE *)(v6 + 11) = 0;
      *(_BYTE *)(v6 + 15) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_11;
      Entry = v6 + 32;
      v23 = (16 * (unsigned __int64)v11 - 32) >> 2;
      if ( v23 )
      {
        if ( (Entry & 4) == 0 )
          goto LABEL_49;
        *(_DWORD *)Entry = -17891602;
        if ( --v23 )
          break;
      }
LABEL_51:
      *(_BYTE *)(v6 + 10) |= 4u;
LABEL_11:
      if ( *(_QWORD *)(a1 + 312) )
        Entry = RtlpFindEntry(a1, v11, Entry, 0LL);
      else
        Entry = *v10;
      if ( v10 != (__int64 *)Entry )
      {
        v14 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v14 )
          {
            v15 = *(_DWORD *)(Entry - 8);
            v14 = *(_DWORD *)(a1 + 124);
            LOWORD(v24) = v15;
            if ( (v14 & v15) != 0 )
              v24 = *(_DWORD *)(a1 + 136) ^ v15;
            v16 = v24;
          }
          else
          {
            v16 = *(_WORD *)(Entry - 8);
          }
          if ( v11 <= (unsigned __int64)v16 )
            break;
          Entry = *(_QWORD *)Entry;
        }
        while ( v10 != (__int64 *)Entry );
      }
      v17 = *(__int64 **)(Entry + 8);
      v18 = (__int64 *)(v6 + 16);
      if ( *v17 == Entry )
      {
        *v18 = Entry;
        *(_QWORD *)(v6 + 24) = v17;
        *v17 = (__int64)v18;
        *(_QWORD *)(Entry + 8) = v18;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, Entry, 0, *v17);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v6 + 8);
      v19 = *(__int64 **)(a1 + 312);
      if ( v19 )
      {
        for ( i = *((unsigned int *)v19 + 2); *(unsigned __int16 *)(v6 + 8) >= i; i = *((unsigned int *)v21 + 2) )
        {
          v21 = (__int64 *)*v19;
          if ( !*v19 )
          {
            v22 = *((_DWORD *)v19 + 2) - 1;
            goto LABEL_27;
          }
          v19 = (__int64 *)*v19;
        }
        v22 = *(unsigned __int16 *)(v6 + 8);
LABEL_27:
        RtlpHeapAddListEntry(a1, (_DWORD)v19, Entry, v6 + 16, v22, *(unsigned __int16 *)(v6 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
        *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v5 -= v11;
      v4 = v11;
      v6 += 16LL * v11;
      if ( v6 >= *(_QWORD *)(v8 + 72) )
        return;
      v9 = v25;
      v10 = (__int64 *)(a1 + 336);
      if ( !v5 )
      {
        *(_WORD *)(v6 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        return;
      }
    }
    Entry = v6 + 36;
LABEL_49:
    memset64((void *)Entry, 0xFEEEFEEEFEEEFEEEuLL, v23 >> 1);
    if ( (v23 & 1) != 0 )
      *(_DWORD *)(Entry + 4 * v23 - 4) = -17891602;
    goto LABEL_51;
  }
}
