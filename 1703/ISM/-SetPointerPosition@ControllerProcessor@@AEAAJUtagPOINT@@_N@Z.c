/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18003425C
 * Callers:
 *     _lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_ @ 0x180032170 (_lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_--_lambda_invoker_cdecl_.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180032D1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033154 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180033F14 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(
        ControllerProcessor *this,
        struct tagPOINT a2,
        unsigned __int8 a3)
{
  __int64 result; // rax
  DWORD TickCount; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  ULONGLONG TickCount64; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  LONG y; // [rsp+34h] [rbp-CCh]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[236]; // [rsp+40h] [rbp-C0h] BYREF

  y = a2.y;
  if ( !a3 && *(_QWORD *)((char *)this + 316) == a2 )
    return 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[0]) = 2;
  TickCount = GetTickCount();
  LODWORD(v16[5]) = 1888;
  LODWORD(v16[1]) = TickCount;
  v16[2] = PerformanceCount.QuadPart;
  v8 = **((_DWORD **)this + 4);
  WORD1(v16[88]) = a3;
  HIDWORD(v16[0]) = v8;
  if ( a3 )
  {
    v9 = *((_DWORD *)this + 82);
    HIDWORD(v16[89]) = 0xFFFF * a2.x / (*((_DWORD *)this + 81) - 1);
    v10 = 0xFFFF * y / (v9 - 1);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
      *((_QWORD *)this + 33),
      (char *)this + 316,
      (char *)this + 320);
    HIDWORD(v16[89]) = a2.x - *((_DWORD *)this + 79);
    v10 = y - *((_DWORD *)this + 80);
  }
  LODWORD(v16[90]) = v10;
  TickCount64 = GetTickCount64();
  if ( *((_BYTE *)this + 1496)
    && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 185) )
  {
    ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
    HIDWORD(v16[79]) = *((_DWORD *)this + 372);
    LODWORD(v16[80]) = *((_DWORD *)this + 373);
    *((_BYTE *)this + 1496) = 0;
    LODWORD(v16[79]) = 1;
  }
  v12 = *((_QWORD *)this + 32);
  *(struct tagPOINT *)((char *)this + 316) = a2;
  LODWORD(result) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 48LL))(v12, v16);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v13, &MinInput_Warning_CheckResult, 12, 1553, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
