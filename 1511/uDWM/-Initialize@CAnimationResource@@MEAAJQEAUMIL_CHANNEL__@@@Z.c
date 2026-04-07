/*
 * XREFs of ?Initialize@CAnimationResource@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800509A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::Initialize(CAnimationResource *this, struct MIL_CHANNEL__ *const a2)
{
  *((_QWORD *)this + 1) = a2;
  return 0LL;
}
