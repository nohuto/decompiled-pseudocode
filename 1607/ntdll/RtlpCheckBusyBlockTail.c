/*
 * XREFs of RtlpCheckBusyBlockTail @ 0x18005D4BC
 * Callers:
 *     RtlpValidateHeapEntry @ 0x1800769A8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckBusyBlockTail(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v5; // rdi
  SIZE_T v6; // r14
  int v7; // eax
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // ax
  char v14; // cl
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned __int16 v19; // ax
  char v20; // al
  __int16 v21; // ax
  unsigned __int16 v22; // ax
  int v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+28h] [rbp-10h]
  int v25; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 15) == 1 )
    return 1;
  if ( *(_BYTE *)(a2 + 15) == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(a2 + 8);
      LOWORD(v23) = v7;
      if ( (v7 & *(_DWORD *)(a1 + 124)) != 0 )
        v23 = *(_DWORD *)(a1 + 136) ^ v7;
      v8 = v23;
    }
    else
    {
      v8 = *(_WORD *)(a2 + 8);
    }
    v9 = *(_QWORD *)(a2 - 16) - v8;
  }
  else
  {
    if ( *(char *)(a2 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v12 = *(_DWORD *)(a2 + 8);
        LOWORD(v24) = v12;
        if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
          v24 = *(_DWORD *)(a1 + 136) ^ v12;
        v13 = v24;
      }
      else
      {
        v13 = *(_WORD *)(a2 + 8);
      }
      v11 = v13;
    }
    else
    {
      if ( *(_WORD *)(a2 + 8) ^ (unsigned __int16)(a1 ^ RtlpLFHKey ^ (a2 >> 4)) )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)(a2
                        - ((unsigned __int64)(*(_DWORD *)(a2 + 8) ^ (unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(a2 >> 4)) >> 12));
      v11 = *(unsigned __int16 *)(v10 + 36);
    }
    v14 = *(_BYTE *)(a2 + 15);
    if ( v14 == 5 )
    {
      v15 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v14 & 0x40) != 0 )
    {
      v15 = *(unsigned __int16 *)(16LL * (v14 & 0x3F) + a2 + 12);
    }
    else if ( (v14 & 0x3F) == 0x3F )
    {
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v18 = *(_DWORD *)(a2 + 8);
          LOWORD(v25) = v18;
          if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
            v25 = *(_DWORD *)(a1 + 136) ^ v18;
          v19 = v25;
        }
        else
        {
          v19 = *(_WORD *)(a2 + 8);
        }
        v17 = v19;
      }
      else
      {
        if ( *(_WORD *)(a2 + 8) ^ (unsigned __int16)(a1 ^ RtlpLFHKey ^ (a2 >> 4)) )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(a2
                          - ((unsigned __int64)(*(_DWORD *)(a2 + 8) ^ (unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(a2 >> 4)) >> 12));
        v17 = *(unsigned __int16 *)(v16 + 36);
      }
      v15 = *(_QWORD *)(16LL * v17 + a2);
    }
    else
    {
      v15 = *(_BYTE *)(a2 + 15) & 0x3F;
    }
    v9 = 16LL * v11 - v15;
  }
  v20 = *(_BYTE *)(a2 + 15);
  if ( v20 == 5 )
  {
    v21 = *(unsigned __int8 *)(a2 + 14);
LABEL_48:
    v22 = 16 * v21;
    goto LABEL_3;
  }
  if ( (v20 & 0x40) != 0 )
  {
    v21 = v20 & 0x3F;
    goto LABEL_48;
  }
  v22 = 0;
LABEL_3:
  v5 = v22 + v9;
  v6 = RtlCompareMemory((const void *)(v5 + a2 + 16), &CheckHeapFillPattern, 0x10uLL);
  if ( v6 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v6 + v5 + a2 + 16),
    v5);
  RtlpBreakPointHeap();
  return 0;
}
