/*
 * XREFs of DxgkHandleThermalCoolingDrtEscape @ 0x1C019A068
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DpiFdoThermalActiveCooling @ 0x1C0199DD0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0199F20 (DpiFdoThermalPassiveCooling.c)
 */

__int64 __fastcall DxgkHandleThermalCoolingDrtEscape(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // r9d
  BOOL v5; // ecx

  v2 = *(_QWORD *)(a1 + 64);
  if ( !g_OSTestSigningEnabled )
    return 3221225659LL;
  v3 = *(_QWORD *)(v2 + 4512);
  if ( !v3 )
    return 3221225659LL;
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( *(_QWORD *)(v3 + 48) )
        DpiFdoThermalActiveCooling(a1, *(_BYTE *)(a2 + 16));
    }
    else if ( v4 == 2 && *(_QWORD *)(v3 + 56) )
    {
      DpiFdoThermalPassiveCooling(a1, *(_DWORD *)(a2 + 16));
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 0;
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 4512) + 48LL) != 0LL;
    *(_DWORD *)(a2 + 16) = v5;
    *(_DWORD *)(a2 + 16) = v5 ^ (v5 ^ (unsigned __int8)(2 * (*(_QWORD *)(*(_QWORD *)(v2 + 4512) + 56LL) != 0LL))) & 2;
  }
  return 0LL;
}
