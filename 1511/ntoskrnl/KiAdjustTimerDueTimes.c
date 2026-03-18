/*
 * XREFs of KiAdjustTimerDueTimes @ 0x140120638
 * Callers:
 *     KiSetSystemTimeDpc @ 0x14012045C (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401C2E20 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiRemoveEntryTimer @ 0x1400EF780 (KiRemoveEntryTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x140120830 (KiAdjustTimer2DueTimes.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int i; // esi
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // r13
  _QWORD **v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  char *v19; // [rsp+20h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-18h]
  __int64 v24; // [rsp+A8h] [rbp+48h]
  char v25; // [rsp+B8h] [rbp+58h] BYREF

  v24 = a2;
  v22 = &v21;
  v3 = (volatile signed __int32 *)(a2 + 512);
  v21 = &v21;
  for ( i = 0; i < 0x100; ++i )
  {
    v7 = (_QWORD **)(v3 + 2);
    v20 = 0;
    while ( _interlockedbittestandset64(v3, 0LL) )
    {
      do
        KeYieldProcessorEx(&v20, a2, a3);
      while ( *(_QWORD *)v3 );
    }
    v8 = *v7;
    while ( v8 != v7 )
    {
      v10 = (__int64)(v8 - 4);
      LOBYTE(a2) = *((_BYTE *)v8 - 31);
      v8 = (_QWORD *)*v8;
      if ( (a2 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (a2 & 2) == 0) )
      {
        KiRemoveEntryTimer(v24, v10, i);
        v11 = v22;
        *(_QWORD *)(v10 + 40) = v22;
        *(_QWORD *)(v10 + 32) = &v21;
        a2 = (__int64)&v21;
        if ( *v11 != &v21 )
          __fastfail(3u);
        *v11 = (_QWORD *)(v10 + 32);
        v22 = (_QWORD **)(v10 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v3 += 8;
  }
  for ( result = v21; v21 != &v21; result = v21 )
  {
    v12 = (__int64)(result - 4);
    v13 = *result;
    v14 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v14 != result )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = *(_QWORD *)(a3 + 24);
    v16 = *(_QWORD *)(v12 + 24);
    v17 = v16 - v15;
    if ( v15 >= 0 )
    {
      if ( v17 > v16 )
        v17 = 0LL;
    }
    else if ( v17 < v16 )
    {
      v17 = -1LL;
    }
    v18 = KiWaitAlways ^ _byteswap_uint64(v12 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v12 + 48), KiWaitNever));
    *(_DWORD *)v12 |= 0x80u;
    *(_QWORD *)(v12 + 24) = v17;
    v23 = *(_DWORD *)v12;
    BYTE2(v23) = v17 >> 18;
    *(_DWORD *)v12 = v23;
    if ( *(_BYTE *)(a3 + 32) )
      v19 = &v25;
    else
      v19 = 0LL;
    if ( KiInsertTimerTable(a1, v12, v18, (unsigned __int8)(v17 >> 18), v19) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(v12, v18, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
    }
    else
    {
      KiTimerWaitTest(a1, v12, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
