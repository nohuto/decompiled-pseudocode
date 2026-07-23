/*
 * XREFs of EtwTiLogSuspendResumeThread @ 0x1406A6248
 * Callers:
 *     PsResumeThread @ 0x1404B2870 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1404EAC24 (PsSuspendThread.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140171F18 (EtwpTiFillThreadIdentity.c)
 */

void __fastcall EtwTiLogSuspendResumeThread(int a1, __int64 a2, __int64 a3, char a4)
{
  REGHANDLE v7; // rbx
  __int64 v8; // r12
  const EVENT_DESCRIPTOR *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[256]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( a1 >= 0 )
  {
    v18 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      v7 = EtwThreatIntProvRegHandle;
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x300000uLL) )
      {
        v8 = *(_QWORD *)(a2 + 544);
        v9 = (const EVENT_DESCRIPTOR *)&THREATINT_SUSPEND_THREAD;
        if ( !a4 )
          v9 = &THREATINT_RESUME_THREAD;
        if ( EtwEventEnabled(v7, v9) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v18;
          UserData.Size = 4;
          v10 = EtwpTiFillProcessIdentity((__int64)v17, v8, &v14) + 1;
          v11 = EtwpTiFillThreadIdentity((__int64)(&UserData + v10), a2) + v10;
          v12 = EtwpTiFillProcessIdentity((__int64)(&UserData + v11), *(_QWORD *)(a3 + 544), &v15) + v11;
          v13 = EtwpTiFillThreadIdentity((__int64)(&UserData + v12), a3);
          EtwWrite(EtwThreatIntProvRegHandle, v9, 0LL, v13 + v12, &UserData);
        }
      }
    }
  }
}
