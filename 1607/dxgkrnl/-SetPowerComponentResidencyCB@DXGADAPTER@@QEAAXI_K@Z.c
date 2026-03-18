/*
 * XREFs of ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001E700
 * Callers:
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0022360 (DxgkSetPowerComponentResidencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00E72A8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     Template_pqx @ 0x1C001EC60 (Template_pqx.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentResidencyCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v5; // edi

  if ( *((_BYTE *)this + 2609) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1092);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_pqx((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentResidencyCB, a3, (_DWORD)this, v5, a3);
    }
    *(_QWORD *)(520LL * v5 + *((_QWORD *)this + 271) + 376) = a3;
    PoFxSetComponentResidency(*((_QWORD *)this + 272), v5, a3);
  }
}
