/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x180029F40
 * Callers:
 *     ?Release@CProcess@@UEAAKXZ @ 0x180028B90 (-Release@CProcess@@UEAAKXZ.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 * Callees:
 *     ??1CProcess@@MEAA@XZ @ 0x1800297C0 (--1CProcess@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
