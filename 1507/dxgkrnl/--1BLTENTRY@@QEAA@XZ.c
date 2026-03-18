/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C0021710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete(this[63]);
  operator delete(this[29]);
}
