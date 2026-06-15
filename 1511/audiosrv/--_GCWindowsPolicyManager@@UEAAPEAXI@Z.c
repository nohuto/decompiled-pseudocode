/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x18009DB58
 * Callers:
 *     ??_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z @ 0x180049400 (--_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18009DA84 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 */

CWindowsPolicyManager *__fastcall CWindowsPolicyManager::`scalar deleting destructor'(
        CWindowsPolicyManager *this,
        char a2)
{
  CWindowsPolicyManager::~CWindowsPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
