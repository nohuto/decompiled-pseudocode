/*
 * XREFs of ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETROOT@@@Z @ 0x1800B84E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B82C0 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRenderTarget::ProcessSetRoot(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_TARGET_SETROOT *a3)
{
  struct CVisual *Resource; // rax
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0x20u)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x87u);
  }
  else
  {
    v7 = CRenderTarget::SetRoot(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x8Bu);
  }
  return v8;
}
