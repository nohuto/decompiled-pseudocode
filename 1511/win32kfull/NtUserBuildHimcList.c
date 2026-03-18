/*
 * XREFs of NtUserBuildHimcList @ 0x1C0100B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     _BuildHimcList @ 0x1C0100C54 (_BuildHimcList.c)
 */

__int64 __fastcall NtUserBuildHimcList(int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE v17[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  if ( (*gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v8 = 0LL;
      }
      else
      {
        v15 = PtiFromThreadId(a1);
        v8 = v15;
        if ( !v15 || (v16 = *(_QWORD *)(v15 + 408)) == 0 )
        {
          v11 = -1073741811;
          goto LABEL_7;
        }
        if ( v16 != *(_QWORD *)(gptiCurrent + 408LL) )
        {
          v11 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v8 = gptiCurrent;
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v9 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v9 = (unsigned int *)W32UserProbeAddress;
    *v9 = *v9;
    v10 = BuildHimcList(v8, (unsigned int)v6, a3);
    v11 = (unsigned int)v6 < v10 ? 0xC0000023 : 0;
    *a4 = v10;
  }
  else
  {
    UserSetLastError(120);
    v11 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v13, v12);
  return v11;
}
