/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C0210DA0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
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
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  PVOID v17; // rcx
  PVOID v19; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v19 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, &Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v9) != gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS, v11) )
  {
    v8 = -1073741790;
    goto LABEL_19;
  }
  if ( (int)LockProcessByClientId(v4, &v19) < 0 || (v12 = PsGetProcessWin32Process(v19)) == 0 )
  {
LABEL_2:
    v8 = -1073741811;
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(v12 + 824);
  v14 = *(_QWORD *)(ProcessWin32Process + 824);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v14 <= (unsigned int)v13 )
    {
      if ( (_DWORD)v14 != (_DWORD)v13
        || (v15 = HIDWORD(v14), v16 = HIDWORD(v13), (_DWORD)v15 != (_DWORD)v16)
        && (_DWORD)v15 != -1
        && (_DWORD)v16 != -1 )
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
  v17 = v19;
  if ( v19 )
    ObfDereferenceObject(v19);
  UserSessionSwitchLeaveCrit(v17, v7);
  return v8;
}
