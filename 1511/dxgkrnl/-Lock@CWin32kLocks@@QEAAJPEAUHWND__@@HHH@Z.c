/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C00C8DC0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0124880 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax

  v6 = *((_QWORD *)this + 7);
  v7 = 0;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v6 + 144)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 128)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 704LL;
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
      v19 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v19 + 24) = 710LL;
      WdLogEvent5_WdAssertion(v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 296LL))(*(_QWORD *)this, 1LL);
    v21 = *((_QWORD *)this + 7);
    v22 = *(_QWORD *)this;
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = a3;
    if ( *((_DWORD *)this + 13) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v23 + 24) = 601LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( v22 )
    {
      if ( v21 )
      {
        v24 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = v21;
        (*(void (__fastcall **)(__int64))(v24 + 264))(v22);
        if ( a4 )
        {
          (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)this + 4) + 280LL))(
            *((_QWORD *)this + 5),
            *((_DWORD *)this + 12) == 0);
          *((_DWORD *)this + 13) = 1;
        }
      }
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v25;
    if ( !v25 )
    {
      v30 = WdLogNewEntry5_WdEvent(v27, v26, v28, v29);
      *(_QWORD *)(v30 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v30);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v7 = -1071775731;
    v31 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
    *(_QWORD *)(v31 + 24) = a2;
    WdLogEvent5_WdEvent(v31);
  }
  return v7;
}
