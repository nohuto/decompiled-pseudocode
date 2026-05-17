/*
 * XREFs of RtlpInsertFreeBlock @ 0x180020000
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int16 v5; // di
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rcx
  char v8; // al
  _QWORD **v9; // r12
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // r13
  _DWORD *v14; // r8
  unsigned __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 *v17; // rax
  int v18; // edi
  __int64 *v19; // r15
  _DWORD *i; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rdi
  __int64 v26; // rax
  _DWORD *v27; // rdi
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned __int16 v33; // ax
  __int64 *v34; // rax
  _QWORD *v35; // r12
  __int64 *v36; // rdi
  unsigned __int64 v37; // rbp
  __int64 *v38; // rax
  int v39; // ecx
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r14
  unsigned int v44; // [rsp+30h] [rbp-98h]
  unsigned __int64 v45; // [rsp+38h] [rbp-90h]
  int v46; // [rsp+48h] [rbp-80h]
  int v47; // [rsp+58h] [rbp-70h]
  int v48; // [rsp+68h] [rbp-60h]
  int v49; // [rsp+78h] [rbp-50h]
  int v50; // [rsp+88h] [rbp-40h]
  unsigned __int64 v51; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v52; // [rsp+E0h] [rbp+18h]
  char v53; // [rsp+E8h] [rbp+20h]

  if ( !a3 )
    return;
  v52 = a3;
  v51 = a2;
  v3 = a2;
  v5 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
  if ( !v5
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
    a3 = v52;
  }
  v6 = *(_BYTE *)(v3 + 14);
  if ( v6 )
    v7 = (v3 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v6 << 16) + 0x10000;
  else
    v7 = a1;
  v8 = *(_BYTE *)(v3 + 10);
  v9 = (_QWORD **)(a1 + 336);
  v53 = v8;
  v10 = -256;
  v45 = v7;
  do
  {
    if ( a3 <= 0xFF00 )
    {
      v10 = a3;
      *(_BYTE *)(v3 + 10) = v8;
      v44 = (unsigned __int16)a3;
    }
    else
    {
      v44 = 65280;
      if ( a3 == 65281 )
      {
        v10 = -272;
        v44 = 65264;
      }
      *(_BYTE *)(v3 + 10) = 0;
    }
    *(_WORD *)(v3 + 12) = v5 ^ *(_WORD *)(a1 + 140);
    v11 = *(_QWORD *)(v7 + 40);
    if ( v11 == v7 )
    {
      LOBYTE(v12) = 0;
    }
    else
    {
      v12 = ((v3 - v7) >> 16) + 1;
      if ( (v3 - v7) >> 16 > 0xFC )
      {
        RtlpLogHeapFailure(3, v11, v3, v7, 0LL, 0LL);
        v10 = v44;
      }
    }
    *(_BYTE *)(v3 + 10) &= 0xF0u;
    *(_BYTE *)(v3 + 14) = v12;
    *(_WORD *)(v3 + 8) = v10;
    *(_BYTE *)(v3 + 11) = 0;
    *(_BYTE *)(v3 + 15) = 0;
    v13 = v10;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v14 = (_DWORD *)(v3 + 32);
      v15 = (16 * (unsigned __int64)v10 - 32) >> 2;
      if ( v15 )
      {
        if ( ((unsigned __int8)v14 & 4) == 0 )
          goto LABEL_28;
        *v14 = -17891602;
        if ( --v15 )
        {
          v14 = (_DWORD *)(v3 + 36);
LABEL_28:
          memset64(v14, 0xFEEEFEEEFEEEFEEEuLL, v15 >> 1);
          if ( (v15 & 1) != 0 )
            v14[v15 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v3 + 10) |= 4u;
    }
    v16 = *(__int64 **)(a1 + 312);
    if ( v16 )
    {
      if ( v10 < (unsigned __int64)*((unsigned int *)v16 + 2) )
      {
LABEL_35:
        v18 = v10;
      }
      else
      {
        while ( 1 )
        {
          v17 = (__int64 *)*v16;
          if ( !*v16 )
            break;
          v16 = (__int64 *)*v16;
          if ( v10 < (unsigned __int64)*((unsigned int *)v17 + 2) )
            goto LABEL_35;
        }
        v18 = *((_DWORD *)v16 + 2) - 1;
      }
      v19 = v16;
      for ( i = v16 + 3; ; i = v19 + 3 )
      {
LABEL_37:
        v21 = (_QWORD *)v19[4];
        v22 = (unsigned int)(v18 - *i);
        v23 = (_QWORD *)v21[1];
        if ( v21 != v23 )
        {
          v46 = *((_DWORD *)v23 - 2);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v46 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v23 - 2);
            if ( HIBYTE(v46) != ((unsigned __int8)v46 ^ (unsigned __int8)(BYTE1(v46) ^ BYTE2(v46))) )
              RtlpLogHeapFailure(3, a1, (_DWORD)v23 - 16, 0, 0LL, 0LL);
          }
          if ( (int)(v13 - (unsigned __int16)v46) <= 0 )
          {
            v24 = *v21 - 16LL;
            v47 = *(_DWORD *)(v24 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v47 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v24 + 8);
              if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(BYTE1(v47) ^ BYTE2(v47))) )
                RtlpLogHeapFailure(3, a1, v24, 0, 0LL, 0LL);
            }
            if ( (int)(v13 - (unsigned __int16)v47) > 0 )
            {
              if ( *v19 || v18 != *((_DWORD *)v19 + 2) - 1 )
              {
                v26 = (unsigned int)v22 >> 5;
                v27 = (_DWORD *)(v19[5] + 4 * v26);
                v28 = *v27 & ~((1 << (v22 & 0x1F)) - 1);
                if ( !v28 )
                {
                  while ( (unsigned int)v26 <= ((unsigned int)(*((_DWORD *)v19 + 2) - *i) >> 5) - 1 )
                  {
                    v28 = v27[1];
                    ++v27;
                    LODWORD(v26) = v26 + 1;
                    if ( v28 )
                      goto LABEL_65;
                  }
                  goto LABEL_76;
                }
LABEL_65:
                if ( (_WORD)v28 )
                {
                  if ( (_BYTE)v28 )
                    v29 = RtlpBitsClearLow[(unsigned __int8)v28];
                  else
                    v29 = RtlpBitsClearLow[BYTE1(v28)] + 8;
                }
                else if ( (v28 & 0xFF0000) != 0 )
                {
                  v29 = RtlpBitsClearLow[BYTE2(v28)] + 16;
                }
                else
                {
                  v29 = RtlpBitsClearLow[(unsigned __int64)v28 >> 24] + 24;
                }
                v30 = v29 + 32 * v26;
                if ( *((_DWORD *)v19 + 3) )
                  v30 *= 2;
                v21 = *(_QWORD **)(v19[6] + 8LL * v30);
              }
              else
              {
                if ( *((_DWORD *)v19 + 3) )
                  v22 = (unsigned int)(2 * v22);
                v25 = *(_QWORD **)(v19[6] + 8 * v22);
                if ( v21 == v25 )
                  goto LABEL_76;
                while ( 1 )
                {
                  v48 = *((_DWORD *)v25 - 2);
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v48 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v25 - 2);
                    if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
                      RtlpLogHeapFailure(3, a1, (_DWORD)v25 - 16, 0, 0LL, 0LL);
                  }
                  if ( (int)(v13 - (unsigned __int16)v48) <= 0 )
                    break;
                  v25 = (_QWORD *)*v25;
                  if ( v21 == v25 )
                  {
                    v19 = (__int64 *)*v19;
                    v18 = *((_DWORD *)v19 + 6);
                    i = v19 + 3;
                    goto LABEL_37;
                  }
                }
                v21 = v25;
              }
            }
            else
            {
              v21 = (_QWORD *)*v21;
            }
          }
        }
        if ( v21 )
        {
          v3 = v51;
          v9 = (_QWORD **)(a1 + 336);
          goto LABEL_79;
        }
LABEL_76:
        v19 = (__int64 *)*v19;
        v18 = *((_DWORD *)v19 + 6);
      }
    }
    v21 = *v9;
LABEL_79:
    if ( v9 != v21 )
    {
      v31 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v31 )
        {
          v32 = *((_DWORD *)v21 - 2);
          v31 = *(_DWORD *)(a1 + 124);
          LOWORD(v50) = v32;
          if ( (v31 & v32) != 0 )
            v50 = *(_DWORD *)(a1 + 136) ^ v32;
          v33 = v50;
        }
        else
        {
          v33 = *((_WORD *)v21 - 4);
        }
        if ( v13 <= v33 )
          break;
        v21 = (_QWORD *)*v21;
      }
      while ( v9 != v21 );
    }
    v34 = (__int64 *)v21[1];
    v35 = (_QWORD *)(v3 + 16);
    if ( (_QWORD *)*v34 == v21 )
    {
      *v35 = v21;
      *(_QWORD *)(v3 + 24) = v34;
      *v34 = (__int64)v35;
      v21[1] = v35;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v21, 0, *v34, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v3 + 8);
    v36 = *(__int64 **)(a1 + 312);
    if ( v36 )
    {
      v37 = *(unsigned __int16 *)(v3 + 8);
      if ( v37 < *((unsigned int *)v36 + 2) )
      {
LABEL_95:
        v39 = v37;
      }
      else
      {
        while ( 1 )
        {
          v38 = (__int64 *)*v36;
          if ( !*v36 )
            break;
          v36 = (__int64 *)*v36;
          if ( v37 < *((unsigned int *)v38 + 2) )
            goto LABEL_95;
        }
        v39 = *((_DWORD *)v36 + 2) - 1;
      }
      v40 = v39 - *((_DWORD *)v36 + 6);
      if ( *((_DWORD *)v36 + 3) )
        v41 = 2 * v40;
      else
        v41 = v40;
      ++*((_DWORD *)v36 + 4);
      v42 = 8 * v41;
      v43 = *(_QWORD *)(8 * v41 + v36[6]);
      if ( v39 == *((_DWORD *)v36 + 2) - 1 )
        ++*((_DWORD *)v36 + 5);
      if ( !v43 )
        goto LABEL_107;
      v49 = *(_DWORD *)(v43 - 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v49 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v43 - 8);
        if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
          RtlpLogHeapFailure(3, a1, v43 - 16, 0, 0LL, 0LL);
      }
      if ( (int)(v37 - (unsigned __int16)v49) <= 0 )
LABEL_107:
        *(_QWORD *)(v42 + v36[6]) = v35;
      v3 = v51;
      if ( !v43 )
        *(_DWORD *)(v36[5] + 4LL * (v40 >> 5)) |= 1 << (v40 & 0x1F);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v3 + 11) = *(_BYTE *)(v3 + 8) ^ *(_BYTE *)(v3 + 9) ^ *(_BYTE *)(v3 + 10);
      *(_DWORD *)(v3 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v7 = v45;
    a3 = v52 - v13;
    v5 = v44;
    v3 += 16 * v13;
    v52 -= v13;
    v51 = v3;
    if ( v3 >= *(_QWORD *)(v45 + 72) )
      return;
    v8 = v53;
    v9 = (_QWORD **)(a1 + 336);
    v10 = -256;
  }
  while ( a3 );
  *(_WORD *)(v3 + 12) = v44 ^ *(_WORD *)(a1 + 140);
  if ( !(_WORD)v44 && RtlpHeapErrorHandlerThreshold >= 1 && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL, 65280LL);
    else
      DbgPrint("HEAP: ", v44, 0LL, 65280LL);
    DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
    RtlpHeapHandleError(1LL);
  }
}
