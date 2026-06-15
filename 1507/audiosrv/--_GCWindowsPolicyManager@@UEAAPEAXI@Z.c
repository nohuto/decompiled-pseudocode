/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x1800A096C
 * Callers:
 *     ??_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z @ 0x1800451D0 (--_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x1800A0898 (--1CWindowsPolicyManager@@UEAA@XZ.c)
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
