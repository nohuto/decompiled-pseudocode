/*
 * XREFs of ??1ResultException@wil@@QEAA@XZ @ 0x180048DC8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 144));
}
