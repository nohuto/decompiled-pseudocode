/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x1402A1860
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1402A1A14 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1400537A0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall xxxSendMessageToUI(ULONG_PTR BugCheckParameter3, struct tagIMEUI *volatile a2)
{
  int v3; // edi
  __int64 v4; // rcx
  struct tagIMEUI *volatile v5; // rcx
  struct tagWND *v6; // r14
  ULONG_PTR BugCheckParameter3a[2]; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+28h]

  v12 = 0LL;
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v3 = 0;
  if ( (struct tagTHREADINFO *)BugCheckParameter3 != PtiCurrent(v4) )
  {
    v3 = 1;
    Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, BugCheckParameter3);
    KeAttachProcess(**(PRKPROCESS **)(BugCheckParameter3 + 456));
  }
  v5 = (struct tagIMEUI *volatile)MmUserProbeAddress;
  if ( (unsigned __int64)a2 < MmUserProbeAddress )
    v5 = a2;
  v6 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v5 + 4), 1);
  if ( v6 )
  {
    RtlReadULongFromUser((char *)a2 + 40);
    _InterlockedIncrement((volatile signed __int32 *)a2 + 10);
    if ( v3 )
      KeDetachProcess();
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3a, (__int64)v6);
    v12 = xxxSendMessage(v6, 0x282u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3a);
    if ( v3 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 520), 0, 0) & 1) != 0 )
        goto LABEL_14;
      KeAttachProcess(**(PRKPROCESS **)(BugCheckParameter3 + 456));
    }
    _InterlockedDecrement((volatile signed __int32 *)a2 + 10);
  }
  if ( v3 )
    KeDetachProcess();
LABEL_14:
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread((void (**)(void))BugCheckParameter2);
  return v12;
}
