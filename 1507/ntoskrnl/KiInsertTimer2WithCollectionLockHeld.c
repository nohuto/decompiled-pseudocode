/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800
 * Callers:
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v3; // bp
  int v4; // ebx
  _QWORD *v5; // rdi
  _BYTE *v6; // r14
  _BOOL8 v10; // rax
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  signed __int32 v20[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 0;
  *a3 = 0;
  v4 = 0;
  v5 = &KiTimer2Collections;
  v6 = a3;
  do
  {
    if ( ((unsigned __int8)(1 << v4) & *(_BYTE *)(a1 + 129)) == 0 )
      goto LABEL_3;
    v10 = v4 != 3 && (unsigned int)v4 >= 2;
    v11 = (_QWORD *)(a1 + 24 * (v10 + 1));
    switch ( v4 )
    {
      case 3:
        v12 = (_QWORD *)*v5;
        LOBYTE(a3) = 0;
        if ( !*v5 )
          goto LABEL_31;
        while ( 1 )
        {
          if ( v11[6] >= v12[6] )
          {
            v13 = (_QWORD *)v12[1];
            if ( !v13 )
            {
              LOBYTE(a3) = 1;
              goto LABEL_31;
            }
          }
          else
          {
            v13 = (_QWORD *)*v12;
            if ( !*v12 )
              goto LABEL_30;
          }
          v12 = v13;
        }
      case 0:
        v12 = (_QWORD *)*v5;
        LOBYTE(a3) = 0;
        if ( *v5 )
        {
          while ( 1 )
          {
            if ( v11[6] < v12[6] )
            {
              v19 = (_QWORD *)*v12;
              if ( !*v12 )
              {
LABEL_30:
                LOBYTE(a3) = 0;
                goto LABEL_31;
              }
            }
            else
            {
              v19 = (_QWORD *)v12[1];
              if ( !v19 )
              {
LABEL_37:
                LOBYTE(a3) = 1;
                goto LABEL_31;
              }
            }
            v12 = v19;
          }
        }
        goto LABEL_31;
      case 1:
        v12 = (_QWORD *)*v5;
        LOBYTE(a3) = 0;
        if ( *v5 )
        {
          while ( 1 )
          {
            if ( v11[6] < v12[6] )
            {
              v17 = (_QWORD *)*v12;
              if ( !*v12 )
                goto LABEL_30;
            }
            else
            {
              v17 = (_QWORD *)v12[1];
              if ( !v17 )
                goto LABEL_37;
            }
            v12 = v17;
          }
        }
        goto LABEL_31;
      case 2:
        v12 = (_QWORD *)*v5;
        LOBYTE(a3) = 0;
        if ( *v5 )
        {
          while ( 1 )
          {
            if ( v11[3] < v12[3] )
            {
              v18 = (_QWORD *)*v12;
              if ( !*v12 )
                goto LABEL_30;
            }
            else
            {
              v18 = (_QWORD *)v12[1];
              if ( !v18 )
                goto LABEL_37;
            }
            v12 = v18;
          }
        }
LABEL_31:
        RtlRbInsertNodeEx(v5, v12, a3, v11);
LABEL_32:
        v16 = *(_QWORD *)(a1 + 72);
        goto LABEL_33;
    }
    if ( v4 != 4 )
      goto LABEL_32;
    v14 = (_QWORD *)*v5;
    LOBYTE(a3) = 0;
    if ( !*v5 )
      goto LABEL_42;
    while ( v11[4] >= v14[4] )
    {
      v15 = (_QWORD *)v14[1];
      if ( !v15 )
      {
        LOBYTE(a3) = 1;
        RtlRbInsertNodeEx(v5, v14, a3, v11);
        v16 = *(_QWORD *)(a1 + 80);
        goto LABEL_33;
      }
LABEL_26:
      v14 = v15;
    }
    v15 = (_QWORD *)*v14;
    if ( *v14 )
      goto LABEL_26;
    LOBYTE(a3) = 0;
LABEL_42:
    RtlRbInsertNodeEx(v5, v14, a3, v11);
    v16 = *(_QWORD *)(a1 + 80);
LABEL_33:
    if ( v16 < v5[2] )
    {
      v3 = 1;
      *((_QWORD *)&KiTimer2Collections + 3 * v4 + 2) = v16;
    }
LABEL_3:
    ++v4;
    v5 += 3;
  }
  while ( v4 < 5 );
  if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)KiNextTimer2DueTime )
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
  if ( !v3 )
    return 1;
  _InterlockedOr(v20, 0);
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *v6 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
