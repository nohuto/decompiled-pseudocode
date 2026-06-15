/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x18009FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x18009F9D4 (--1CApplication@@MEAA@XZ.c)
 */

CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, __int64 a2, bool a3)
{
  char v3; // bl

  v3 = a2;
  CApplication::~CApplication(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
