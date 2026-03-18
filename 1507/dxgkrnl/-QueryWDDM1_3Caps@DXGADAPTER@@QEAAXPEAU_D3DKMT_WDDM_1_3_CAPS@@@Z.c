/*
 * XREFs of ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C0078224
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM1_3Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_3_CAPS *a2)
{
  UINT v3; // eax
  UINT v4; // ecx

  a2->Value = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 1860) )
    v3 = 2;
  a2->Value = v3;
  if ( *((_BYTE *)this + 1855) )
    a2->Value |= 4u;
  if ( *((_DWORD *)this + 730) )
    a2->Value |= 8u;
  a2->Value ^= (((*((_BYTE *)this + 284) & 0x20) != 0) ^ (unsigned __int8)a2->Value) & 1;
  v4 = a2->Value ^ (a2->Value ^ (8 * *((_DWORD *)this + 472))) & 0x10;
  a2->Value = v4;
  a2->Value = v4 ^ ((unsigned __int8)v4 ^ (*((_DWORD *)this + 472) >> 26)) & 0x20;
}
