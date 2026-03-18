/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0144830
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C01447A0 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@HH@Z @ 0x1C0144BCC (-vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@H.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  v10 = 0;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 7)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 692LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 694LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (char *)this + 8;
  if ( !a5 )
    v13 = 0LL;
  v14 = (*(__int64 (__fastcall **)(HWND, char *))(*((_QWORD *)this + 3) + 48LL))(a2, v13);
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    if ( a5 && !*((_QWORD *)this + 1) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v16 + 24) = 700LL;
      WdLogEvent5_WdAssertion(v16);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 296LL))(*(_QWORD *)this, 1LL);
    DXGSTABLEVISRGNANDSPRITE::vLock(
      (CWin32kLocks *)((char *)this + 32),
      *(HDC *)this,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)this + 3),
      *((struct DXGADAPTER **)this + 7),
      a3,
      a4);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v17;
    if ( !v17 )
    {
      v19 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v19 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v19);
      CWin32kLocks::Unlock((DXGADAPTER **)this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v10 = -1071775731;
    v20 = WdLogNewEntry5_WdEvent(v15);
    *(_QWORD *)(v20 + 24) = a2;
    WdLogEvent5_WdEvent(v20);
  }
  return v10;
}
