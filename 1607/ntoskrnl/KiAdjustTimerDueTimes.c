/*
 * XREFs of KiAdjustTimerDueTimes @ 0x14012AB84
 * Callers:
 *     KiSetSystemTimeDpc @ 0x14012A9A8 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401D23D0 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiRemoveEntryTimer @ 0x140111298 (KiRemoveEntryTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14012AD94 (KiAdjustTimer2DueTimes.c)
 *     KiTraceSetTimer @ 0x1401DAAEC (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int i; // esi
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned __int64 v17; // rdi
  bool inserted; // al
  __int64 v19; // r13
  char v20; // dl
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  int v23; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+48h] [rbp-18h]
  char v28; // [rsp+B8h] [rbp+58h] BYREF

  v25 = &v24;
  v3 = (volatile signed __int32 *)(a2 + 512);
  v24 = &v24;
  for ( i = 0; i < 0x100; ++i )
  {
    v7 = (_QWORD **)(v3 + 2);
    v23 = 0;
    while ( _interlockedbittestandset64(v3, 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(_QWORD *)v3 );
    }
    v8 = *v7;
    while ( v8 != v7 )
    {
      v19 = (__int64)(v8 - 4);
      v20 = *((_BYTE *)v8 - 31);
      v8 = (_QWORD *)*v8;
      if ( (v20 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v20 & 2) == 0) )
      {
        KiRemoveEntryTimer(a2, v19, i);
        v21 = v25;
        v22 = (_QWORD *)(v19 + 32);
        if ( *v25 != &v24 )
          __fastfail(3u);
        *(_QWORD *)(v19 + 40) = v25;
        *v22 = &v24;
        *v21 = v22;
        v25 = (_QWORD **)(v19 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v3 += 8;
  }
  for ( result = v24; v24 != &v24; result = v24 )
  {
    v10 = (__int64)(result - 4);
    v11 = *result;
    v12 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v12 != result )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(_QWORD *)(a3 + 24);
    v14 = *(_QWORD *)(v10 + 24);
    v15 = v14 - v13;
    if ( v13 >= 0 )
    {
      if ( v15 > v14 )
        v15 = 0LL;
    }
    else if ( v15 < v14 )
    {
      v15 = -1LL;
    }
    v16 = (unsigned __int8)(v15 >> 18);
    v17 = KiWaitAlways ^ _byteswap_uint64(v10 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v10 + 48), KiWaitNever));
    *(_DWORD *)v10 |= 0x80u;
    *(_QWORD *)(v10 + 24) = v15;
    v26 = *(_DWORD *)v10;
    BYTE2(v26) = v15 >> 18;
    *(_DWORD *)v10 = v26;
    if ( *(_BYTE *)(a3 + 32) )
      inserted = KiInsertTimerTable(a1, v10, v17, v16, &v28);
    else
      inserted = KiInsertTimerTable(a1, v10, v17, v16, 0LL);
    if ( inserted )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(v10, v17, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
    }
    else
    {
      KiTimerWaitTest(a1, v10, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
