/*
 * XREFs of PopGetNextTable @ 0x1401139EC
 * Callers:
 *     PopWriteHiberImage @ 0x1403CCFC4 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1403CD2CC (PopCompressHiberBlocks.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400177F0 (RtlFindNextForwardRunClearCapped.c)
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401144BC (MmMapMemoryDumpMdlEx.c)
 */

__int64 __fastcall PopGetNextTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  _BYTE *v8; // r13
  BOOL v9; // r14d
  unsigned __int64 *v10; // r12
  unsigned __int16 v12; // bp
  unsigned int v13; // edi
  __int64 v14; // r15
  int NextForwardRunClearCapped; // eax
  int v16; // r9d
  unsigned __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int16 v21; // si
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned int v24; // ebp
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rcx
  unsigned int v28; // r14d
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v30[22]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v31; // [rsp+88h] [rbp+10h]
  BOOL v34; // [rsp+A0h] [rbp+28h]

  v31 = (_BYTE *)a2;
  v6 = a4;
  v7 = a3;
  *(_DWORD *)a2 = 0;
  v8 = (_BYTE *)a2;
  v9 = a5 == 0;
  v10 = (unsigned __int64 *)(v6 + 48);
  v34 = v9;
  v12 = 0;
  v13 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) );
  }
  v14 = a1 + 64;
  if ( *(_QWORD *)(a1 + 104) != a1 + 64 && *(_DWORD *)(a1 + 292) )
  {
    v21 = 0;
    do
    {
      v22 = *(_QWORD *)(a1 + 104);
      if ( v22 == v14 )
        break;
      a2 = *(_QWORD *)(a1 + 112);
      v23 = a2 + *(_QWORD *)(v22 + 24);
      v24 = *(_DWORD *)(v22 + 32) - v23;
      v25 = *(_DWORD *)(a1 + 292) - v13;
      v26 = *(_QWORD *)(v22 + 40) + (a2 << 12);
      if ( v24 <= (unsigned int)v25 )
      {
        *(_QWORD *)(a1 + 104) = *(_QWORD *)v22;
        *(_QWORD *)(a1 + 112) = 0LL;
      }
      else
      {
        v24 = *(_DWORD *)(a1 + 292) - v13;
        *(_QWORD *)(a1 + 112) = a2 + v25;
      }
      v27 = v21++;
      v28 = 0;
      *(_QWORD *)(v7 + 8 * v27) = (16 * v23) ^ ((_BYTE)v24 - 1) & 0xF;
      if ( v24 )
      {
        v13 += v24;
        do
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(v26 + ((unsigned __int64)v28++ << 12)));
          *v10++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
          --v24;
        }
        while ( v24 );
        v7 = a3;
        v14 = a1 + 64;
      }
    }
    while ( v13 < *(_DWORD *)(a1 + 292) );
    v9 = v34;
    v8 = v31;
    v12 = v21;
    v6 = a4;
  }
  if ( v13 < *(_DWORD *)(a1 + 292) )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                    *(_QWORD *)(a1 + 96),
                                    *(_DWORD *)(a1 + 112),
                                    *(_DWORD *)(a1 + 292) - v13,
                                    v30);
      v16 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v13 += NextForwardRunClearCapped;
      v17 = v30[0];
      v18 = (16LL * v30[0]) ^ ((_BYTE)NextForwardRunClearCapped - 1) & 0xF;
      *(_QWORD *)(a1 + 112) = v30[0] + NextForwardRunClearCapped;
      a2 = v12++;
      *(_QWORD *)(a3 + 8 * a2) = v18;
      do
      {
        *v10++ = v17++;
        --v16;
      }
      while ( v16 );
      if ( v13 >= *(_DWORD *)(a1 + 292) )
        goto LABEL_9;
    }
    *(_QWORD *)(a1 + 112) = **(unsigned int **)(a1 + 96);
  }
LABEL_9:
  *(_DWORD *)(a1 + 8) = 0;
  if ( v13 )
  {
    *v8 = v12;
    v19 = (unsigned __int64)v13 << 12;
    *(_DWORD *)(v6 + 40) = v19;
    *(_QWORD *)v6 = 0LL;
    *(_WORD *)(v6 + 10) = 0;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 44) = 0;
    *(_WORD *)(v6 + 8) = 8 * (((v19 + 4095) >> 12) + 6);
    MmMapMemoryDumpMdlEx(a6, a2, v6, v9);
    *(_WORD *)(v6 + 10) |= 1u;
  }
  return v13;
}
