/*
 * XREFs of EtwTiLogReadWriteVm @ 0x1406A5CCC
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x1404EEBF0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140171F18 (EtwpTiFillThreadIdentity.c)
 */

char __fastcall EtwTiLogReadWriteVm(int a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  int v10; // eax
  REGHANDLE v11; // rsi
  const EVENT_DESCRIPTOR *v12; // rdi
  const EVENT_DESCRIPTOR *v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  REGHANDLE v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[256]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+190h] [rbp+90h] BYREF

  v25 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode == 1 )
  {
    if ( a4 == 16 )
    {
      v9 = 1;
      v10 = 196608;
    }
    else
    {
      v9 = 0;
      v10 = 786432;
    }
    v11 = EtwThreatIntProvRegHandle;
    LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v10);
    if ( (_BYTE)CurrentThread )
    {
      if ( a2 == a3 )
      {
        v12 = (const EVENT_DESCRIPTOR *)&THREATINT_READVM_LOCAL;
        v13 = (const EVENT_DESCRIPTOR *)&THREATINT_WRITEVM_LOCAL;
      }
      else
      {
        v12 = (const EVENT_DESCRIPTOR *)&THREATINT_READVM_REMOTE;
        v13 = &THREATINT_WRITEVM_REMOTE;
      }
      if ( !v9 )
        v12 = v13;
      LOBYTE(CurrentThread) = EtwEventEnabled(v11, v12);
      if ( (_BYTE)CurrentThread )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v25;
        UserData.Size = 4;
        v14 = EtwpTiFillProcessIdentity((__int64)v24, a2, &v21) + 1;
        v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + v14), (__int64)KeGetCurrentThread()) + v14;
        v16 = EtwpTiFillProcessIdentity((__int64)(&UserData + v15), a3, &v22) + v15;
        v17 = 2LL * v16++;
        *(&UserData.Reserved + 2 * v17) = 0;
        *(&UserData.Ptr + v17) = (ULONGLONG)&a5;
        *(&UserData.Size + 2 * v17) = 8;
        v18 = 2LL * v16;
        *(&UserData.Reserved + 2 * v18) = 0;
        *(&UserData.Ptr + v18) = (ULONGLONG)&a6;
        v19 = EtwThreatIntProvRegHandle;
        *(&UserData.Size + 2 * v18) = 8;
        LOBYTE(CurrentThread) = EtwWrite(v19, v12, 0LL, v16 + 1, &UserData);
      }
    }
  }
  return (char)CurrentThread;
}
