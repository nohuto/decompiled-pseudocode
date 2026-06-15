/*
 * XREFs of ??_ECStreamClassPolicyManager@@UEAAPEAXI@Z @ 0x180017BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CStreamClassPolicyManager *__fastcall CStreamClassPolicyManager::`vector deleting destructor'(
        CStreamClassPolicyManager *this,
        char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
