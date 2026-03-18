/*
 * XREFs of ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0008E9C
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM1_2Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_2_CAPS *a2)
{
  unsigned __int8 v4; // r10
  UINT v5; // edx
  UINT v6; // eax
  UINT v7; // edx
  UINT v8; // ecx
  UINT v9; // eax
  UINT v10; // ecx
  UINT v11; // eax
  UINT v12; // ecx

  a2->PreemptionCaps.GraphicsPreemptionGranularity = *((_DWORD *)this + 496);
  a2->PreemptionCaps.ComputePreemptionGranularity = *((_DWORD *)this + 497);
  v4 = 1;
  a2->Value ^= (a2->Value ^ *((unsigned __int8 *)this + 1992)) & 1;
  v5 = a2->Value ^ (a2->Value ^ (2 * *((unsigned __int8 *)this + 1993))) & 2;
  a2->Value = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(4 * *((_BYTE *)this + 1994))) & 4;
  a2->Value = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * *((_DWORD *)this + 377))) & 8;
  a2->Value = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(16 * (*((_QWORD *)this + 84) != 0LL))) & 0x10;
  a2->Value = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(*((_DWORD *)this + 377) >> 23)) & 0x20;
  a2->Value = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)this + 376) << 6)) & 0x40;
  a2->Value = v10;
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(32 * *((_DWORD *)this + 372))) & 0x80;
  a2->Value = v11;
  if ( !*((_QWORD *)this + 266) || !*((_QWORD *)this + 70) )
    v4 = 0;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v4 << 8)) & 0x100;
  a2->Value = v12;
  a2->Value = v12 ^ ((unsigned __int16)(v11 ^ (v11 ^ (v4 << 8)) & 0x100) ^ (unsigned __int16)(*((unsigned __int8 *)this
                                                                                              + 1998) << 9)) & 0x200;
}
