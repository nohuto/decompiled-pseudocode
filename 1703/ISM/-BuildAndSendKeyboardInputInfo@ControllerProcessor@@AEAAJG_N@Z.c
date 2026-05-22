/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800347E8
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180032440 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180034670 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  _DWORD *v7; // rdx
  int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[236]; // [rsp+40h] [rbp-C0h] BYREF

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset(v12, 0, sizeof(v12));
  v7 = (_DWORD *)*((_QWORD *)this + 4);
  HIDWORD(v12[0]) = *v7;
  v8 = v7[1];
  v12[2] = PerformanceCount.QuadPart;
  WORD2(v12[88]) = 64;
  LODWORD(v12[0]) = v8;
  LODWORD(v12[1]) = TickCount;
  LODWORD(v12[5]) = 1888;
  WORD1(v12[88]) = a2;
  if ( !a3 )
    WORD2(v12[88]) = 65;
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 30) + 48LL))(
                      *((_QWORD *)this + 30),
                      v12);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v10, &MinInput_Warning_CheckResult, 12, 1743, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
