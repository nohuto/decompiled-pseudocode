/*
 * XREFs of ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01056F0
 * Callers:
 *     NextTopWindow @ 0x1C0105548 (NextTopWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CheckTopLevelOnly(struct tagWND *a1)
{
  while ( a1 && (*((_WORD *)a1 + 33) & 0x3FFF) == 0x29D )
    a1 = (struct tagWND *)*((_QWORD *)a1 + 12);
  return a1;
}
