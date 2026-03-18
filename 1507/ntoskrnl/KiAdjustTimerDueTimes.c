/*
 * XREFs of KiAdjustTimerDueTimes @ 0x140154CC0
 * Callers:
 *     KiSetSystemTimeDpc @ 0x1401549C4 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401FEB94 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int i; // esi
  _QWORD **v8; // r14
  unsigned int v9; // edi
  _QWORD *v10; // r8
  _QWORD *result; // rax
  _QWORD *v12; // r9
  char v13; // dl
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r9d
  volatile signed __int32 *v19; // rdx
  _QWORD **v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  char *v28; // [rsp+20h] [rbp-40h]
  _QWORD *v29; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v30; // [rsp+38h] [rbp-28h]
  int v31; // [rsp+40h] [rbp-20h]
  char v32; // [rsp+A8h] [rbp+48h] BYREF

  v30 = &v29;
  v3 = a2 + 512;
  v29 = &v29;
  for ( i = 0; i < 0x100; ++i )
  {
    v8 = (_QWORD **)(v3 + 8);
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( *(_QWORD *)v3 );
    }
    v10 = *v8;
    while ( v10 != v8 )
    {
      v12 = v10 - 4;
      v13 = *((_BYTE *)v10 - 31);
      v10 = (_QWORD *)*v10;
      if ( (v13 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v13 & 2) == 0) )
      {
        v14 = v12 + 4;
        v15 = (_QWORD *)v12[4];
        v16 = (_QWORD *)v12[5];
        if ( (_QWORD *)v15[1] != v12 + 4 || (_QWORD *)*v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = v16;
        if ( v16 == v15 )
        {
          *(_DWORD *)(v3 + 28) = -1;
          v17 = qword_1403D2238[2 * *(unsigned __int8 *)(a2 - 12208)];
          if ( KiSerializeTimerExpiration )
          {
            v18 = i & 0x3F;
            v19 = (volatile signed __int32 *)(v17 + 8 * ((unsigned __int64)i >> 6));
          }
          else
          {
            v18 = *(unsigned __int8 *)(a2 - 12207);
            v19 = (volatile signed __int32 *)(((unsigned __int64)i << 6) + v17);
          }
          _interlockedbittestandreset64(v19, v18);
        }
        v20 = v30;
        *v14 = &v29;
        v14[1] = v20;
        if ( *v20 != &v29 )
          __fastfail(3u);
        *v20 = v14;
        v30 = (_QWORD **)v14;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v3 += 32LL;
  }
  for ( result = v29; v29 != &v29; result = v29 )
  {
    v21 = (__int64)(result - 4);
    v22 = *result;
    v23 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v23 != result )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    v24 = *(_QWORD *)(a3 + 24);
    v25 = *(_QWORD *)(v21 + 24);
    v26 = v25 - v24;
    if ( v24 >= 0 )
    {
      if ( v26 > v25 )
        v26 = 0LL;
    }
    else if ( v26 < v25 )
    {
      v26 = -1LL;
    }
    v27 = KiWaitAlways ^ _byteswap_uint64(v21 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v21 + 48), KiWaitNever));
    *(_DWORD *)v21 |= 0x80u;
    *(_QWORD *)(v21 + 24) = v26;
    v31 = *(_DWORD *)v21;
    BYTE2(v31) = v26 >> 18;
    *(_DWORD *)v21 = v31;
    if ( *(_BYTE *)(a3 + 32) )
      v28 = &v32;
    else
      v28 = 0LL;
    if ( KiInsertTimerTable(a1, v21, v27, (unsigned __int8)(v26 >> 18), v28) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(v21, v27, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
    }
    else
    {
      KiTimerWaitTest(a1, v21, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
