/*
 * XREFs of ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180035098
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180033320 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180034248 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180034308 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 */

bool __fastcall CD3DDeviceManager::HardwareProtectionRequired(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  LONG HighPart; // [rsp+3Ch] [rbp+14h]

  HighPart = a2.HighPart;
  if ( !(unsigned __int8)CD3DDeviceManager::IsHardwareProtectionDisabled() )
  {
    v5 = *(_DWORD *)(v3 + 120);
    v6 = v4;
    if ( v5 )
    {
      while ( *(_QWORD *)(*(_QWORD *)(v3 + 96) + 12LL * v6) != __PAIR64__(HighPart, v2) )
      {
        if ( ++v6 >= v5 )
          return v4;
      }
      LOBYTE(v4) = 1;
    }
  }
  return v4;
}
