/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C006FA70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ClassUnlock @ 0x1C01DEF3C (ClassUnlock.c)
 * Callees:
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 */

struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1, __int64 a2)
{
  __int64 v2; // rax
  struct tagCLS *i; // rax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 20);
  v2 = *((_QWORD *)a1 + 8);
  if ( a1 == (struct tagCLS *)v2 )
    return a1;
  --*(_DWORD *)(v2 + 80);
  if ( *((_DWORD *)a1 + 20) )
    return a1;
  for ( i = *(struct tagCLS **)(*((_QWORD *)a1 + 8) + 72LL); i != a1; i = *(struct tagCLS **)i )
    ;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  DestroyClass(CurrentProcessWin32Process);
  return 0LL;
}
