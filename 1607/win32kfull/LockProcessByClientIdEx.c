/*
 * XREFs of LockProcessByClientIdEx @ 0x1C009ACB8
 * Callers:
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LockProcessByClientIdEx(void *a1, PEPROCESS *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx

  result = PsLookupProcessByProcessId(a1, a2);
  v6 = result;
  if ( result >= 0 )
  {
    if ( a3 )
      *a3 = PsGetProcessSessionId(*a2);
    return v6;
  }
  return result;
}
