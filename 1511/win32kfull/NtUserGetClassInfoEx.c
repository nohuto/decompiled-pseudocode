/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C011AE80
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C0119CBC (RegisterIconTitleClass.c)
 *     _GetClassInfoEx @ 0x1C011B160 (_GetClassInfoEx.c)
 *     RegisterDefaultClass @ 0x1C011E2D8 (RegisterDefaultClass.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, unsigned int *a2, _OWORD *a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  wchar_t *v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int16 v13; // r12
  wchar_t *v14; // rax
  wchar_t *v15; // r14
  __int64 v16; // rax
  _BYTE *v17; // rdx
  _DWORD *v18; // rdx
  unsigned __int16 ClassInfo; // ax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  int v24; // [rsp+30h] [rbp-E8h]
  int v25; // [rsp+34h] [rbp-E4h]
  __int64 v26; // [rsp+48h] [rbp-D0h] BYREF
  int v27; // [rsp+50h] [rbp-C8h]
  wchar_t *Str1; // [rsp+58h] [rbp-C0h]
  _QWORD *v29; // [rsp+60h] [rbp-B8h]
  _OWORD v30[6]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+D0h] [rbp-48h]
  _QWORD v32[3]; // [rsp+D8h] [rbp-40h] BYREF

  v5 = a4;
  v29 = a4;
  v8 = a1;
  v26 = 0LL;
  memset(v30, 0, 0x50uLL);
  v24 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_30;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  v9 = *a2;
  v25 = *a2;
  v27 = *a2;
  v10 = (wchar_t *)*((_QWORD *)a2 + 1);
  Str1 = v10;
  if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v10 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (unsigned __int64)v10 + (unsigned __int16)v9 + 2;
    if ( v11 >= W32UserProbeAddress || (unsigned __int16)v9 > HIWORD(v25) || v11 <= (unsigned __int64)v10 )
      *W32UserProbeAddress = 0;
  }
  if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = (unsigned __int16)v9;
    v13 = v9 + 2;
    v14 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)v9 + 2LL, 2020897621LL);
    v15 = v14;
    Str1 = v14;
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    v24 = 1;
    PushW32ThreadLock((__int64)v14, v32, (__int64)Win32FreePool);
    memmove(v15, v10, (unsigned int)v12);
    v15[v12 >> 1] = 0;
    HIWORD(v27) = v13;
    v5 = v29;
    v8 = a1;
  }
  v16 = -PsGetCurrentProcessWow64Process(v9);
  v31 = (-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  if ( ((v16 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v17 = (_BYTE *)W32UserProbeAddress;
  *v17 = *v17;
  v17[79] = v17[79];
  v18 = v5;
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v18 = (_DWORD *)W32UserProbeAddress;
  *v18 = *v18;
  v30[0] = *a3;
  v30[1] = a3[1];
  v30[2] = a3[2];
  v30[3] = a3[3];
  v30[4] = a3[4];
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1) )
  {
    ClassInfo = GetClassInfoEx(v8, Str1, v30, &v26, a5);
    v22 = ClassInfo;
    if ( ClassInfo )
    {
      *a3 = v30[0];
      a3[1] = v30[1];
      a3[2] = v30[2];
      a3[3] = v30[3];
      a3[4] = v30[4];
      *v5 = v26;
    }
  }
  else
  {
LABEL_30:
    v22 = 0;
    UserSetLastError(87);
  }
  if ( v24 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v32);
  UserSessionSwitchLeaveCrit(v21, v20);
  return v22;
}
