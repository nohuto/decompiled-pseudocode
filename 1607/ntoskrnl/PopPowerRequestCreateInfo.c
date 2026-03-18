/*
 * XREFs of PopPowerRequestCreateInfo @ 0x14051E69C
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x1400FB8C8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400FC0BC (PoCaptureReasonContext.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, HANDLE *a3)
{
  char v4; // si
  __int64 v5; // rdx
  int UserPowerRequest; // ebx
  _QWORD *v7; // rdi
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = a2;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    UserPowerRequest = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, (PVOID *)&v10);
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
