/*
 * XREFs of ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18005B160
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005AFE0 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800361BC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x180058C14 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18005EC5C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PTPProcessor::Initialize(PTPProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  TouchInfoAdapter *v8; // rax
  bool v9; // r8
  TouchInfoAdapter *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  int v15; // [rsp+60h] [rbp+18h] BYREF
  __int16 v16; // [rsp+64h] [rbp+1Ch]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = CoreUICreate(&v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v7 = 118;
    goto LABEL_30;
  }
  *((_QWORD *)this + 321) = a2;
  v8 = (TouchInfoAdapter *)malloc(0x2D0uLL);
  v10 = v8;
  if ( v8 )
    memset(v8, 0, 0x2D0uLL);
  if ( v10 )
    v10 = TouchInfoAdapter::TouchInfoAdapter(v10, this, v9);
  if ( v10 )
    (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *((_QWORD *)this + 81);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 81) = v10;
  if ( v10 )
  {
    v12 = (_QWORD *)((char *)this + 656);
    v4 = GestureRecognizerCreate((struct IGestureRecognizer **)this + 82);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_31;
      v7 = 129;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), PTPProcessor *, char *))(*(_QWORD *)v17 + 120LL))(
           v17,
           PTPProcessor::ProcessDelayedTapStatic,
           this,
           (char *)this + 664);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_31;
      v7 = 134;
      goto LABEL_30;
    }
    v15 = 19;
    v16 = 500;
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v12 + 112LL))(*v12, &v15);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_31;
      v7 = 144;
      goto LABEL_30;
    }
    v15 = 20;
    v16 = 300;
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v12 + 112LL))(*v12, &v15);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_31;
      v7 = 154;
      goto LABEL_30;
    }
    v4 = MouseProcessor::Initialize((PTPProcessor *)((char *)this + 8), L"PTPSensitivity", 6);
    v6 = v4;
    if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 156;
LABEL_30:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 11, v7, v4);
    }
  }
  else
  {
    v6 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v11, &MinInput_Warning_CheckResult, 11, 126, 14);
  }
LABEL_31:
  v13 = v17;
  v17 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}
