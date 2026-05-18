/*
 * XREFs of ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001F00
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x180003460 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

__int64 UnmapDwmVirtualAccount(void)
{
  unsigned int v0; // ebx
  int v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v4; // [rsp+40h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  memset_0(&DestinationString, 0, 0x30uLL);
  Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v4, gwszDwmAccountName);
  v1 = LsaLookupManageSidNameMapping(1LL, &DestinationString, &Buffer);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    if ( &dword_18000A114 )
      MilInstrumentationCheckHR(4u, &dword_18000A114, 1u, v0, 0x2A5u);
    else
      DoStackCapture(v0, 0x2A5u);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  return v0;
}
