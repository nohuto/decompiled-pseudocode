/*
 * XREFs of ?FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z @ 0x18017B4B4
 * Callers:
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034E44 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B454 (-DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B4F8 (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DRegistryDatabase::FindAdapter(struct _LUID a1, unsigned int *a2)
{
  unsigned int v2; // eax
  _QWORD *i; // r8

  v2 = 0;
  if ( !dword_1801F0140 )
    return 0;
  for ( i = (_QWORD *)CD3DRegistryDatabase::m_rgAdapterErrorCounts; *i != a1; i = (_QWORD *)((char *)i + 12) )
  {
    if ( ++v2 >= dword_1801F0140 )
      return 0;
  }
  *a2 = v2;
  return 1;
}
