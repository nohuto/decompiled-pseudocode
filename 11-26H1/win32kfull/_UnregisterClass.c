/*
 * XREFs of _UnregisterClass @ 0x1401C4174
 * Callers:
 *     NtUserUnregisterClass @ 0x1401C4010 (NtUserUnregisterClass.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     _InnerGetClassPtr @ 0x140150670 (_InnerGetClassPtr.c)
 */

__int64 __fastcall UnregisterClass(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // r14d
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // r10
  __int16 Atom; // ax
  __int16 v12; // di
  __int64 v13; // r13
  __int64 *ClassPtr; // r8
  __int64 v15; // rax
  int v16; // ecx
  _BYTE v18[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = PtiCurrent(a1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, v7);
    if ( (int)RtlStringCchCopyW((char *)(UserSessionState + 41756), 256LL, (char *)a1) < 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    Atom = UserFindAtom(v10, v9);
  }
  else
  {
    Atom = a1;
  }
  v12 = Atom;
LABEL_7:
  if ( v18[0] )
    --*(_DWORD *)(v19 + 28);
  v13 = *((_QWORD *)v6 + 57);
  ClassPtr = InnerGetClassPtr(v12, (__int64 *)(v13 + 352), a2);
  if ( !ClassPtr )
  {
    ClassPtr = (__int64 *)(v13 + 360);
    if ( v12 )
    {
      while ( *ClassPtr )
      {
        v15 = *(_QWORD *)(*ClassPtr + 8);
        if ( *(_WORD *)v15 == v12 && (*(_BYTE *)(v15 + 6) & 4) == 0 )
          goto LABEL_16;
        ClassPtr = (__int64 *)*ClassPtr;
      }
    }
    ClassPtr = 0LL;
LABEL_16:
    if ( !ClassPtr )
    {
      v16 = 1411;
LABEL_18:
      UserSetLastError(v16);
      return 0LL;
    }
    v5 = 1;
  }
  if ( *(_DWORD *)(*ClassPtr + 72) )
  {
    v16 = 1412;
    goto LABEL_18;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)(*ClassPtr + 8) + 16LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)(*ClassPtr + 8) + 24LL);
  a3[2] = 0LL;
  if ( v5 )
    *(_DWORD *)(*((_QWORD *)v6 + 57) + 12LL) &= ~0x2000u;
  DestroyClass(*((struct tagPROCESSINFO **)v6 + 57), (struct _CALLPROCDATA ***)ClassPtr);
  return 1LL;
}
