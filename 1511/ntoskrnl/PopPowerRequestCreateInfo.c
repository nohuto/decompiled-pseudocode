/*
 * XREFs of PopPowerRequestCreateInfo @ 0x140452B24
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(char *a1, char *a2, HANDLE *a3)
{
  char v4; // si
  __int64 v5; // rdx
  int UserPowerRequest; // ebx
  _QWORD *v7; // rdi
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = (char)a2;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    UserPowerRequest = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, &v10);
    if ( UserPowerRequest >= 0 )
    {
      v7 = v10;
      LOBYTE(v5) = v4;
      UserPowerRequest = PopCreateUserPowerRequest(Object, v5, v10);
      if ( UserPowerRequest >= 0 )
      {
        v7 = 0LL;
        UserPowerRequest = ObInsertObject(Object[0], 0LL, 0, 0, 0LL, a3);
      }
      if ( v7 )
        PoDestroyReasonContext(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)UserPowerRequest;
}
