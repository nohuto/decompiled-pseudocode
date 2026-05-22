/*
 * XREFs of ?InitializeConverged@EdgeGestureTarget@@IEAAJI@Z @ 0x18002388C
 * Callers:
 *     ?CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z @ 0x180023BB0 (-CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800361BC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18005EC5C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::InitializeConverged(EdgeGestureTarget *this, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  TouchInfoAdapter *v8; // rax
  bool v9; // r8
  TouchInfoAdapter *v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  __int64 v13; // rcx

  v4 = CoreUICreate((char *)this + 96);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = (TouchInfoAdapter *)malloc(0x2D0uLL);
    v10 = v8;
    if ( v8 )
      memset(v8, 0, 0x2D0uLL);
    if ( v10 )
      v10 = TouchInfoAdapter::TouchInfoAdapter(
              v10,
              (struct ITouchInfoAdapterClient *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
              v9);
    if ( v10 )
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 10) = v10;
    if ( !v10 )
    {
      LOBYTE(v4) = 14;
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v7 = 79;
      goto LABEL_4;
    }
    v11 = malloc(0x70uLL);
    v12 = v11;
    if ( v11 )
      memset(v11, 0, 0x70uLL);
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 10);
      v12[26] = 0;
      *((_WORD *)v12 + 54) = 0;
      *(_QWORD *)v12 = &RefCountedObject::`vftable';
      *((_QWORD *)v12 + 2) = v13;
      v12[2] = 1;
      *(_QWORD *)v12 = &SessionBasedPointerDeviceArbitration::`vftable';
      memset(v12 + 6, 0, 0x50uLL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 9) = v12;
    if ( !v12 )
    {
      LOBYTE(v4) = 14;
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v7 = 86;
      goto LABEL_4;
    }
    v4 = GestureRecognizerCreate((struct IGestureRecognizer **)this + 11);
    v6 = v4;
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 26) = a2;
      return v6;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 89;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 73;
LABEL_4:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
  }
  return v6;
}
