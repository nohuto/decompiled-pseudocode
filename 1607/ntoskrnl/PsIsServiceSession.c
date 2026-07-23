/*
 * XREFs of PsIsServiceSession @ 0x1404873C8
 * Callers:
 *     PopGetSettingNotificationName @ 0x140502D2C (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x140674BC4 (PopInputDisabled.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x140503A58 (PsGetSiloBySessionId.c)
 */

char __fastcall PsIsServiceSession(__int64 a1)
{
  int v1; // ebx
  bool v2; // bl
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( !(_DWORD)a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &Object) < 0 )
    return 0;
  v2 = (unsigned int)PsGetServerSiloServiceSessionId((__int64)Object) == v1;
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
