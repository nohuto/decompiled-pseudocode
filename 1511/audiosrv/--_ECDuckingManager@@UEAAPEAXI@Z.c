/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x1800A1820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A15F8 (--1CDuckingManager@@UEAA@XZ.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
