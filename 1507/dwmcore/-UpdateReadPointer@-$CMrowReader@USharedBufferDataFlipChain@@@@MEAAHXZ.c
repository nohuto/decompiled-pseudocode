/*
 * XREFs of ?UpdateReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAHXZ @ 0x18010A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWriteLock@?$CMrowReader@USharedBufferDataFlipChain@@@@IEAAHXZ @ 0x180109A70 (-ReleaseWriteLock@-$CMrowReader@USharedBufferDataFlipChain@@@@IEAAHXZ.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::UpdateReadPointer(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  signed __int32 v4; // [rsp+30h] [rbp+8h]
  signed __int32 v5; // [rsp+38h] [rbp+10h]

  v1 = 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 26LL) != 0xFFFF
    && _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 28LL), 0x80000000, 1) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v1 = 1;
    v4 = *(_DWORD *)(v2 + 24);
    if ( HIWORD(v4) != 0xFFFF )
    {
      LOWORD(v5) = HIWORD(*(_DWORD *)(v2 + 24));
      HIWORD(v5) = -1;
      _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v5, v4);
    }
    CMrowReader<SharedBufferDataFlipChain>::ReleaseWriteLock(a1);
  }
  return v1;
}
