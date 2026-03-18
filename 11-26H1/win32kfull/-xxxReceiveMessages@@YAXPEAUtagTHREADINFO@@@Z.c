/*
 * XREFs of ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14002457C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401FDDC0 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall xxxReceiveMessages(struct tagTHREADINFO *a1)
{
  while ( (*(_DWORD *)(*((_QWORD *)a1 + 60) + 8LL) & 0x40) != 0 )
    xxxReceiveMessage(a1);
}
