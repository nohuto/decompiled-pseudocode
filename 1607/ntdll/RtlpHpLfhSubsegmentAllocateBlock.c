/*
 * XREFs of RtlpHpLfhSubsegmentAllocateBlock @ 0x180041C38
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x18003F76C (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F7C0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x180041D84 (RtlpLfhBlockBitmapAllocate.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentAllocateBlock(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r9d
  unsigned int v8; // eax
  struct _TEB *v9; // r8
  int v10; // eax
  unsigned int v11; // edi
  __int64 LowFragHeapDataSlot; // rdx
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // r10
  _QWORD v19[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v20; // [rsp+8Ah] [rbp+22h]

  v19[0] = 2 * *(unsigned __int16 *)(a3 + 34);
  v19[1] = a3 + 48;
  v7 = RtlpSearchWidth[*(unsigned __int8 *)(a2 + 1)];
  v8 = *(_DWORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12);
  v9 = NtCurrentTeb();
  v10 = RtlpLFHKey ^ v8;
  v11 = (unsigned __int16)v10;
  v20 = HIWORD(v10);
  LowFragHeapDataSlot = v9->LowFragHeapDataSlot;
  v13 = RtlpLowFragHeapRandomData[LowFragHeapDataSlot];
  v9->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
  v14 = RtlpLfhBlockBitmapAllocate(
          (unsigned int)v19,
          *(unsigned __int16 *)(a3 + 36),
          v13,
          v7,
          a4 < (unsigned __int16)v10 ? 3LL : 1LL);
  *(_WORD *)(a3 + 36) = v14;
  v15 = v20 + v14 * v11;
  if ( *(_BYTE *)(a3 + 45) <= 1u || (v16 = RtlpHpLfhSubsegmentCommitBlock(a1, a3, v15), v17 = 0LL, v16 >= 0) )
  {
    v17 = a3 + v15;
    if ( a4 < v11 )
      RtlpHpLfhSubsegmentSetUnusedBytes(a3, a3 + v15, v11 - a4);
    v14 = -1;
  }
  if ( v14 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a3 + 8 * ((unsigned __int64)(unsigned int)(2 * v14) >> 6) + 48),
      ~(3LL << ((2 * v14) & 0x3F)));
  return v17;
}
