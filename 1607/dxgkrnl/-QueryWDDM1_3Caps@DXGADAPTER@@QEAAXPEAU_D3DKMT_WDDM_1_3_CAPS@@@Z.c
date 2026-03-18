/*
 * XREFs of ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C009F8A0
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM1_3Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_3_CAPS *a2)
{
  UINT v2; // eax

  a2->Value = 0;
  v2 = 0;
  if ( *((_BYTE *)this + 2004) )
    v2 = 2;
  a2->Value = v2;
  if ( *((_BYTE *)this + 1999) )
    a2->Value |= 4u;
  if ( *((_DWORD *)this + 870) )
    a2->Value |= 8u;
  a2->Value ^= (((*((_BYTE *)this + 300) & 0x40) != 0) ^ (unsigned __int8)a2->Value) & 1;
  a2->Value ^= (a2->Value ^ (8 * *((_DWORD *)this + 508))) & 0x10;
}
