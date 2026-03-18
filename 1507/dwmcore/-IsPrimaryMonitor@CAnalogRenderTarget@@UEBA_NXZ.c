/*
 * XREFs of ?IsPrimaryMonitor@CAnalogRenderTarget@@UEBA_NXZ @ 0x1801266A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnalogRenderTarget::IsPrimaryMonitor(CAnalogRenderTarget *this)
{
  return *((_DWORD *)this + 22) == 1;
}
