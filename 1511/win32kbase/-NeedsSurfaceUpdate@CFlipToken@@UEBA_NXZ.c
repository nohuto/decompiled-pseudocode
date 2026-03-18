/*
 * XREFs of ?NeedsSurfaceUpdate@CFlipToken@@UEBA_NXZ @ 0x1C008D750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::NeedsSurfaceUpdate(CFlipToken *this)
{
  return *((_BYTE *)this + 96);
}
