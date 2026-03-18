/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1C021B620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     _SystemParametersInfoForDpi @ 0x1C01CEA40 (_SystemParametersInfoForDpi.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v10; // r15
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  const void *v14; // rbx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  if ( !a5 || !a3 )
    goto LABEL_12;
  if ( a1 == 31 )
  {
    v8 = 92;
    goto LABEL_9;
  }
  if ( a1 == 41 )
  {
    v8 = 504;
    goto LABEL_9;
  }
  if ( a1 != 45 )
  {
LABEL_12:
    v15 = 0;
    UserSetLastError(87LL);
    goto LABEL_13;
  }
  v8 = 108;
LABEL_9:
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7);
  v10 = v8;
  ProbeForWrite(a3, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v8, 2037674837LL);
  v14 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  *v11 = *a3;
  v15 = SystemParametersInfoForDpi(a1, v12, v11, v13, a5);
  memmove(a3, v14, v10);
  Win32FreePool(v14, v16, v17);
LABEL_13:
  UserSessionSwitchLeaveCrit(v19, v18);
  return v15;
}
