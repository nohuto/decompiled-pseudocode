/*
 * XREFs of ?NeedsSurfaceUpdate@CScatterToken@@UEBA_NXZ @ 0x1C008A320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScatterToken::NeedsSurfaceUpdate(CScatterToken *this)
{
  return *((_BYTE *)this + 96);
}
