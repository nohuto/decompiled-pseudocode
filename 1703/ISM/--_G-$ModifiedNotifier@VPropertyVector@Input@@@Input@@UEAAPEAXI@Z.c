/*
 * XREFs of ??_G?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAPEAXI@Z @ 0x18001CE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1PropertyVector@Input@@UEAA@XZ @ 0x18001BD74 (--1PropertyVector@Input@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char **__fastcall Input::ModifiedNotifier<Input::PropertyVector>::`scalar deleting destructor'(char **Block, char a2)
{
  Input::PropertyVector::~PropertyVector(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
