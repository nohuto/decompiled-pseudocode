/*
 * XREFs of ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E195C
 * Callers:
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C008143C (CalcForegroundInsertAfter.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 */

__int64 __fastcall CheckOnTop(struct tagTHREADINFO *a1, struct tagWND *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  struct tagWND *v8; // rdi

  if ( a2 != *(struct tagWND **)(*((_QWORD *)a1 + 49) + 80LL) )
    return 0LL;
  v5 = a3 - 513;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 3;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0LL;
      }
    }
  }
  if ( (*((_BYTE *)a2 + 48) & 8) == 0
    && ((*((_WORD *)a2 + 33) & 0x3FFF) != 0x29D ? (v8 = (struct tagWND *)*((_QWORD *)a2 + 10)) : (v8 = 0LL),
        v8 == CalcForegroundInsertAfter((__int64)a2)) )
  {
    return 0LL;
  }
  else
  {
    return xxxSetWindowPos(a2, 0LL, 0LL, 0LL, 0, 0, 19);
  }
}
