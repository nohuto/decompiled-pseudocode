/*
 * XREFs of ?IsValid@CInputSink@@UEBA_NXZ @ 0x1C008D550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputSink::IsValid(CInputSink *this)
{
  return *((_BYTE *)this + 32);
}
