/*
 * XREFs of ?TraceBuffer@CFlipChain@@AEAAXI@Z @ 0x1800AE190
 * Callers:
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800AE21C (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 * Callees:
 *     Template_xxqqxqqq @ 0x180125E34 (Template_xxqqxqqq.c)
 */

void __fastcall CFlipChain::TraceBuffer(CFlipChain *this)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 33);
  if ( v1 )
    v2 = *(_QWORD *)(*(_QWORD *)v1 + 80LL);
  else
    LODWORD(v2) = 0;
  if ( *((_DWORD *)this + 60) )
    v3 = *(_QWORD *)(*((_QWORD *)this + 27) + 24LL);
  else
    LODWORD(v3) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxqqxqqq(
      (_DWORD)this,
      v3,
      *((_DWORD *)this + 48),
      v2,
      0,
      *(_DWORD *)(*((_QWORD *)this + 16) + 8LL),
      v3,
      0,
      *((_DWORD *)this + 26),
      *((_DWORD *)this + 38));
}
