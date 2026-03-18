/*
 * XREFs of ?GetDefaultIoTarget@FxMpDevice@@UEAAPEAVFxIoTarget@@XZ @ 0x1C0036DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxIoTarget *__fastcall FxMpDevice::GetDefaultIoTarget(FxMpDevice *this)
{
  return this->m_DefaultTarget;
}
