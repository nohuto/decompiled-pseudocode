/*
 * XREFs of ??_EPropertyVector@Input@@UEAAPEAXI@Z @ 0x18001BD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1PropertyVector@Input@@UEAA@XZ @ 0x18001BD74 (--1PropertyVector@Input@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Input::PropertyVector *__fastcall Input::PropertyVector::`vector deleting destructor'(
        Input::PropertyVector *this,
        char a2)
{
  Input::PropertyVector::~PropertyVector(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
