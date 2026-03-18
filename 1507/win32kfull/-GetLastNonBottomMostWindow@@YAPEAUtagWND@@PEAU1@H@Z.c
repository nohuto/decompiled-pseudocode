/*
 * XREFs of ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C00EC0D8
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C005BADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C008143C (CalcForegroundInsertAfter.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetLastNonBottomMostWindow(struct tagWND *a1, int a2)
{
  __int64 v2; // r9
  __int64 i; // r8

  v2 = 0LL;
  for ( i = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL); i && (*(_BYTE *)(i + 44) & 0x20) == 0; i = *(_QWORD *)(i + 72) )
  {
    if ( !a2 || a1 != (struct tagWND *)i )
      v2 = i;
  }
  return (struct tagWND *)v2;
}
