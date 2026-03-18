/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C02181D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00734FC (LockProcessByClientId.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  PVOID v18; // rcx
  PVOID v20; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v20 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, &Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v9, v7, v11, v12) != gpepCSRSS
    && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS) )
  {
    v8 = -1073741790;
    goto LABEL_19;
  }
  if ( (int)LockProcessByClientId(v4, &v20) < 0 || (v13 = PsGetProcessWin32Process(v20)) == 0 )
  {
LABEL_2:
    v8 = -1073741811;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(v13 + 832);
  v15 = *(_QWORD *)(ProcessWin32Process + 832);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v15 <= (unsigned int)v14 )
    {
      if ( (_DWORD)v15 != (_DWORD)v14
        || (v16 = HIDWORD(v15), v17 = HIDWORD(v14), (_DWORD)v16 != (_DWORD)v17)
        && (_DWORD)v16 != -1
        && (_DWORD)v17 != -1 )
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
  v18 = v20;
  if ( v20 )
    ObfDereferenceObject(v20);
  UserSessionSwitchLeaveCrit(v18, v7);
  return v8;
}
