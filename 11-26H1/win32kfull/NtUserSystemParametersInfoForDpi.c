/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1401D0590
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _SystemParametersInfoForDpi @ 0x1401D0720 (_SystemParametersInfoForDpi.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, int *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  size_t v11; // rsi
  __int64 CurrentProcessWow64Process; // rax
  int *v13; // rax
  int v14; // r9d
  int *v15; // rdi
  int v16; // edx
  int v17; // ebx
  __int64 v18; // rcx
  int *Address; // [rsp+58h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  if ( !a5 || !a3 )
    goto LABEL_12;
  switch ( a1 )
  {
    case 41:
      v10 = 504;
      break;
    case 31:
      v10 = 92;
      break;
    case 45:
      v10 = 108;
      break;
    default:
      goto LABEL_12;
  }
  if ( a2 != v10 )
  {
LABEL_12:
    v17 = 0;
    UserSetLastError(87);
    goto LABEL_9;
  }
  Address = a3;
  v11 = v10;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8);
  ProbeForWrite(a3, (unsigned int)v11, CurrentProcessWow64Process != 0 ? 1 : 4);
  v13 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)v11, 2037674837LL);
  v15 = v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  v16 = *Address;
  *v13 = *Address;
  v17 = SystemParametersInfoForDpi(a1, v16, (_DWORD)v13, v14, a5);
  memmove(Address, v15, v11);
  Win32FreePool(v15);
LABEL_9:
  UserSessionSwitchLeaveCrit(v18);
  return v17;
}
