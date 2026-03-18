/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C00578B0
 * Callers:
 *     <none>
 * Callees:
 *     _GetClassInfoEx @ 0x1C0057B7C (_GetClassInfoEx.c)
 *     RegisterDefaultClass @ 0x1C0059D10 (RegisterDefaultClass.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C00F1DF4 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, unsigned int *a2, _OWORD *a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r14
  __int64 v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wchar_t *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  __int16 v16; // r12
  wchar_t *v17; // rax
  wchar_t *v18; // r14
  __int64 v19; // rax
  _BYTE *v20; // rdx
  _DWORD *v21; // rdx
  unsigned __int16 ClassInfo; // ax
  int v24; // [rsp+30h] [rbp-E8h]
  int v25; // [rsp+34h] [rbp-E4h]
  __int64 v26; // [rsp+48h] [rbp-D0h] BYREF
  int v27; // [rsp+50h] [rbp-C8h]
  wchar_t *Str1; // [rsp+58h] [rbp-C0h]
  _QWORD *v29; // [rsp+60h] [rbp-B8h]
  _OWORD v30[6]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+D0h] [rbp-48h]
  _BYTE v32[24]; // [rsp+D8h] [rbp-40h] BYREF

  v5 = a4;
  v29 = a4;
  v8 = a1;
  v26 = 0LL;
  memset(v30, 0, 0x50uLL);
  v24 = 0;
  EnterCrit(1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  v12 = *a2;
  v25 = *a2;
  v27 = *a2;
  v13 = (wchar_t *)*((_QWORD *)a2 + 1);
  Str1 = v13;
  if ( ((unsigned __int64)v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (unsigned __int64)v13 + (unsigned __int16)v12 + 2;
    if ( v14 >= W32UserProbeAddress
      || (unsigned __int16)v12 > HIWORD(v25)
      || (v12 & 1) != 0
      || v14 <= (unsigned __int64)v13 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  if ( ((unsigned __int64)v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v15 = (unsigned __int16)v12;
    v16 = v12 + 2;
    v17 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)v12 + 2LL, 2020897621LL);
    v18 = v17;
    Str1 = v17;
    if ( !v17 )
      ExRaiseStatus(-1073741801);
    v24 = 1;
    PushW32ThreadLock(v17, v32, Win32FreePool);
    memmove(v18, v13, (unsigned int)v15);
    v18[v15 >> 1] = 0;
    HIWORD(v27) = v16;
    v5 = v29;
    v8 = a1;
  }
  v19 = -PsGetCurrentProcessWow64Process(v12);
  v31 = (-(__int64)(v19 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  if ( ((v19 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v20 = (_BYTE *)W32UserProbeAddress;
  *v20 = *v20;
  v20[79] = v20[79];
  v21 = v5;
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v21 = (_DWORD *)W32UserProbeAddress;
  *v21 = *v21;
  v30[0] = *a3;
  v30[1] = a3[1];
  v30[2] = a3[2];
  v30[3] = a3[3];
  v30[4] = a3[4];
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1) )
  {
    ClassInfo = GetClassInfoEx(v8, Str1, v30, &v26, a5);
    v9 = ClassInfo;
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
LABEL_3:
    v9 = 0;
    UserSetLastError(87LL);
  }
  if ( v24 )
    PopAndFreeAlwaysW32ThreadLock(v32);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
