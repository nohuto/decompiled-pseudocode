/*
 * XREFs of RtlpHpSegReAlloc @ 0x180037EE0
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180036344 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800373EC (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasMove @ 0x180058A90 (RtlpHpExtrasMove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rax
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
        RtlpHpSegPageRangeShrink(a1, v10, v12, a2);
      v9 = a3;
      *(_WORD *)(v10 + 6) = ((_WORD)v12 << 12) - *(_WORD *)(a4 + 24);
    }
  }
  return v9;
}
