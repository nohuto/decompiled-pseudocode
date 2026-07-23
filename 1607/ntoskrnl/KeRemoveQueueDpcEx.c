/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140087618
 * Callers:
 *     EtwpFreeCompression @ 0x1400875AC (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140087610 (KeRemoveQueueDpc.c)
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     VfWdCheckForSettingsChange @ 0x140716CF8 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KiGetDeepIdleProcessors @ 0x1400823D8 (KiGetDeepIdleProcessors.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KeRemoveQueueDpcEx(int *a1, char a2)
{
  char v3; // r12
  __int64 v5; // r13
  bool v6; // r14
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rdx
  __int64 v20; // rbx
  __int64 v21; // rsi
  signed __int32 v22[8]; // [rsp+0h] [rbp-228h] BYREF
  __int64 v23; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int16 *v24; // [rsp+28h] [rbp-200h] BYREF
  __int64 v25; // [rsp+30h] [rbp-1F8h]
  __int16 v26; // [rsp+38h] [rbp-1F0h]
  unsigned int v27; // [rsp+40h] [rbp-1E8h]
  unsigned __int16 v28; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v29[21]; // [rsp+88h] [rbp-1A0h]
  _DWORD v30[44]; // [rsp+130h] [rbp-F8h] BYREF
  int v31; // [rsp+220h] [rbp-8h]

  v3 = 0;
  _disable();
  v5 = *((_QWORD *)a1 + 7);
  v6 = (v31 & 0x200) != 0;
  if ( v5 )
  {
    v8 = *a1;
    v27 = v8;
    v9 = HIWORD(v8);
    if ( HIWORD(v8) >= 0x280u )
      LOWORD(v9) = HIWORD(v8) - 640;
    if ( (_BYTE)v27 == 26 && (v10 = KiProcessorBlock[(unsigned __int16)v9], *(_BYTE *)(v10 + 11752)) )
      v11 = v10 + 11688;
    else
      v11 = KiProcessorBlock[(unsigned __int16)v9] + 11648;
    KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 16));
    if ( v5 == *((_QWORD *)a1 + 7) && v8 == *a1 )
    {
      --*(_DWORD *)(v11 + 24);
      v12 = (__int64 *)(a1 + 2);
      v13 = (__int64 *)v11;
      if ( *(int **)v11 != a1 + 2 )
      {
        do
          v13 = (__int64 *)*v13;
        while ( (__int64 *)*v13 != v12 );
      }
      v14 = *v12;
      *v13 = v14;
      if ( !v14 )
        *(_QWORD *)(v11 + 8) = v13;
      *((_QWORD *)a1 + 7) = 0LL;
      v3 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 16));
  }
  if ( v6 )
    _enable();
  if ( a2 && *((_QWORD *)a1 + 2) )
  {
    KiGetDeepIdleProcessors(v30, (__int16 *)&v28);
    v15 = 0;
    if ( v28 )
    {
      v16 = *((_QWORD *)a1 + 2);
      do
      {
        v17 = v15++;
        v29[v17] &= v16;
      }
      while ( v15 < v28 );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( v28 > (unsigned __int16)Group )
      v29[Group] &= ~CurrentPrcb->GroupSetMember;
    v25 = v29[0];
    v24 = &v28;
    v26 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v23, &v24) )
    {
      v20 = KiProcessorBlock[(unsigned int)v23];
      if ( *(_BYTE *)a1 != 26 || (v21 = v20 + 11688, !*(_BYTE *)(v20 + 11752)) )
        v21 = v20 + 11648;
      if ( !v5 )
      {
        _InterlockedOr(v22, 0);
        if ( *(_QWORD *)(v21 + 16) )
        {
          _disable();
          KxAcquireSpinLock((PKSPIN_LOCK)(v21 + 16));
          KxReleaseSpinLock((PKSPIN_LOCK)(v21 + 16));
          if ( (v31 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(int **)(v21 + 32) != a1 && v28 > *(unsigned __int8 *)(v20 + 1616) )
        v29[*(unsigned __int8 *)(v20 + 1616)] &= ~*(_QWORD *)(v20 + 1608);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v28) )
      KeGenericProcessorCallback(&v28, xHalFreeMessageTarget, 0LL, 2LL, v23, v24, v25);
  }
  return v3;
}
