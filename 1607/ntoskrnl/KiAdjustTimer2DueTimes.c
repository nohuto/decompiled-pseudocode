/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x14012AD94
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x14012AB84 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x14009D67C (KiSendClockInterruptToClockOwner.c)
 *     KiShouldActivateHRTimerClock @ 0x1400A3928 (KiShouldActivateHRTimerClock.c)
 *     KiRequestTimer2Expiration @ 0x1400C77F4 (KiRequestTimer2Expiration.c)
 *     KiInsertTimer2 @ 0x1400EC8F8 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x1400F76D0 (KiRemoveTimer2.c)
 */

char __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  int v1; // r14d
  _QWORD *v2; // rsi
  _QWORD **v4; // r15
  _QWORD *v5; // rdi
  char v6; // bl
  __int64 v7; // rcx
  char result; // al
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  char v23; // [rsp+68h] [rbp+38h] BYREF

  v1 = 0;
  v2 = v22;
  v22[1] = v22;
  v22[0] = v22;
  v4 = (_QWORD **)&unk_14030E328;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)v5[1];
        v10 = v5;
        v11 = (__int64)&v5[-3 * ((unsigned __int64)(unsigned int)v1 >> 1) - 3];
        if ( v9 )
        {
          do
          {
            v5 = v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
        else
        {
          while ( 1 )
          {
            v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v5 || (_QWORD *)*v5 == v10 )
              break;
            v10 = v5;
          }
        }
        v12 = *(_BYTE *)(v11 + 128);
        if ( v12 != *(_BYTE *)a1 && (v12 || (*(_BYTE *)(v11 + 129) & 2) == 0) )
          break;
LABEL_24:
        if ( !v5 )
          goto LABEL_3;
      }
      KiRemoveTimer2(v11);
      v13 = *(_QWORD *)(a1 + 24);
      v14 = *(_QWORD *)(v11 + 72);
      if ( v13 >= 0 )
      {
        if ( v14 < v13 )
        {
          *(_QWORD *)(v11 + 72) = -1LL;
          *(_QWORD *)(v11 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v11 + 72) = v14 - v13;
        }
        v20 = *(_QWORD *)(v11 + 80);
        if ( v20 == -1LL )
          goto LABEL_22;
        v21 = *(_QWORD *)(a1 + 24);
        if ( v20 < v21 )
        {
          *(_QWORD *)(v11 + 80) = -1LL;
          *(_QWORD *)(v11 + 80) = 0LL;
          goto LABEL_22;
        }
        v19 = v20 - v21;
      }
      else
      {
        v15 = -v13;
        v16 = v14 + v15;
        if ( v14 + v15 < v14 || v16 == -1 )
          v16 = -2LL;
        *(_QWORD *)(v11 + 72) = v16;
        v17 = *(_QWORD *)(v11 + 80);
        if ( v17 == -1LL )
          goto LABEL_22;
        v19 = v17 + v15;
        if ( v17 + v15 < v17 || v19 == -1 )
          v19 = -2LL;
      }
      *(_QWORD *)(v11 + 80) = v19;
LABEL_22:
      v18 = v22[0];
      v2 = (_QWORD *)(v11 + 24);
      if ( *(_QWORD **)(v22[0] + 8LL) != v22 )
        __fastfail(3u);
      *v2 = v22[0];
      *(_QWORD *)(v11 + 32) = v22;
      *(_QWORD *)(v18 + 8) = v2;
      v22[0] = v11 + 24;
      goto LABEL_24;
    }
LABEL_3:
    ++v1;
    v4 += 3;
  }
  while ( v1 < 4 );
  v6 = 0;
  if ( v2 != v22 )
  {
    do
    {
      v7 = (__int64)(v2 - 3);
      v2 = (_QWORD *)*v2;
      KiInsertTimer2(v7, 1, &v23);
      if ( v23 )
        v6 = 1;
    }
    while ( v2 != v22 );
    if ( v6 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_14030E348);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
