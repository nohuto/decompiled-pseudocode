/*
 * XREFs of ?IsEmpty@CLegacyTokenBuffer@@QEAA_NXZ @ 0x1C00A3F38
 * Callers:
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E06D8 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyTokenBuffer::IsEmpty(CLegacyTokenBuffer *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((CLegacyTokenBuffer **)this + 261) == (CLegacyTokenBuffer *)((char *)this + 16) )
    return *((_DWORD *)this + 8) == 0;
  return v1;
}
