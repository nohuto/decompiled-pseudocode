/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C00B3900
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C011ED08 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r15d
  int v9; // r14d
  char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  v6 = *((_QWORD *)this + 7);
  v7 = 0;
  v8 = a4;
  v9 = a3;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v6 + 144)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 128)) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = 712LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v31 + 24) = 714LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v11 = (char *)this + 8;
  if ( !a5 )
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(HWND, char *))(*((_QWORD *)this + 3) + 48LL))(a2, v11);
  *(_QWORD *)this = v12;
  if ( v12 )
  {
    if ( a5 && !*((_QWORD *)this + 1) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v32 + 24) = 720LL;
      WdLogEvent5_WdAssertion(v32);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 296LL))(*(_QWORD *)this, 1LL);
    v21 = *((_QWORD *)this + 7);
    v22 = *(_QWORD *)this;
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = v9;
    if ( *((_DWORD *)this + 13) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v33 + 24) = 611LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( v22 )
    {
      if ( v21 )
      {
        v23 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = v21;
        (*(void (__fastcall **)(__int64))(v23 + 264))(v22);
        if ( v8 )
        {
          (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)this + 4) + 280LL))(
            *((_QWORD *)this + 5),
            *((_DWORD *)this + 12) == 0);
          *((_DWORD *)this + 13) = 1;
        }
      }
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v24;
    if ( !v24 )
    {
      v34 = WdLogNewEntry5_WdEvent(v26, v25, v27, v28);
      *(_QWORD *)(v34 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v34);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v7 = -1071775731;
    v35 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    *(_QWORD *)(v35 + 24) = a2;
    WdLogEvent5_WdEvent(v35);
  }
  return v7;
}
