/*
 * XREFs of ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x1800090F4
 * Callers:
 *     ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x1800096F8 (-GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV-$CPtrA.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CVisual::HasSecondaryRepresentations(CVisual *this)
{
  char v1; // r15
  CVisual *i; // rbp
  __int64 v3; // rsi
  unsigned int v4; // r14d
  __int64 v6; // rax

  v1 = 0;
  for ( i = this; i; i = (CVisual *)*((_QWORD *)i + 8) )
  {
    v3 = *((_QWORD *)i + 3);
    if ( (v3 & 2) != 0 )
      v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v3) = v3 & 1;
    v4 = 0;
    if ( (_DWORD)v3 )
    {
      while ( 1 )
      {
        v6 = CPtrArrayBase::operator[]((char *)i + 24, v4);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 56LL) )
          break;
        if ( ++v4 >= (unsigned int)v3 )
          goto LABEL_5;
      }
      v1 = 1;
    }
LABEL_5:
    ;
  }
  return v1;
}
