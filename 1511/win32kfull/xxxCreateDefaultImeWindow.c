/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C008F8CC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C008FCC0 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     RtlInitLargeUnicodeString @ 0x1C00900B8 (RtlInitLargeUnicodeString.c)
 *     CreateInputContext @ 0x1C00EB0D0 (CreateInputContext.c)
 */

_QWORD *__fastcall xxxCreateDefaultImeWindow(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // r14
  char v8; // si
  PVOID *v9; // rdi
  _OWORD *v10; // rax
  void *v11; // r15
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int128 v21; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v22[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v23[4]; // [rsp+D0h] [rbp-38h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 704)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[88] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 86LL) & 1) != 0
    || (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) + 376LL) != v7[47]
    && (*(_DWORD *)(a1 + 52) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v9 = (PVOID *)v7[51];
  if ( !v9[15] )
    return 0LL;
  v10 = DesktopAlloc((__int64)v9, 0x18u);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  *v10 = xmmword_1C02E1C00;
  *((_QWORD *)v10 + 2) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(&v21, v10);
  PushW32ThreadLock((__int64)v9, v23, UserDereferenceObject);
  if ( v9 )
    ObfReferenceObject(v9);
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  v22[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  v14 = xxxCreateWindowEx(
          0,
          *(unsigned __int16 *)(gpsi + 882LL),
          *(unsigned __int16 *)(gpsi + 882LL),
          &v21,
          0x88000000,
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
          v8,
          0LL);
  v17 = (_QWORD *)v14;
  if ( v14 )
  {
    v18 = unsafe_cast_fnid_or_class_to_PIMEWND(v14);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 376);
    else
      v19 = 0LL;
    if ( v19 )
    {
      if ( (v19 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (_BYTE *)v19;
      if ( v19 >= W32UserProbeAddress )
        v15 = (_BYTE *)W32UserProbeAddress;
      *v15 = *v15;
      v15[55] = v15[55];
      *(_DWORD *)(v19 + 44) |= 8u;
      v16 = *(unsigned int *)(v19 + 44);
      if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 && *(_QWORD **)(*(_QWORD *)(a1 + 88) + 16LL) != v7 )
      {
        v16 = (unsigned int)v16 | 0x10;
        *(_DWORD *)(v19 + 44) = v16;
      }
    }
    else
    {
      xxxDestroyWindow(v17);
      v17 = 0LL;
    }
  }
  ThreadUnlock1(v16, v15);
  RtlFreeHeap(v9[15], 0, v11);
  PopAndFreeW32ThreadLock((__int64)v23);
  return v17;
}
