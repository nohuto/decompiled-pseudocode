/*
 * XREFs of ndisSriovInterfaceGetDeviceLocation @ 0x1C00DBD90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D9AD8 (ndisIovFindVFByVFId.c)
 */

void __fastcall ndisSriovInterfaceGetDeviceLocation(__int64 a1, unsigned __int16 a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  int v9; // ebx
  __int64 *VFByVFId; // rax
  unsigned __int8 v11; // r10

  v9 = 0;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0x64u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
  VFByVFId = ndisIovFindVFByVFId(a1, a2);
  if ( VFByVFId )
  {
    *a3 = *((_WORD *)VFByVFId + 863);
    *a4 = *((_BYTE *)VFByVFId + 1725);
    *a5 = *((_BYTE *)VFByVFId + 1724);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v11 >= 4u )
    WPP_SF_qD(0x65u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1, v9);
}
