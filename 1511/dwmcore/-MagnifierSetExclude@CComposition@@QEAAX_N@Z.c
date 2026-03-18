/*
 * XREFs of ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180100F4C
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x1801014E8 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::MagnifierSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rdx

  v2 = 0LL;
  if ( *((_DWORD *)this + 230) )
  {
    v5 = (_QWORD *)((char *)this + 896);
    do
    {
      v6 = **(_QWORD **)(*v5 + 8 * v2);
      if ( v6 )
      {
        *(_BYTE *)(v6 + 74) &= ~0x10u;
        *(_BYTE *)(v6 + 74) |= 16 * (a2 & 1);
        v2 = (unsigned int)(v2 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v5, (unsigned int)v2);
      }
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 230) );
  }
}
