/*
 * XREFs of ?Initialize@CAnimationResource@@MEAAJPEAUIDwmChannel@@@Z @ 0x180050EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::Initialize(CAnimationResource *this, struct IDwmChannel *a2)
{
  *((_QWORD *)this + 1) = a2;
  return 0LL;
}
