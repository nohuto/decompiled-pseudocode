/*
 * XREFs of ?GetProcessHandle@CProcess@@UEAAPEAXXZ @ 0x180010B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CProcess::GetProcessHandle(CProcess *this)
{
  return (void *)*((_QWORD *)this + 18);
}
