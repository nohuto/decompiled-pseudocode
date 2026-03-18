/*
 * XREFs of ?FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z @ 0x18014AEC8
 * Callers:
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800712FC (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AE68 (-DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AF0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DRegistryDatabase::FindAdapter(struct _LUID a1, unsigned int *a2)
{
  unsigned int v2; // eax
  _QWORD *i; // r8

  v2 = 0;
  if ( !dword_1801A3E20 )
    return 0;
  for ( i = (_QWORD *)CD3DRegistryDatabase::m_rgAdapterErrorCounts; *i != a1; i = (_QWORD *)((char *)i + 12) )
  {
    if ( ++v2 >= dword_1801A3E20 )
      return 0;
  }
  *a2 = v2;
  return 1;
}
