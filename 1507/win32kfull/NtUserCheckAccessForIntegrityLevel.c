/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C0218400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C008077C (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(int a1, int a2, int *a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  int *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  PVOID v16; // rcx
  PVOID v18; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 1;
  EnterCrit(1LL);
  v18 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, &Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v9, v7) != gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS) )
  {
    v8 = -1073741790;
    goto LABEL_19;
  }
  if ( (int)LockProcessByClientId(v4, &v18) < 0 || (v11 = PsGetProcessWin32Process(v18)) == 0 )
  {
LABEL_2:
    v8 = -1073741811;
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v11 + 832);
  v13 = *(_QWORD *)(ProcessWin32Process + 832);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v13 <= (unsigned int)v12 )
    {
      if ( (_DWORD)v13 != (_DWORD)v12
        || (v14 = HIDWORD(v13), v15 = HIDWORD(v12), (_DWORD)v14 != (_DWORD)v15)
        && (_DWORD)v14 != -1
        && (_DWORD)v15 != -1 )
      {
        v6 = 0;
      }
    }
  }
  v7 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v7 = (int *)W32UserProbeAddress;
  *v7 = *v7;
  *a3 = v6;
  v8 = 0;
LABEL_19:
  if ( Object )
    ObfDereferenceObject(Object);
  v16 = v18;
  if ( v18 )
    ObfDereferenceObject(v18);
  UserSessionSwitchLeaveCrit(v16, v7);
  return v8;
}
