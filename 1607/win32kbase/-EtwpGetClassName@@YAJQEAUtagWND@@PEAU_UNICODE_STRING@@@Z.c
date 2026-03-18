/*
 * XREFs of ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00B4AE4
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0015690 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0015AA0 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetClassName(struct tagWND *const a1, struct _UNICODE_STRING *a2)
{
  unsigned int v4; // ebx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  RtlInitUnicodeString(a2, 0LL);
  if ( a1 )
  {
    RtlInitAnsiString(&DestinationString, *(PCSZ *)(*((_QWORD *)a1 + 19) + 144LL));
    return (unsigned int)RtlAnsiStringToUnicodeString(a2, &DestinationString, 1u);
  }
  return v4;
}
