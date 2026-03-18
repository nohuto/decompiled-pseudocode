/*
 * XREFs of ?WaitForVBlank@CAnalogRenderTarget@@UEAAJPEAX@Z @ 0x1801279B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForNextFrameStart@CAnalogCompositorClient@@QEAAJPEAX@Z @ 0x180127964 (-WaitForNextFrameStart@CAnalogCompositorClient@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::WaitForVBlank(CAnalogRenderTarget *this, void *a2)
{
  __int64 result; // rax

  result = 2147500033LL;
  if ( *((_DWORD *)this + 12) == 1 )
  {
    result = 0LL;
    if ( !g_AnalogCompositor )
      return CAnalogCompositorClient::WaitForNextFrameStart(this, a2);
  }
  return result;
}
