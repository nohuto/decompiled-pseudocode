/*
 * XREFs of ?SetMonitorSpecificContent@CHwTextureRenderTarget@@UEAA_N_N@Z @ 0x180082CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

char __fastcall CHwTextureRenderTarget::SetMonitorSpecificContent(CHwTextureRenderTarget *this, char a2)
{
  char v2; // bl
  CMILCOMBase *v5; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 64) != a2 )
  {
    v5 = (CMILCOMBase *)*((_QWORD *)this + 7);
    if ( v5 )
    {
      CMILCOMBase::InternalRelease(v5);
      *((_QWORD *)this + 7) = 0LL;
    }
    *((_BYTE *)this + 64) = a2;
    return 1;
  }
  return v2;
}
