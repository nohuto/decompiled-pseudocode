/*
 * XREFs of ??_ECraneCarryRecognizer@@UEAAPEAXI@Z @ 0x180038380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CraneCarryRecognizer *__fastcall CraneCarryRecognizer::`vector deleting destructor'(
        CraneCarryRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
