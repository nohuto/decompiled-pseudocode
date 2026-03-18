/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140034D90
 * Callers:
 *     KiInsertTimer2 @ 0x140033028 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x1400338E0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, __int64 a3)
{
  char v4; // cl
  _BYTE *v5; // r15
  int v7; // edi
  char *v8; // rdi
  _QWORD *v9; // rdx
  char v10; // cl
  char *v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v5 = (_BYTE *)a3;
  v7 = 0;
  *(_BYTE *)a3 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    LOBYTE(a3) = 0;
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v8 = (char *)&KiTimer2Collections + 24 * (v4 & 3);
    v9 = *(_QWORD **)v8;
    if ( *(_QWORD *)v8 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) >= v9[6] )
        {
          v15 = (_QWORD *)v9[1];
          if ( !v15 )
          {
            a3 = 1LL;
            break;
          }
        }
        else
        {
          v15 = (_QWORD *)*v9;
          if ( !*v9 )
          {
            LOBYTE(a3) = 0;
            break;
          }
        }
        v9 = v15;
      }
    }
    RtlRbInsertNodeEx(v8, v9, a3, a1 + 24);
    if ( *((_QWORD *)v8 + 1) == a1 + 24 )
    {
      *((_QWORD *)v8 + 2) = *(_QWORD *)(a1 + 72);
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
  }
  v10 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v10 | 0x10;
  }
  else
  {
    LOBYTE(a3) = 0;
    *(_BYTE *)(a1 + 131) = v10 & 0xEF;
    v12 = (char *)&KiTimer2Collections + 24 * (v10 & 3);
    v13 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) >= v13[4] )
        {
          v14 = (_QWORD *)v13[1];
          if ( !v14 )
          {
            a3 = 1LL;
            break;
          }
        }
        else
        {
          v14 = (_QWORD *)*v13;
          if ( !*v13 )
          {
            LOBYTE(a3) = 0;
            break;
          }
        }
        v13 = v14;
      }
    }
    RtlRbInsertNodeEx(v12, v13, a3, a1 + 48);
    if ( *((_QWORD *)v12 + 1) == a1 + 48 )
    {
      v7 |= 1u;
      *((_QWORD *)v12 + 2) = *(_QWORD *)(a1 + 80);
    }
  }
  if ( !v7 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v16, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *v5 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
