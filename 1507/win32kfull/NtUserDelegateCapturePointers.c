/*
 * XREFs of NtUserDelegateCapturePointers @ 0x1C0218AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01E10A4 (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01E118C (_DelegateCapturePointers.c)
 */

__int64 __fastcall NtUserDelegateCapturePointers(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // ecx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v7 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1080LL) & 0x2000) == 0 )
  {
    v8 = 5;
LABEL_28:
    UserSetLastError(v8);
    goto LABEL_29;
  }
  if ( !(_DWORD)v5 || !a2 || !a3 || a2 == a3 )
    goto LABEL_27;
  v9 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v6) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = v9 + a2;
    if ( v9 + a2 > W32UserProbeAddress || v10 < a2 )
      *W32UserProbeAddress = 0;
    if ( v9 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v10) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v9 + a3 > W32UserProbeAddress || v9 + a3 < a3 )
        *W32UserProbeAddress = 0;
    }
  }
  v11 = 24 * v5;
  if ( (unsigned __int64)(24 * v5) > 0xFFFFFFFF )
  {
LABEL_27:
    v8 = 87;
    goto LABEL_28;
  }
  if ( v11 >= 0x2710000 || (v12 = Win32AllocPoolZInit(v11, 1885631317LL), (v13 = v12) == 0) )
  {
    v8 = 8;
    goto LABEL_28;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, a2, a3, v12) )
    v7 = DelegateCapturePointers(v5, v13);
  else
    UserSetLastError(87);
  Win32FreePool(v13);
LABEL_29:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v15, v14);
  return v7;
}
