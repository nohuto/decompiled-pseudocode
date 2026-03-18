/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x140120830
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x140120638 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiInsertTimer2 @ 0x140033028 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x1400338E0 (KiRemoveTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400EC2C0 (KiSendClockInterruptToClockOwner.c)
 *     KiRequestTimer2Expiration @ 0x1400ED01C (KiRequestTimer2Expiration.c)
 *     KiShouldActivateHRTimerClock @ 0x140120A08 (KiShouldActivateHRTimerClock.c)
 */

__int64 __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  int v1; // r14d
  _QWORD *v2; // rsi
  _QWORD **v4; // r15
  _QWORD *v5; // rdi
  char v6; // bl
  __int64 result; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  char v23; // [rsp+68h] [rbp+38h] BYREF

  v1 = 0;
  v2 = v22;
  v22[1] = v22;
  v22[0] = v22;
  v4 = (_QWORD **)&unk_1402E8908;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v5[1];
        v9 = v5;
        v10 = (__int64)&v5[-3 * ((unsigned __int64)(unsigned int)v1 >> 1) - 3];
        if ( v8 )
        {
          do
          {
            v5 = v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
        else
        {
          while ( 1 )
          {
            v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v5 || (_QWORD *)*v5 == v9 )
              break;
            v9 = v5;
          }
        }
        v11 = *(_BYTE *)(v10 + 128);
        if ( v11 != *(_BYTE *)a1 && (v11 || (*(_BYTE *)(v10 + 129) & 2) == 0) )
          break;
LABEL_19:
        if ( !v5 )
          goto LABEL_3;
      }
      KiRemoveTimer2(v10);
      v12 = *(_QWORD *)(a1 + 24);
      v13 = *(_QWORD *)(v10 + 72);
      if ( v12 >= 0 )
      {
        if ( v13 < v12 )
        {
          *(_QWORD *)(v10 + 72) = -1LL;
          *(_QWORD *)(v10 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v10 + 72) = v13 - v12;
        }
        v20 = *(_QWORD *)(v10 + 80);
        if ( v20 == -1LL )
          goto LABEL_17;
        v21 = *(_QWORD *)(a1 + 24);
        if ( v20 < v21 )
        {
          *(_QWORD *)(v10 + 80) = -1LL;
          *(_QWORD *)(v10 + 80) = 0LL;
          goto LABEL_17;
        }
        v18 = v20 - v21;
      }
      else
      {
        v14 = -v12;
        v15 = v13 + v14;
        if ( v13 + v14 < v13 || v15 == -1 )
          v15 = -2LL;
        *(_QWORD *)(v10 + 72) = v15;
        v16 = *(_QWORD *)(v10 + 80);
        if ( v16 == -1LL )
          goto LABEL_17;
        v18 = v16 + v14;
        if ( v16 + v14 < v16 || v18 == -1 )
          v18 = -2LL;
      }
      *(_QWORD *)(v10 + 80) = v18;
LABEL_17:
      v17 = v22[0];
      v2 = (_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 24) = v22[0];
      *(_QWORD *)(v10 + 32) = v22;
      if ( *(_QWORD **)(v17 + 8) != v22 )
        __fastfail(3u);
      *(_QWORD *)(v17 + 8) = v2;
      v22[0] = v10 + 24;
      goto LABEL_19;
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
      v19 = (__int64)(v2 - 3);
      v2 = (_QWORD *)*v2;
      KiInsertTimer2(v19, 1, (__int64)&v23);
      if ( v23 )
        v6 = 1;
    }
    while ( v2 != v22 );
    if ( v6 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_1402E8928);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
