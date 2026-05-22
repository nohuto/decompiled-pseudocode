/*
 * XREFs of ?GetHitTestCompositorId@DisplayBinding@@UEBA?AU_GUID@@XZ @ 0x18001C0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall DisplayBinding::GetHitTestCompositorId(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[3];
  return result;
}
