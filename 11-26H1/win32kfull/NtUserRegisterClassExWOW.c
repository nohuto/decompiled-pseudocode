/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1402B9700
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _RegisterClassEx @ 0x14014ECE0 (_RegisterClassEx.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RegisterDefaultClass @ 0x1402A2BB4 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1402A2E30 (RegisterIconTitleClass.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        void *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // rcx
  unsigned __int16 v12; // di
  unsigned int i; // edx
  unsigned __int64 ULong64FromUser; // r12
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int16 v17; // cx
  ULONG64 v18; // r8
  ULONG64 v19; // rdx
  ULONG_PTR v20; // rax
  char *v21; // r12
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // r9
  __int16 v24; // r15
  ULONG_PTR v25; // rax
  char *v26; // r12
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  __int16 Atom; // r15
  unsigned int j; // ebx
  int v31; // eax
  int v32; // eax
  size_t Size; // [rsp+20h] [rbp-1B8h]
  size_t Sizea; // [rsp+20h] [rbp-1B8h]
  struct tagTHREADINFO *v36; // [rsp+28h] [rbp-1B0h]
  void *v37[2]; // [rsp+30h] [rbp-1A8h]
  int Src; // [rsp+40h] [rbp-198h]
  const void *Src_8; // [rsp+48h] [rbp-190h]
  __int128 v40; // [rsp+50h] [rbp-188h]
  wchar_t *Str1_8; // [rsp+78h] [rbp-160h]
  __int128 v42; // [rsp+80h] [rbp-158h] BYREF
  __int64 v43; // [rsp+90h] [rbp-148h]
  __int128 v44; // [rsp+A0h] [rbp-138h]
  ULONG_PTR v45[3]; // [rsp+B0h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+C8h] [rbp-110h] BYREF
  __int128 v47; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-E8h]
  __int128 v49; // [rsp+100h] [rbp-D8h]
  __int128 v50; // [rsp+110h] [rbp-C8h]
  __int128 v51; // [rsp+120h] [rbp-B8h]
  __int64 v52; // [rsp+130h] [rbp-A8h]
  __int64 v53; // [rsp+138h] [rbp-A0h]
  __int128 v54; // [rsp+140h] [rbp-98h] BYREF
  __int64 v55; // [rsp+150h] [rbp-88h]
  _OWORD v56[8]; // [rsp+158h] [rbp-80h] BYREF

  memset_0(&v47, 0, 0x60uLL);
  EnterCrit(0LL, 0LL);
  v9 = PtiCurrent(v8);
  v36 = v9;
  v10 = a6;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004);
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( a5 )
    {
      v11 = 666LL;
      if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
        goto LABEL_79;
      for ( i = 0; i < 5; ++i )
      {
        if ( LOWORD(gDefaultServerClasses[12 * i + 1]) == a5 )
        {
          UserSetLastError(87);
          goto LABEL_79;
        }
      }
      v9 = v36;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 57) + 12LL) & 0x10000000) != 0
      || (unsigned int)RegisterIconTitleClass((__int64)v9) )
    {
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v45);
      Src = RtlReadULongFromUser(a2);
      ULong64FromUser = RtlReadULong64FromUser(a2 + 8);
      Src_8 = (const void *)ULong64FromUser;
      Str1_8 = (wchar_t *)ULong64FromUser;
      HIDWORD(v37[0]) = 0;
      LODWORD(v37[0]) = RtlReadULongFromUser(a3);
      v15 = RtlReadULong64FromUser(a3 + 8);
      v37[1] = (void *)v15;
      v44 = *(_OWORD *)v37;
      v42 = 0LL;
      v43 = 0LL;
      RtlCopyFromUser(&v42, a4, 0x18uLL);
      v54 = v42;
      v55 = v43;
      DWORD1(v40) = 0;
      v16 = v43;
      LODWORD(v40) = RtlReadULongFromUser(v43);
      *((_QWORD *)&v40 + 1) = RtlReadULong64FromUser(v16 + 8);
      v42 = v40;
      memset_0(v56, 0, 0x50uLL);
      RtlCopyFromUser(v56, a1, 0x50uLL);
      v47 = v56[0];
      v48 = v56[1];
      v49 = v56[2];
      v50 = v56[3];
      v51 = v56[4];
      if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (ULong64FromUser & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = Src;
        v18 = ULong64FromUser + (unsigned __int16)Src + 2LL;
        if ( v18 <= ULong64FromUser || (v19 = MmUserProbeAddress, v18 >= MmUserProbeAddress) )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)Src > HIWORD(Src) || (Src & 1) != 0 )
        {
          if ( (Src & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10534);
          ExRaiseAccessViolation();
        }
      }
      else
      {
        v17 = Src;
        v19 = MmUserProbeAddress;
      }
      if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        Size = v17;
        if ( (unsigned __int16)(v17 + 2) < v17 )
          ExRaiseStatus(-1073741675);
        v20 = Win32AllocPoolWithQuotaZInit((unsigned __int16)(v17 + 2), 2020897621LL);
        v21 = (char *)v20;
        Str1_8 = (wchar_t *)v20;
        if ( !v20 )
          ExRaiseStatus(-1073741801);
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          BugCheckParameter2,
          v20,
          (__int64)Win32FreePool);
        memmove(v21, Src_8, Size);
        *(_WORD *)&v21[Size & 0xFFFFFFFFFFFFFFFEuLL] = 0;
        v19 = MmUserProbeAddress;
      }
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = (unsigned __int16)v37[0];
        v23 = v15 + LOWORD(v37[0]) + 2LL;
        if ( v23 <= v15 || v23 >= *(_QWORD *)v19 )
          ExRaiseAccessViolation();
        if ( LOWORD(v37[0]) > WORD1(v37[0]) || ((__int64)v37[0] & 1) != 0 )
        {
          if ( ((__int64)v37[0] & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10556);
          ExRaiseAccessViolation();
        }
      }
      else
      {
        v22 = (unsigned __int16)v37[0];
      }
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        Sizea = v22;
        v24 = v22 + 2;
        if ( (unsigned __int16)(v22 + 2) < v22 )
          ExRaiseStatus(-1073741675);
        v25 = Win32AllocPoolWithQuotaZInit((unsigned __int16)(v22 + 2), 2020897621LL);
        v26 = (char *)v25;
        *((_QWORD *)&v44 + 1) = v25;
        if ( !v25 )
          ExRaiseStatus(-1073741801);
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          v45,
          v25,
          (__int64)Win32FreePool);
        memmove(v26, v37[1], Sizea);
        *(_WORD *)&v26[Sizea & 0xFFFFFFFFFFFFFFFEuLL] = 0;
        WORD1(v44) = v24;
        v19 = MmUserProbeAddress;
      }
      if ( (*((_QWORD *)&v40 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (BYTE8(v40) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v27 = *((_QWORD *)&v40 + 1) + (unsigned __int16)v40 + 2LL;
        if ( v27 <= *((_QWORD *)&v40 + 1) || v27 >= *(_QWORD *)v19 )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v40 > WORD1(v40) || (v40 & 1) != 0 )
        {
          if ( (v40 & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10578);
          ExRaiseAccessViolation();
        }
      }
      *(_QWORD *)&v51 = Str1_8;
      v52 = *((_QWORD *)&v44 + 1);
      *((_QWORD *)&v50 + 1) = *((_QWORD *)&v40 + 1);
      if ( (*(_DWORD *)(*((_QWORD *)v36 + 57) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1_8) )
      {
        v28 = v52;
        if ( (v52 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          Atom = UserFindAtom(v52, v19);
        else
          Atom = v52;
        v53 = 0LL;
        if ( Atom )
        {
          for ( j = 0; j < 5; ++j )
          {
            v28 = *(_QWORD *)(W32GetUserSessionState(v28, v19) + 19904);
            v19 = 6LL * j;
            if ( Atom == *(_WORD *)(v28 + 2LL * (((unsigned int)gDefaultServerClasses[12 * j] >> 3) & 0x1F) + 868) )
            {
              v31 = HIWORD(gDefaultServerClasses[12 * j + 1]);
              if ( (_WORD)v31 )
              {
                v10 = v31 | a6;
                if ( ((v31 | a6) & 0x200) != 0 && SDWORD1(v48) < gDefaultServerClasses[12 * j + 6] )
                {
                  UserSetLastError(5);
                  UserSetLastError(0);
                  goto LABEL_63;
                }
                v32 = gDefaultServerClasses[12 * j + 6];
                if ( SDWORD1(v48) >= v32 )
                {
                  LODWORD(v53) = gDefaultServerClasses[12 * j + 6];
                  DWORD1(v48) -= v32;
                }
                break;
              }
            }
          }
        }
        v12 = RegisterClassEx((__int64)&v47, &v54, a5, v10);
      }
LABEL_63:
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v45);
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    }
  }
LABEL_79:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
