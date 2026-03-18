/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C0052518
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0052908 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     RtlInitLargeUnicodeString @ 0x1C0052BC8 (RtlInitLargeUnicodeString.c)
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C00E4BA0 (CreateInputContext.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // r14
  int v8; // esi
  PVOID *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  void *v12; // r15
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 Window; // rax
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  _BYTE v22[16]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v23[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v24[32]; // [rsp+D0h] [rbp-38h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 712)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[89] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 86LL) & 1) != 0
    || (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) + 384LL) != v7[48]
    && (*(_DWORD *)(a1 + 52) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v9 = (PVOID *)v7[52];
  if ( !v9[15] )
    return 0LL;
  v10 = DesktopAlloc(v9, 24LL, 9LL);
  v12 = (void *)v10;
  if ( !v10 )
    return 0LL;
  *(_OWORD *)v10 = xmmword_1C02E2040;
  *(_QWORD *)(v10 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(v22, v10, v11);
  PushW32ThreadLock(v9, v24, UserDereferenceObject);
  if ( v9 )
    ObfReferenceObject(v9);
  v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v23;
  v23[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 882LL),
             *(unsigned __int16 *)(gpsi + 882LL),
             (unsigned int)v22,
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
             1024,
             v8,
             0LL);
  v18 = Window;
  if ( Window )
  {
    v19 = unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v19 )
      v20 = *(_QWORD *)(v19 + 376);
    else
      v20 = 0LL;
    if ( v20 )
    {
      if ( (v20 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (_BYTE *)v20;
      if ( v20 >= W32UserProbeAddress )
        v16 = (_BYTE *)W32UserProbeAddress;
      *v16 = *v16;
      v16[55] = v16[55];
      *(_DWORD *)(v20 + 44) |= 8u;
      v17 = *(unsigned int *)(v20 + 44);
      if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 && *(_QWORD **)(*(_QWORD *)(a1 + 88) + 16LL) != v7 )
      {
        v17 = (unsigned int)v17 | 0x10;
        *(_DWORD *)(v20 + 44) = v17;
      }
    }
    else
    {
      xxxDestroyWindow(v18);
      v18 = 0LL;
    }
  }
  ThreadUnlock1(v17, v16);
  RtlFreeHeap(v9[15], 0, v12);
  PopAndFreeW32ThreadLock(v24);
  return v18;
}
