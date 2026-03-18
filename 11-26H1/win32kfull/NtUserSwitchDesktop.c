/*
 * XREFs of NtUserSwitchDesktop @ 0x14025C610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     xxxSwitchDesktopWithFade @ 0x1401B2760 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, unsigned int a2, unsigned int a3)
{
  BOOL v5; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  Object = 0LL;
  v7 = EnterCrit(0LL, 0LL);
  PtiCurrent(v8);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v7 + 456), 0x40u);
  }
  else
  {
    v13 = PtiCurrent(v9);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v13 + 130, 0, 0) & 0x20000000) == 0 )
      goto LABEL_7;
    v10 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v13) + 57) + 752LL) + 32LL) & 0x40) == 0;
  }
  if ( !v10 )
  {
LABEL_4:
    UserSetLastError(5);
    goto LABEL_15;
  }
LABEL_7:
  LOBYTE(v11) = 1;
  if ( (int)ValidateHdesk(a1, v11, 256LL, &Object) < 0 )
    goto LABEL_15;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 32LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_4;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v18, Object);
  ObfDereferenceObject(Object);
  v15 = *((_QWORD *)Object + 5);
  if ( a2 )
    v16 = xxxSwitchDesktopWithFade(v15, (__int64)Object, v14, a2, a3);
  else
    v16 = xxxSwitchDesktop(v15, (__int64)Object, 0, a3);
  v5 = v16 >= 0;
  if ( v18[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v18);
LABEL_15:
  UserSessionSwitchLeaveCrit(v12);
  return v5;
}
