/*
 * XREFs of RtlpHpSegReAlloc @ 0x18001A9C0
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001ADE8 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpReallocMove @ 0x18001AAB0 (RtlpHpReallocMove.c)
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpExtrasMove @ 0x180074AB0 (RtlpHpExtrasMove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx

  v8 = RtlpHpSegDescriptorValidate(a1, a3);
  v9 = 0LL;
  v10 = v8;
  if ( !v8 )
    return -1LL;
  v11 = *(_QWORD *)(a4 + 32);
  v12 = (v11 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v12 << 12) >= v11 )
  {
    if ( (*(_BYTE *)(v8 + 24) & 0x21) != 0 || (unsigned int)v12 > *(unsigned __int8 *)(v8 + 27) )
    {
      if ( (a2 & 0x2000000) == 0 )
        return RtlpHpReallocMove(a1, a3, a4, a2);
    }
    else
    {
      if ( *(_DWORD *)(a4 + 16) )
        RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
      if ( (unsigned int)v12 < *(unsigned __int8 *)(v10 + 27) )
        RtlpHpSegPageRangeShrink(a1, v10, (unsigned int)v12, a2);
      v9 = a3;
      *(_WORD *)(v10 + 6) = ((_WORD)v12 << 12) - *(_WORD *)(a4 + 24);
    }
  }
  return v9;
}
