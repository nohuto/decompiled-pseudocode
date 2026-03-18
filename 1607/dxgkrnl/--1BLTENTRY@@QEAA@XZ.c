/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C0028120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete(this[55]);
  operator delete(this[21]);
}
