/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x180011F20
 * Callers:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Release@CProcess@@UEAAKXZ @ 0x180010DE0 (-Release@CProcess@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x1800119E8 (--1CProcess@@MEAA@XZ.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
