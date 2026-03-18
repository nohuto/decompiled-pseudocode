/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z @ 0x1800181AC
 * Callers:
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x180018150 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 *     ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x18018C610 (-SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 */

__int64 __fastcall DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  if ( v3 + (unsigned int)a3 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, a3, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 16LL * v3), a2, 16LL * (unsigned int)a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
