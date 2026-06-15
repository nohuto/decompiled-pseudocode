/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x1800060D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180006104 (--1CDuckingManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x140uLL);
  return this;
}
