/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x14000B26C
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x14000B188 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14000B9FC (KeUpdateThreadSchedulingProperties.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

int __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v6; // ebx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  char v10; // bl
  __int64 v11; // rcx
  _QWORD *v12; // r8
  char v13; // r9
  _QWORD *v14; // rdx
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    CurrentPrcb = 0LL;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KiAcquireThreadStateLock(a1, &v17, &v16);
    *(_QWORD *)(a1 + 104) = a2;
    LOBYTE(v8) = v7;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
    v9 = v17;
    v10 = v7;
    LODWORD(v4) = KeUpdateThreadSchedulingProperties(a1, v8, v17);
    v11 = v16;
    if ( v10 == 1 && v16 && (*(_DWORD *)(a1 + 120) & 0x1000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v4 = a1 + 216;
      v12 = *(_QWORD **)(a1 + 216);
      v13 = *(_BYTE *)(a1 + 195);
      v14 = *(_QWORD **)(a1 + 224);
      if ( v12[1] != a1 + 216 || *v14 != v4 )
        __fastfail(3u);
      v11 = v16;
      *v14 = v12;
      v12[1] = v14;
      if ( v14 == v12 )
      {
        LODWORD(v4) = *(_DWORD *)(v11 + 8) ^ (1 << v13);
        *(_DWORD *)(v11 + 8) = v4;
      }
      v9 = v17;
      *(_BYTE *)(a1 + 388) = 7;
    }
    if ( v9 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
      v11 = v16;
    }
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( CurrentPrcb )
      LODWORD(v4) = KiDeferredReadyThread(CurrentPrcb, a1);
  }
  else
  {
    LODWORD(v4) = KiRemoveThreadFromSchedulingGroup();
  }
  return v4;
}
