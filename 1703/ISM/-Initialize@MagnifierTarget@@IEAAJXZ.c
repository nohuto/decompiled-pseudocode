/*
 * XREFs of ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x180081A7C
 * Callers:
 *     ?Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z @ 0x180081C7C (-Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800361BC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18005EC5C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     ?IsOobeDone@MagnifierTarget@@SAKXZ @ 0x180081F80 (-IsOobeDone@MagnifierTarget@@SAKXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierTarget::Initialize(MagnifierTarget *this)
{
  TouchInfoAdapter *v2; // rax
  TouchInfoAdapter *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v2 = (TouchInfoAdapter *)malloc(0x2D0uLL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x2D0uLL);
  if ( v3 )
    v3 = TouchInfoAdapter::TouchInfoAdapter(
           v3,
           (struct ITouchInfoAdapterClient *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  if ( v3 )
    (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 7) = v3;
  if ( v3 )
  {
    v6 = malloc(0x70uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x70uLL);
    if ( v7 )
    {
      v8 = *((_QWORD *)this + 7);
      v7[26] = 0;
      *((_WORD *)v7 + 54) = 0;
      *(_QWORD *)v7 = &RefCountedObject::`vftable';
      *((_QWORD *)v7 + 2) = v8;
      v7[2] = 1;
      *(_QWORD *)v7 = &SessionBasedPointerDeviceArbitration::`vftable';
      memset(v7 + 6, 0, 0x50uLL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    v9 = *((_QWORD *)this + 6);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 6) = v7;
    if ( v7 )
    {
      v10 = GestureRecognizerCreate((struct IGestureRecognizer **)this + 8);
      v5 = v10;
      if ( v10 >= 0 )
      {
        if ( !MagnifierTarget::IsOobeDone() )
        {
          v12 = RtlSubscribeWnfStateChangeNotification(
                  (char *)this + 88,
                  WNF_OOBE_SHL_MAGNIFIER_CONFIRM,
                  0LL,
                  MagnifierTarget::MagnifierOobeConfirmCallback,
                  this,
                  0LL,
                  0,
                  0);
          if ( v12 < 0 )
          {
            v5 = v12 | 0x10000000;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 78, v12);
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 60, v10);
      }
    }
    else
    {
      v5 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 57, 14);
    }
  }
  else
  {
    v5 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 50, 14);
  }
  return v5;
}
