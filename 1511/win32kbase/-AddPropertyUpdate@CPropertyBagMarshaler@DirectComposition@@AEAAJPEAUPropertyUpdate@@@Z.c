/*
 * XREFs of ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z @ 0x1C00D9300
 * Callers:
 *     ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D9B20 (-SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX.c)
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z @ 0x1C00D9D84 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E328 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(
        DirectComposition::CPropertyBagMarshaler *this,
        struct PropertyUpdate *a2)
{
  int v2; // edi
  unsigned __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v7; // r9
  __int64 v8; // rdx

  v2 = 0;
  v4 = *((_QWORD *)this + 15);
  v5 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    while ( *(_DWORD *)(v7 * *((_QWORD *)this + 14) + *((_QWORD *)this + 10)) != *(_DWORD *)a2 )
    {
      v7 = ++v5;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( v4 != *((_QWORD *)this + 13)
      || (v2 = DirectComposition::CDCompDynamicArrayBase::Grow(
                 (DirectComposition::CPropertyBagMarshaler *)((char *)this + 72),
                 1LL,
                 0x10u),
          v2 >= 0) )
    {
      v8 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v8 + 1;
      memmove((void *)(*((_QWORD *)this + 10) + v8 * *((_QWORD *)this + 14)), a2, *((_QWORD *)this + 14));
    }
  }
  return (unsigned int)v2;
}
