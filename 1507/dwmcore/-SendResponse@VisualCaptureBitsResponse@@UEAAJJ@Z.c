/*
 * XREFs of ?SendResponse@VisualCaptureBitsResponse@@UEAAJJ@Z @ 0x1800F04E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VisualCaptureBitsResponse::SendResponse(HANDLE *this)
{
  if ( !*((_BYTE *)this + 168) )
  {
    SetEvent(this[20]);
    *((_BYTE *)this + 168) = 1;
  }
  *((_BYTE *)this + 33) = 1;
  return 0LL;
}
