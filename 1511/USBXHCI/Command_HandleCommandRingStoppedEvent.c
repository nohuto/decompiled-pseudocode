/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C001B554
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A560 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C001B808 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_xx @ 0x1C001D0C0 (WPP_RECORDER_SF_xx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C003351C (Etw_CommandCompleteError.c)
 */

void __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2)
{
  KSPIN_LOCK *v2; // r12
  __int64 *v5; // rsi
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // r9d
  __int64 **v14; // r8
  int v15; // eax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  signed __int32 v27[10]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD *i; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-8h]

  v2 = (KSPIN_LOCK *)(a1 + 128);
  v5 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v7 = *(_QWORD *)(a1 + 120);
  v8 = v6;
  v9 = *(unsigned int *)(a1 + 72);
  *(_BYTE *)(a1 + 137) = 0;
  v10 = *a2;
  v11 = *(_QWORD *)(v7 + 24) + 16 * v9;
  WPP_RECORDER_SF_xx(*(_QWORD *)(a1 + 16), v7, v12, v13, v27[8], v11, *a2);
  if ( v10 == v11 || v10 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 72) )
  {
    v14 = (__int64 **)(a1 + 88);
    if ( *v14 != (__int64 *)v14 )
    {
      v5 = *v14;
      v15 = *((_DWORD *)*v14 + 16);
      if ( v15 )
      {
        if ( v15 == 5 || v15 == 10 )
          v5 = 0LL;
      }
      else
      {
        v18 = (__int64 *)*v5;
        v19 = (__int64 **)v5[1];
        if ( *(__int64 **)(*v5 + 8) != v5 || *v19 != v5 )
          __fastfail(3u);
        *v19 = v18;
        v18[1] = (__int64)v19;
        v20 = (unsigned int)++*(_DWORD *)(a1 + 72);
        v21 = *(_QWORD *)(a1 + 120);
        v22 = *(_DWORD *)(a1 + 76);
        if ( (_DWORD)v20 == *(_DWORD *)(a1 + 64) )
          v20 = 0LL;
        *(_DWORD *)(a1 + 72) = v20;
        v23 = (*(_QWORD *)(v21 + 24) + 16 * v20) ^ (*(_DWORD *)(v21 + 24) ^ v22) & 1;
        v24 = *(_DWORD **)(a1 + 40);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 232LL) & 1) != 0 )
        {
          *v24 = v23;
          _InterlockedOr(v27, 0);
          v24[1] = HIDWORD(v23);
        }
        else
        {
          *(_QWORD *)v24 = v23;
        }
        _InterlockedOr(v27, 0);
      }
      if ( *v14 != (__int64 *)v14 )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 6u, 0x28u, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
        **(_DWORD **)(a1 + 48) = 0;
        _InterlockedOr(v27, 0);
      }
    }
    v16 = *(_QWORD **)(a1 + 104);
    if ( v16 != (_QWORD *)(a1 + 104) )
    {
      v29 = *(_QWORD **)(a1 + 112);
      i = v16;
      v16[1] = &i;
      *v29 = &i;
      *(_QWORD *)(a1 + 112) = a1 + 104;
      *(_QWORD *)(a1 + 104) = a1 + 104;
      goto LABEL_24;
    }
    v17 = &i;
    v29 = &i;
    for ( i = &i; v17 != &i; v17 = i )
    {
      v25 = (_QWORD *)*v17;
      if ( (_QWORD **)v17[1] != &i || (_QWORD *)v25[1] != v17 )
        __fastfail(3u);
      i = (_QWORD *)*v17;
      v25[1] = &i;
      Command_InternalSendCommand(a1);
LABEL_24:
      ;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 6u, 0x29u, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000,
      (__int64)"After command abort completion, software and hardware dequeue pointers do not match",
      *(_QWORD *)(a1 + 80) + 16LL * *(unsigned int *)(a1 + 72),
      (__int64)a2);
    Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  KeReleaseSpinLock(v2, v8);
  if ( v5 )
  {
    *((_BYTE *)v5 + 68) = 25;
    Etw_CommandCompleteError(v26, a1, v5, 2LL);
    ((void (__fastcall *)(__int64 *, __int64, _QWORD))v5[6])(v5, 2LL, 0LL);
  }
}
