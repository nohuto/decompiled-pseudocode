/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C009D254
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C009D62C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     CreateInputContext @ 0x1C010AC80 (CreateInputContext.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

_QWORD *__fastcall xxxCreateDefaultImeWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // di
  __int64 ThreadWin32Thread; // rax
  _QWORD *v8; // r14
  char v9; // si
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *Window; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v26[16]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v27[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v28[32]; // [rsp+D0h] [rbp-38h] BYREF

  v5 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v8 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 704)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v8[88] )
    return 0LL;
  if ( v5 == *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  v9 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 86LL) & 1) != 0
    || (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) + 376LL) != v8[47]
    && (*(_DWORD *)(a1 + 52) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (_QWORD *)v8[51];
  if ( !v10[15] )
    return 0LL;
  v11 = DesktopAlloc((__int64)v10, 0x18u, 9);
  if ( !v11 )
    return 0LL;
  *(_OWORD *)v11 = xmmword_1C02E8F20;
  v11[2] = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)v26, (__int64)v11);
  PushW32ThreadLock(v10, v28, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent, v12)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v9 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 882LL),
             *(unsigned __int16 *)(gpsi + 882LL),
             (__int64)v26,
             -2013265920,
             0,
             0,
             0,
             0,
             a1,
             0LL,
             a3,
             0LL,
             0,
             0x400u,
             v9,
             0LL);
  v19 = Window;
  if ( Window )
  {
    v20 = unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v20 )
      v21 = *(_QWORD *)(v20 + 360);
    else
      v21 = 0LL;
    if ( v21 )
    {
      if ( (v21 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (_BYTE *)v21;
      if ( v21 >= W32UserProbeAddress )
        v17 = (_BYTE *)W32UserProbeAddress;
      *v17 = *v17;
      v17[55] = v17[55];
      *(_DWORD *)(v21 + 44) |= 8u;
      v18 = *(unsigned int *)(v21 + 44);
      if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 && *(_QWORD **)(*(_QWORD *)(a1 + 88) + 16LL) != v8 )
      {
        v18 = (unsigned int)v18 | 0x10;
        *(_DWORD *)(v21 + 44) = v18;
      }
    }
    else
    {
      xxxDestroyWindow(v19);
      v19 = 0LL;
    }
  }
  ThreadUnlock1(v18, v17);
  DesktopFree(v10);
  PopAndFreeW32ThreadLock((__int64)v28, v22, v23, v24);
  return v19;
}
