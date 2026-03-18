/*
 * XREFs of ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AB3D4
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C006DC50 (EtwTraceMessageCheckDelay.c)
 *     EtwTraceInputProcessDelay @ 0x1C0072540 (EtwTraceInputProcessDelay.c)
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
