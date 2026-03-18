/*
 * XREFs of xxxDwmCheckProcessSession @ 0x1C0015A00
 * Callers:
 *     NtUserCheckProcessSession @ 0x1C00157C0 (NtUserCheckProcessSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxDwmCheckProcessSession(int a1)
{
  int ProcessSessionId; // esi
  NTSTATUS v2; // edi
  unsigned int v3; // ebx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  ProcessSessionId = 0;
  v2 = PsLookupProcessByProcessId((HANDLE)a1, (PEPROCESS *)&Object);
  if ( v2 >= 0 )
    ProcessSessionId = PsGetProcessSessionId(Object);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( ProcessSessionId != gSessionId )
      v3 = -1073741823;
    ObfDereferenceObject(Object);
  }
  return v3;
}
