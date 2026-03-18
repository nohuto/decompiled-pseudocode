/*
 * XREFs of ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0028148
 * Callers:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C001D1F8 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C01830D0 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000C758 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

char *__fastcall BLTENTRY::`vector deleting destructor'(BLTENTRY *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    560LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  operator delete(v1);
  return v1;
}
