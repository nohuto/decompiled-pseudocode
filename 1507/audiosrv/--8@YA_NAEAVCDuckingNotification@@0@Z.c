/*
 * XREFs of ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x1800059C4
 * Callers:
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005F1C (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005FD4 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)a1 + 2) != *(_DWORD *)(a2 + 8) )
    return 0;
  v2 = *a1;
  return !v2 || !*(_QWORD *)a2 || v2 == *(_QWORD *)a2;
}
