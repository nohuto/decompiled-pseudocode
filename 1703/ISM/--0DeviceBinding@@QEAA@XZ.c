/*
 * XREFs of ??0DeviceBinding@@QEAA@XZ @ 0x180011810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DeviceBinding *__fastcall DeviceBinding::DeviceBinding(DeviceBinding *this)
{
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = 0LL;
  return this;
}
