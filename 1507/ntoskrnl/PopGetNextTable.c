/*
 * XREFs of PopGetNextTable @ 0x14014DAD8
 * Callers:
 *     PopWriteHiberImage @ 0x1403F3A20 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1403F3D28 (PopCompressHiberBlocks.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 */

__int64 __fastcall PopGetNextTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  _BYTE *v8; // r13
  BOOL v9; // r14d
  LONGLONG *v10; // r12
  unsigned __int16 v12; // bp
  unsigned int v13; // edi
  __int64 v14; // r15
  int NextForwardRunClearCapped; // eax
  int v16; // r9d
  LONGLONG v17; // r10
  __int64 v18; // rcx
  unsigned __int16 v20; // si
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned int v23; // ebp
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rcx
  int v27; // r14d
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v29[22]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v30; // [rsp+88h] [rbp+10h]
  BOOL v33; // [rsp+A0h] [rbp+28h]

  v30 = (_BYTE *)a2;
  v6 = a4;
  v7 = a3;
  *(_DWORD *)a2 = 0;
  v8 = (_BYTE *)a2;
  v9 = a5 == 0;
  v10 = (LONGLONG *)(v6 + 48);
  v33 = v9;
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
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)(a1 + 104);
      if ( v21 == v14 )
        break;
      a2 = *(_QWORD *)(a1 + 112);
      v22 = a2 + *(_QWORD *)(v21 + 24);
      v23 = *(_DWORD *)(v21 + 32) - v22;
      v24 = *(_DWORD *)(a1 + 292) - v13;
      v25 = *(_QWORD *)(v21 + 40) + (a2 << 12);
      if ( v23 > (unsigned int)v24 )
      {
        v23 = *(_DWORD *)(a1 + 292) - v13;
        *(_QWORD *)(a1 + 112) = a2 + v24;
      }
      else
      {
        *(_QWORD *)(a1 + 104) = *(_QWORD *)v21;
        *(_QWORD *)(a1 + 112) = 0LL;
      }
      v26 = v20++;
      v27 = 0;
      *(_QWORD *)(v7 + 8 * v26) = (16 * v22) ^ ((_BYTE)v23 - 1) & 0xF;
      if ( v23 )
      {
        v13 += v23;
        do
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(v25 + (unsigned int)(v27++ << 12)));
          *v10++ = PhysicalAddress.QuadPart >> 12;
          --v23;
        }
        while ( v23 );
        v7 = a3;
        v14 = a1 + 64;
      }
    }
    while ( v13 < *(_DWORD *)(a1 + 292) );
    v9 = v33;
    v8 = v30;
    v12 = v20;
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
                                    v29);
      v16 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v13 += NextForwardRunClearCapped;
      v17 = v29[0];
      v18 = (16LL * v29[0]) ^ ((_BYTE)NextForwardRunClearCapped - 1) & 0xF;
      *(_QWORD *)(a1 + 112) = v29[0] + NextForwardRunClearCapped;
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
    *(_DWORD *)(v6 + 40) = v13 << 12;
    *(_QWORD *)v6 = 0LL;
    *(_WORD *)(v6 + 8) = 8 * ((((unsigned __int64)(v13 << 12) + 4095) >> 12) + 6);
    *(_WORD *)(v6 + 10) = 0;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 44) = 0;
    MmMapMemoryDumpMdlEx(a6, a2, v6, v9);
    *(_WORD *)(v6 + 10) |= 1u;
  }
  return v13;
}
