/*
 * XREFs of EtwTiLogSuspendResumeProcess @ 0x1406A60DC
 * Callers:
 *     PsResumeProcess @ 0x1404B270C (PsResumeProcess.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 *     PsSuspendProcess @ 0x140682110 (PsSuspendProcess.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140171F18 (EtwpTiFillThreadIdentity.c)
 */

void __fastcall EtwTiLogSuspendResumeProcess(int a1, __int64 a2, __int64 a3, int a4)
{
  REGHANDLE v7; // rsi
  __int64 v8; // r14
  int v9; // ebx
  int v10; // ebx
  const EVENT_DESCRIPTOR *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-138h] BYREF
  __int64 v16; // [rsp+38h] [rbp-130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v18[224]; // [rsp+50h] [rbp-118h] BYREF
  int v19; // [rsp+170h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    v19 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      v7 = EtwThreatIntProvRegHandle;
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC00000uLL) )
      {
        v8 = *(_QWORD *)(a2 + 544);
        if ( a4 )
        {
          v9 = a4 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
                return;
              v11 = &THREATINT_THAW_PROCESS;
            }
            else
            {
              v11 = (const EVENT_DESCRIPTOR *)&THREATINT_FREEZE_PROCESS;
            }
          }
          else
          {
            v11 = (const EVENT_DESCRIPTOR *)&THREATINT_RESUME_PROCESS;
          }
        }
        else
        {
          v11 = (const EVENT_DESCRIPTOR *)&THREATINT_SUSPEND_PROCESS;
        }
        if ( EtwEventEnabled(v7, v11) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v19;
          UserData.Size = 4;
          v12 = EtwpTiFillProcessIdentity((__int64)v18, v8, &v15) + 1;
          v13 = EtwpTiFillThreadIdentity((__int64)(&UserData + v12), a2) + v12;
          v14 = EtwpTiFillProcessIdentity((__int64)(&UserData + v13), a3, &v16);
          EtwWrite(EtwThreatIntProvRegHandle, v11, 0LL, v14 + v13, &UserData);
        }
      }
    }
  }
}
