/*
 * XREFs of ??_GInputAttemptedTarget@@UEAAPEAXI@Z @ 0x18006BF00
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputAttemptedTarget@@UEAA@XZ @ 0x18006BF34 (--1InputAttemptedTarget@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputAttemptedTarget *__fastcall InputAttemptedTarget::`scalar deleting destructor'(
        InputAttemptedTarget *this,
        char a2)
{
  InputAttemptedTarget::~InputAttemptedTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
