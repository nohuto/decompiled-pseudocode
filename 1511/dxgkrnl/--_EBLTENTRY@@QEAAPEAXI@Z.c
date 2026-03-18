/*
 * XREFs of ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0021628
 * Callers:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C001907C (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C015D860 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C000B1C8 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

char *__fastcall BLTENTRY::`vector deleting destructor'(BLTENTRY *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    560LL,
    *((_DWORD *)this - 2),
    (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  operator delete(v1);
  return v1;
}
