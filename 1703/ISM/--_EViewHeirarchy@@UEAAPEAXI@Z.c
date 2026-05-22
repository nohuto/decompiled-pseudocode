/*
 * XREFs of ??_EViewHeirarchy@@UEAAPEAXI@Z @ 0x18006D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewHeirarchy@@UEAA@XZ @ 0x18006D378 (--1ViewHeirarchy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewHeirarchy *__fastcall ViewHeirarchy::`vector deleting destructor'(ViewHeirarchy *this, char a2)
{
  ViewHeirarchy::~ViewHeirarchy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
