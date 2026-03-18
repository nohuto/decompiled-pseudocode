/*
 * XREFs of ?TraceBuffer@CFlipChain@@AEAAXI@Z @ 0x1800AA43C
 * Callers:
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800AA4C0 (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 *     ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x180142490 (-UpdateTimingInfo@CFlipChain@@AEAAXXZ.c)
 * Callees:
 *     Template_xxqqxqqq @ 0x18014251C (Template_xxqqxqqq.c)
 */

void __fastcall CFlipChain::TraceBuffer(CFlipChain *this)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 42);
  if ( v1 )
    v2 = *(_QWORD *)(*(_QWORD *)v1 + 80LL);
  else
    LODWORD(v2) = 0;
  if ( *((_DWORD *)this + 78) )
    v3 = *(_QWORD *)(*((_QWORD *)this + 36) + 24LL);
  else
    LODWORD(v3) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxqqxqqq(
      (_DWORD)this,
      v3,
      *((_DWORD *)this + 66),
      v2,
      0,
      *(_DWORD *)(*((_QWORD *)this + 25) + 8LL),
      v3,
      0,
      *((_DWORD *)this + 44),
      *((_DWORD *)this + 56));
}
