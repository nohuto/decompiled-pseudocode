/*
 * XREFs of NtGdiDDCCIGetVCPFeature @ 0x1C025C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C025BBF0 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetVCPFeature(
        CMonitorAPI *a1,
        unsigned int a2,
        _DWORD *Address,
        _DWORD *a4,
        _DWORD *Addressa)
{
  int VCPFeature; // edi
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h] BYREF
  unsigned int v11[4]; // [rsp+38h] [rbp-10h] BYREF

  VCPFeature = CMonitorAPI::DdcciGetVCPFeature(a1, a1, a2, (enum _MC_VCP_CODE_TYPE *)&v10, &v9, v11);
  if ( VCPFeature >= 0 )
  {
    ProbeForWrite(a4, 4uLL, 1u);
    *a4 = v9;
    if ( Address )
    {
      ProbeForWrite(Address, 4uLL, 1u);
      *Address = v10;
    }
    if ( Addressa )
    {
      ProbeForWrite(Addressa, 4uLL, 1u);
      *Addressa = v11[0];
    }
  }
  return (unsigned int)VCPFeature;
}
