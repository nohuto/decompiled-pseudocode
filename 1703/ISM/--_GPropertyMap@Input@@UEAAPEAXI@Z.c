/*
 * XREFs of ??_GPropertyMap@Input@@UEAAPEAXI@Z @ 0x180011600
 * Callers:
 *     <none>
 * Callees:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x18001166C (--1PropertyMap@Input@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Input::PropertyMap *__fastcall Input::PropertyMap::`scalar deleting destructor'(Input::PropertyMap *this, char a2)
{
  Input::PropertyMap::~PropertyMap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
