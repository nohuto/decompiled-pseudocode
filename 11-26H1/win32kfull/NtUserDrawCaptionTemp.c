/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1402B1520
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        Gre::Base *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // r12
  unsigned int v12; // edi
  __int64 v13; // rcx
  struct tagWND *v14; // r14
  struct tagCURSOR *v15; // rsi
  unsigned __int64 ULong64FromUser; // rax
  const void *v17; // rbx
  ULONG64 v18; // rcx
  void *v19; // rax
  void *v21[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  __int128 v23; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR v26[2]; // [rsp+A0h] [rbp-68h] BYREF
  RECT v27; // [rsp+B0h] [rbp-58h] BYREF

  v22 = a4;
  v27 = 0LL;
  *(_OWORD *)v21 = 0LL;
  EnterCrit(0LL, 0LL);
  v11 = PtiCurrent(v10);
  v12 = 0;
  if ( a1 )
  {
    v14 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v14 )
      goto LABEL_24;
  }
  else
  {
    v14 = 0LL;
  }
  if ( a5 )
  {
    v15 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a5, 3u);
    if ( !v15 )
      goto LABEL_24;
  }
  else
  {
    v15 = 0LL;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v27 = (RECT)*UmpDetail::ReadFromUser<tagRECT>(&v23, a3);
  v23 = 0LL;
  LODWORD(v23) = RtlReadULongFromUser(a6);
  ULong64FromUser = RtlReadULong64FromUser(a6 + 8);
  v17 = (const void *)ULong64FromUser;
  *((_QWORD *)&v23 + 1) = ULong64FromUser;
  *(_OWORD *)v21 = v23;
  if ( ULong64FromUser )
  {
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = ULong64FromUser + (unsigned __int16)v23 + 2LL;
    if ( v18 <= ULong64FromUser || v18 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v23 > WORD1(v23) )
    {
      if ( (v23 & 1) == 0 )
        goto LABEL_22;
    }
    else if ( (v23 & 1) == 0 )
    {
      v19 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v23 + 2LL, 2020897621LL);
      v21[1] = v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        (ULONG_PTR)v19,
        (__int64)Win32FreePool);
      memmove(v21[1], v17, LOWORD(v21[0]));
      *((_WORD *)v21[1] + ((unsigned __int64)LOWORD(v21[0]) >> 1)) = 0;
      WORD1(v21[0]) = LOWORD(v21[0]) + 2;
      goto LABEL_18;
    }
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11018);
LABEL_22:
    ExRaiseAccessViolation();
  }
LABEL_18:
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v26, (__int64)v11, (__int64)v14);
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, (__int64)v11, (__int64)v15);
  v12 = xxxDrawCaptionTemp(v14, a2, &v27, v22, v15, (unsigned __int64)v21 & -(__int64)(v21[1] != 0LL), a7);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v26);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
LABEL_24:
  UserSessionSwitchLeaveCrit(v13);
  return v12;
}
