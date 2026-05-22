/*
 * XREFs of ?GetCaptureTarget@MPCInputProviderBase@@UEBAPEAUIMPCInputTarget@@XZ @ 0x18002CC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCInputTarget *__fastcall MPCInputProviderBase::GetCaptureTarget(MPCInputProviderBase *this)
{
  return (struct IMPCInputTarget *)*((_QWORD *)this + 16);
}
