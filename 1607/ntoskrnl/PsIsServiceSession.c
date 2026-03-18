/*
 * XREFs of PsIsServiceSession @ 0x14051DDD4
 * Callers:
 *     PopGetSettingNotificationName @ 0x14051FCC4 (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x140674AE0 (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140007F34 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PsGetSiloBySessionId @ 0x1405209F0 (PsGetSiloBySessionId.c)
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
  v2 = (unsigned int)PsGetServerSiloServiceSessionId() == v1;
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
