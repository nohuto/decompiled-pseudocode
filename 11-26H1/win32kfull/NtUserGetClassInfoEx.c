/*
 * XREFs of NtUserGetClassInfoEx @ 0x1402B2550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _GetClassInfoEx @ 0x14014F1DC (_GetClassInfoEx.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ??$DuplicateUnicodeStringFromUser@$00@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x140254ED8 (--$DuplicateUnicodeStringFromUser@$00@@YAJV-$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_U.c)
 *     RegisterDefaultClass @ 0x1402A2BB4 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1402A2E30 (RegisterIconTitleClass.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, __int64 a2, __int128 *a3, _QWORD *a4, unsigned int a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rdi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  wchar_t *v17; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int ULongFromUser; // eax
  unsigned __int16 ClassInfo; // ax
  __int64 v22; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+58h] [rbp-80h] BYREF
  __int128 v24; // [rsp+70h] [rbp-68h] BYREF
  __int128 v25; // [rsp+80h] [rbp-58h] BYREF
  __int128 v26; // [rsp+90h] [rbp-48h]
  __int128 v27; // [rsp+A0h] [rbp-38h]
  __int128 v28; // [rsp+B0h] [rbp-28h]
  __int128 v29; // [rsp+C0h] [rbp-18h]

  v24 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = PtiCurrent(v8);
  if ( (*(_DWORD *)(*((_QWORD *)v10 + 57) + 12LL) & 0x10000000) != 0 || (unsigned int)RegisterIconTitleClass(v9) )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    v14 = DuplicateUnicodeStringFromUser<1>(a2, v13, (__int64)&v24);
    if ( v14 )
      ExRaiseStatus(v14);
    v17 = (wchar_t *)*((_QWORD *)&v24 + 1);
    if ( (*((_QWORD *)&v24 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        *((ULONG_PTR *)&v24 + 1),
        (__int64)Win32FreePool);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, v15);
    ProbeForWrite(a3, 0x50uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    ULongFromUser = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, ULongFromUser);
    v25 = *a3;
    v26 = a3[1];
    v27 = a3[2];
    v28 = a3[3];
    v29 = a3[4];
    if ( (*(_DWORD *)(*((_QWORD *)v10 + 57) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(v17) )
    {
      ClassInfo = GetClassInfoEx(a1, (unsigned __int64)v17, (__int64)&v25, &v22, a5);
      v11 = ClassInfo;
      if ( ClassInfo )
      {
        *a3 = v25;
        a3[1] = v26;
        a3[2] = v27;
        a3[3] = v28;
        a3[4] = v29;
        *a4 = v22;
      }
    }
    else
    {
      v11 = 0;
      UserSetLastError(87);
    }
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v11 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v11;
}
