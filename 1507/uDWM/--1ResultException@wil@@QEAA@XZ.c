/*
 * XREFs of ??1ResultException@wil@@QEAA@XZ @ 0x18006DBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 18);
}
