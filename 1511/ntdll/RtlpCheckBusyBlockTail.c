/*
 * XREFs of RtlpCheckBusyBlockTail @ 0x18004B868
 * Callers:
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlCompareMemory @ 0x1800A9270 (RtlCompareMemory.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckBusyBlockTail(__int64 a1, unsigned __int64 a2)
{
  int v4; // eax
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // eax
  unsigned __int16 v10; // ax
  char v11; // cl
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int16 v16; // ax
  char v17; // al
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rdi
  SIZE_T v21; // r14
  int v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+28h] [rbp-10h]
  int v25; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 15) == 1 )
    return 1;
  if ( *(_BYTE *)(a2 + 15) == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v4 = *(_DWORD *)(a2 + 8);
      LOWORD(v23) = v4;
      if ( (v4 & *(_DWORD *)(a1 + 124)) != 0 )
        v23 = *(_DWORD *)(a1 + 136) ^ v4;
      v5 = v23;
    }
    else
    {
      v5 = *(_WORD *)(a2 + 8);
    }
    v6 = *(_QWORD *)(a2 - 16) - v5;
  }
  else
  {
    if ( *(char *)(a2 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v9 = *(_DWORD *)(a2 + 8);
        LOWORD(v24) = v9;
        if ( (v9 & *(_DWORD *)(a1 + 124)) != 0 )
          v24 = *(_DWORD *)(a1 + 136) ^ v9;
        v10 = v24;
      }
      else
      {
        v10 = *(_WORD *)(a2 + 8);
      }
      v8 = v10;
    }
    else
    {
      if ( *(_WORD *)(a2 + 8) ^ (unsigned __int16)(a1 ^ RtlpLFHKey ^ (a2 >> 4)) )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)(a2
                       - ((unsigned __int64)(*(_DWORD *)(a2 + 8) ^ (unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(a2 >> 4)) >> 12));
      v8 = *(unsigned __int16 *)(v7 + 36);
    }
    v11 = *(_BYTE *)(a2 + 15);
    if ( v11 == 5 )
    {
      v12 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v11 & 0x40) != 0 )
    {
      v12 = *(unsigned __int16 *)(16LL * (v11 & 0x3F) + a2 + 12);
    }
    else if ( (v11 & 0x3F) == 0x3F )
    {
      if ( v11 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 = *(_DWORD *)(a2 + 8);
          LOWORD(v25) = v15;
          if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
            v25 = *(_DWORD *)(a1 + 136) ^ v15;
          v16 = v25;
        }
        else
        {
          v16 = *(_WORD *)(a2 + 8);
        }
        v14 = v16;
      }
      else
      {
        if ( *(_WORD *)(a2 + 8) ^ (unsigned __int16)(a1 ^ RtlpLFHKey ^ (a2 >> 4)) )
          v13 = 0LL;
        else
          v13 = *(_QWORD *)(a2
                          - ((unsigned __int64)(*(_DWORD *)(a2 + 8) ^ (unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(a2 >> 4)) >> 12));
        v14 = *(unsigned __int16 *)(v13 + 36);
      }
      v12 = *(_QWORD *)(16LL * v14 + a2);
    }
    else
    {
      v12 = *(_BYTE *)(a2 + 15) & 0x3F;
    }
    v6 = 16LL * v8 - v12;
  }
  v17 = *(_BYTE *)(a2 + 15);
  if ( v17 == 5 )
  {
    v18 = *(unsigned __int8 *)(a2 + 14);
LABEL_41:
    v19 = 16 * v18;
    goto LABEL_45;
  }
  if ( (v17 & 0x40) != 0 )
  {
    v18 = v17 & 0x3F;
    goto LABEL_41;
  }
  v19 = 0;
LABEL_45:
  v20 = v19 + v6;
  v21 = RtlCompareMemory((const void *)(v20 + a2 + 16), &CheckHeapFillPattern, 0x10uLL);
  if ( v21 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v21 + v20 + a2 + 16),
    v20);
  RtlpBreakPointHeap(a2);
  return 0;
}
