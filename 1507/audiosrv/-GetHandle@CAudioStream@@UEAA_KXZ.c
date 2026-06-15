/*
 * XREFs of ?GetHandle@CAudioStream@@UEAA_KXZ @ 0x180044F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAudioStream::GetHandle(CAudioStream *this)
{
  return *((_QWORD *)this + 6);
}
