/*
 * XREFs of ?DestroyTable@MULTIBRUSH@@QEAAXXZ @ 0x1C02945C0
 * Callers:
 *     MulDestroyBrushInternal @ 0x1C029A260 (MulDestroyBrushInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIBRUSH::DestroyTable(MULTIBRUSH *this)
{
  unsigned int *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx

  if ( *((_QWORD *)this + 1) )
  {
    v2 = (unsigned int *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      v3 = *v2;
      if ( *v2 )
      {
        v4 = 16LL * v3;
        do
        {
          v4 -= 16LL;
          --v3;
          v5 = *(_QWORD *)(v4 + *((_QWORD *)this + 4) + 8);
          if ( v5 )
          {
            v6 = (volatile signed __int32 *)(v5 - 16);
            if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v6, 0LL);
            *(_QWORD *)(v4 + *((_QWORD *)this + 4) + 8) = 0LL;
          }
          v7 = *(volatile signed __int32 **)(v4 + *((_QWORD *)this + 4) + 16);
          if ( v7 )
          {
            if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v7, 1LL);
            *(_QWORD *)(v4 + *((_QWORD *)this + 4) + 16) = 0LL;
          }
        }
        while ( v3 );
      }
    }
  }
}
