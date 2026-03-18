/*
 * XREFs of ?SetRect@CEffectInputSet@DirectComposition@@QEAAJIPEAX_K@Z @ 0x1C00D955C
 * Callers:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D8BE0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectInputSet::SetRect(
        DirectComposition::CEffectInputSet *this,
        unsigned int a2,
        _OWORD *a3,
        __int64 a4)
{
  if ( !a3 || a4 != 16 || a2 >= *(_DWORD *)this )
    return 3221225485LL;
  *(_OWORD *)(*((_QWORD *)this + 3) + 16LL * a2) = *a3;
  *((_DWORD *)this + 8) = 0;
  return 0LL;
}
