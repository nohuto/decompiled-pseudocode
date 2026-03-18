/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C00E20E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00E2230 (_ChangeWindowMessageFilterEx.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  int v15; // ecx
  __int64 *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(1LL);
  v8 = ValidateHwnd(a1);
  if ( !v8 )
  {
    v13 = 0;
    goto LABEL_17;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v18;
  v18[1] = v8;
  ++*(_DWORD *)(v8 + 8);
  if ( *(_QWORD *)(gptiCurrent + 384LL) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL) )
  {
    v15 = 5;
    goto LABEL_19;
  }
  if ( *(char *)(v8 + 44) < 0 || *(char *)(v8 + 43) < 0 )
  {
    v15 = 1400;
    goto LABEL_19;
  }
  if ( a3 > 2 )
    goto LABEL_18;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  if ( !a2 )
  {
LABEL_18:
    v15 = 87;
LABEL_19:
    v13 = 0;
    UserSetLastError(v15);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v17) = 8;
LABEL_10:
    v13 = ChangeWindowMessageFilterEx((struct tagWND *)v8, a2);
    if ( v13 && a4 )
    {
      v12 = a4 + 1;
      if ( a4 + 1 < a4 || (unsigned __int64)v12 > W32UserProbeAddress )
      {
        v12 = (_QWORD *)W32UserProbeAddress;
        *W32UserProbeAddress = 0;
      }
      *a4 = v17;
    }
    goto LABEL_16;
  }
  v16 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > W32UserProbeAddress )
    v16 = (__int64 *)W32UserProbeAddress;
  v17 = *v16;
  if ( (unsigned int)*v16 == 8 )
    goto LABEL_10;
  UserSetLastError(87);
  v13 = 0;
LABEL_16:
  ThreadUnlock1(v12, v11);
LABEL_17:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v13;
}
