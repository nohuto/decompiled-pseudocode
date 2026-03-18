/*
 * XREFs of ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0C80
 * Callers:
 *     <none>
 * Callees:
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 */

void __fastcall JournalTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a4 + 104);
  if ( v4 )
    WakeSomeone(*(_QWORD *)(v4 + 384), 0LL, *(unsigned int *)(*(_QWORD *)(v4 + 384) + 352LL), 0LL);
}
