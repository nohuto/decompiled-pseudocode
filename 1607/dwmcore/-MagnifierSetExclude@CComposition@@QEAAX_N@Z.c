/*
 * XREFs of ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180116B7C
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180110CB4 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::MagnifierSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rdx

  v2 = 0LL;
  if ( *((_DWORD *)this + 232) )
  {
    v5 = (_QWORD *)((char *)this + 904);
    do
    {
      v6 = **(_QWORD **)(*v5 + 8 * v2);
      if ( v6 )
      {
        *(_BYTE *)(v6 + 154) &= ~0x10u;
        *(_BYTE *)(v6 + 154) |= 16 * (a2 & 1);
        v2 = (unsigned int)(v2 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)v5, v2);
      }
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 232) );
  }
}
