/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1402B0DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401A2C28 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1401B8480 (DestroySMWP.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401FD9A8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x140220848 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x140287538 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x1402AF2A4 (Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v17; // r15d
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagWND *v27; // r12
  char v28; // si
  __int64 *v29; // rax
  __int64 v30; // rcx
  struct tagWND *v32; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v33; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v35; // [rsp+68h] [rbp-8h]
  int v36; // [rsp+B8h] [rbp+48h] BYREF

  v36 = a4;
  v12 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34[0] = 0;
  v14 = EnterCrit(0LL, 0LL);
  v35 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v34, v15);
  IsEnabledDeviceUsageNoInline = Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline();
  v17 = a8;
  if ( IsEnabledDeviceUsageNoInline )
    v18 = (a8 & 0xFFFD9800) == 0;
  else
    v18 = (a8 & 0xFFFC9800) == 0;
  if ( !v18 )
  {
    v19 = 1004;
LABEL_5:
    UserSetLastError(v19);
    goto LABEL_23;
  }
  v20 = HMValidateHandleWithDescriptor(a1, 4u);
  v22 = v20;
  if ( !v20 )
    goto LABEL_23;
  if ( (*(_DWORD *)(v20 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v20, v21);
    v19 = 1405;
    goto LABEL_5;
  }
  LOBYTE(v23) = ValidateHWNDND(a2, &v32);
  if ( v23 && (unsigned int)ValidateHWNDIA(a3, &v33) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v25);
    v27 = v32;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v32, CurrentThreadDpiAwarenessContext) )
      TransformSWPCoords(v27, &v36, &a5, &a6, &a7, v17);
    v28 = a10 != 0;
    if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)IsImmersiveBroker(*(_QWORD *)(v14 + 456)) )
    {
      v28 |= 2u;
    }
    v29 = (__int64 *)_DeferWindowPosAndBand(v22, (__int64)v27, v33, v36, a5, a6, a7, v17, a9, v28);
    if ( v29 )
      v12 = *v29;
  }
  else if ( a10 )
  {
    DestroySMWP(v22, v24);
  }
LABEL_23:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v34);
  UserSessionSwitchLeaveCrit(v30);
  return v12;
}
