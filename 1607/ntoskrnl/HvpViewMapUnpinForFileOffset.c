/*
 * XREFs of HvpViewMapUnpinForFileOffset @ 0x1401B6A18
 * Callers:
 *     HvViewMapUnpinFile @ 0x1401B6620 (HvViewMapUnpinFile.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FF34 (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     HvpViewMapUnpinViewOfPrimaryFile @ 0x1401B6B60 (HvpViewMapUnpinViewOfPrimaryFile.c)
 *     HvpViewMapContiguousBytesAfterFileOffset @ 0x140581D6C (HvpViewMapContiguousBytesAfterFileOffset.c)
 *     HvpViewMapCountPinMaskSetBits @ 0x14060FFBC (HvpViewMapCountPinMaskSetBits.c)
 */

__int64 __fastcall HvpViewMapUnpinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r14d
  unsigned int v4; // ebx
  unsigned int i; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // edi
  unsigned __int64 v9; // r12
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // ecx

  v3 = 0;
  v4 = a2 & 0xFFFFF000;
  for ( i = (a2 - (a2 & 0xFFFFF000) + a3 + 4095) & 0xFFFFF000; i; i -= v7 )
  {
    v7 = HvpViewMapContiguousBytesAfterFileOffset(a1, v4);
    if ( i < v7 )
      v7 = i;
    v8 = v4 & 0xFFFC0000;
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(v8) & 0x7F)) + 32LL * ((v8 >> 18) & 0x3F) + 16) & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(v7 >> 12)) << ((v4 >> 12) & 0x3F));
    v3 += HvpViewMapCountPinMaskSetBits(v9);
    v11 = (~v9 & *(_QWORD *)(v10 + 16)) == 0;
    *(_QWORD *)(v10 + 16) &= ~v9;
    if ( v11 )
      HvpViewMapUnpinViewOfPrimaryFile(a1, v8);
    v12 = 9LL * *(unsigned int *)(a1 + 40);
    *(_DWORD *)(a1 + 8 * v12 + 48) = v8;
    *(_BYTE *)(a1 + 8 * v12 + 52) = 0;
    *(_QWORD *)(a1 + 8 * v12 + 56) = v9;
    v12 += 9LL;
    *(_QWORD *)(a1 + 8 * v12 - 8) = KeGetCurrentThread();
    RtlWalkFrameChain((PVOID *)(a1 + 8 * v12), 6u, 0);
    v13 = 16;
    *(_DWORD *)(a1 + 40) = ((unsigned __int8)*(_DWORD *)(a1 + 40) + 1) & 0xF;
    if ( (unsigned int)(*(_DWORD *)(a1 + 44) + 1) < 0x10 )
      v13 = *(_DWORD *)(a1 + 44) + 1;
    v4 += v7;
    *(_DWORD *)(a1 + 44) = v13;
  }
  return HvpViewMapReleaseChargesForPinnedPages(a1, v3);
}
