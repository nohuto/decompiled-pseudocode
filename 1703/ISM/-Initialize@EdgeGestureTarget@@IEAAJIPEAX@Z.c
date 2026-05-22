/*
 * XREFs of ?Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z @ 0x180023694
 * Callers:
 *     ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAXPEAPEAV1@@Z @ 0x180023A6C (-Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z @ 0x180023D80 (-UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800361BC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18005EC5C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::Initialize(EdgeGestureTarget *this, unsigned int a2, void *a3)
{
  int updated; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  TouchInfoAdapter *v10; // rax
  bool v11; // r8
  TouchInfoAdapter *v12; // rbx
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rcx

  updated = CoreUICreate((char *)this + 96);
  v8 = updated;
  if ( updated >= 0 )
  {
    v10 = (TouchInfoAdapter *)malloc(0x2D0uLL);
    v12 = v10;
    if ( v10 )
      memset(v10, 0, 0x2D0uLL);
    if ( v12 )
      v12 = TouchInfoAdapter::TouchInfoAdapter(
              v12,
              (struct ITouchInfoAdapterClient *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
              v11);
    if ( v12 )
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
    v7 = *((_QWORD *)this + 10);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 10) = v12;
    if ( v12 )
    {
      v13 = malloc(0x70uLL);
      v14 = v13;
      if ( v13 )
        memset(v13, 0, 0x70uLL);
      if ( v14 )
      {
        v15 = *((_QWORD *)this + 10);
        v14[26] = 0;
        *((_WORD *)v14 + 54) = 0;
        *(_QWORD *)v14 = &RefCountedObject::`vftable';
        *((_QWORD *)v14 + 2) = v15;
        v14[2] = 1;
        *(_QWORD *)v14 = &SessionBasedPointerDeviceArbitration::`vftable';
        memset(v14 + 6, 0, 0x50uLL);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      v7 = *((_QWORD *)this + 9);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *((_QWORD *)this + 9) = v14;
      if ( v14 )
      {
        updated = GestureRecognizerCreate((struct IGestureRecognizer **)this + 11);
        v8 = updated;
        if ( updated >= 0 )
        {
          updated = EdgeGestureTarget::UpdateInputTarget(this, a2, a3);
          v8 = updated;
          if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v9 = 60;
            goto LABEL_30;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v9 = 58;
          goto LABEL_30;
        }
      }
      else
      {
        LOBYTE(updated) = 14;
        v8 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v9 = 55;
          goto LABEL_30;
        }
      }
    }
    else
    {
      LOBYTE(updated) = 14;
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 48;
        goto LABEL_30;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 42;
LABEL_30:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, updated);
  }
  return v8;
}
