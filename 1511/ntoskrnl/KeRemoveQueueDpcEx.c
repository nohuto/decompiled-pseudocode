/*
 * XREFs of KeRemoveQueueDpcEx @ 0x1400D948C
 * Callers:
 *     ExpCancelTimer @ 0x140091194 (ExpCancelTimer.c)
 *     KeRemoveQueueDpc @ 0x1400D9484 (KeRemoveQueueDpc.c)
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     VfWdCheckForSettingsChange @ 0x1406C8350 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KiGetDeepIdleProcessors @ 0x1400940B4 (KiGetDeepIdleProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
  int v23; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int16 *v24[2]; // [rsp+28h] [rbp-200h] BYREF
  __int16 v25; // [rsp+38h] [rbp-1F0h]
  unsigned int v26; // [rsp+40h] [rbp-1E8h]
  unsigned __int16 v27; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v28[21]; // [rsp+88h] [rbp-1A0h]
  unsigned __int16 v29[88]; // [rsp+130h] [rbp-F8h] BYREF
  int v30; // [rsp+220h] [rbp-8h]

  v3 = 0;
  _disable();
  v5 = *((_QWORD *)a1 + 7);
  v6 = (v30 & 0x200) != 0;
  if ( v5 )
  {
    v8 = *a1;
    v26 = v8;
    v9 = HIWORD(v8);
    if ( HIWORD(v8) >= 0x280u )
      LOWORD(v9) = HIWORD(v8) - 640;
    if ( (_BYTE)v26 == 26 && (v10 = KiProcessorBlock[(unsigned __int16)v9], *(_BYTE *)(v10 + 11752)) )
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
    KiGetDeepIdleProcessors(v29, (__int64)&v27);
    v15 = 0;
    if ( v27 )
    {
      v16 = *((_QWORD *)a1 + 2);
      do
      {
        v17 = v15++;
        v28[v17] &= v16;
      }
      while ( v15 < v27 );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( v27 > (unsigned __int16)Group )
      v28[Group] &= ~CurrentPrcb->GroupSetMember;
    v24[1] = (unsigned __int16 *)v28[0];
    v24[0] = &v27;
    v25 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v23, v24) )
    {
      v20 = KiProcessorBlock[v23];
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
          if ( (v30 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(int **)(v21 + 32) != a1 && v27 > *(unsigned __int8 *)(v20 + 1616) )
        v28[*(unsigned __int8 *)(v20 + 1616)] &= ~*(_QWORD *)(v20 + 1608);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v27) )
      KeGenericProcessorCallback(&v27, PopPoCoalescinCallback, 0LL, 2LL);
  }
  return v3;
}
