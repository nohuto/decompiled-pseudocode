/*
 * XREFs of ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18006120C
 * Callers:
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800607AC (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180060BF4 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180060E80 (-OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall WGIRawInputProvider::SetInputFocusProcess(WGIRawInputProvider *this, int a2)
{
  signed int v2; // edi
  void *v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int InBuffer; // [rsp+58h] [rbp+10h] BYREF

  InBuffer = a2;
  v2 = 0;
  v7 = a2;
  RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v7, 4LL, 0LL);
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 != (void *)-1LL && !DeviceIoControl(v4, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    v2 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 276, v2);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return (unsigned int)v2;
}
