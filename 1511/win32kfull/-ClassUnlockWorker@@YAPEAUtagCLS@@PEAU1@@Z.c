/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F4720
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ClassUnlock @ 0x1C01E86C4 (ClassUnlock.c)
 * Callees:
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
 */

struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1)
{
  __int64 v1; // rax
  struct tagCLS *i; // rax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 20);
  v1 = *((_QWORD *)a1 + 8);
  if ( a1 == (struct tagCLS *)v1 )
    return a1;
  --*(_DWORD *)(v1 + 80);
  if ( *((_DWORD *)a1 + 20) )
    return a1;
  for ( i = *(struct tagCLS **)(*((_QWORD *)a1 + 8) + 72LL); i != a1; i = *(struct tagCLS **)i )
    ;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  DestroyClass(CurrentProcessWin32Process);
  return 0LL;
}
