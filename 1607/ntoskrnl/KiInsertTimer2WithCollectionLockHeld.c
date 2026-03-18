/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400EC8A0
 * Callers:
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400EEA78 (KiInsertTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 *     KiInsertTimer2IntoCollection @ 0x1400ED2D0 (KiInsertTimer2IntoCollection.c)
 *     KiRemoveTimer2 @ 0x1400F9890 (KiRemoveTimer2.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v4; // cl
  int v5; // edi
  _BYTE *v6; // rsi
  _QWORD *v8; // rdx
  char *v9; // r14
  _QWORD *v10; // rax
  char v11; // cl
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v5 = 0;
  v6 = a3;
  *a3 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    LOBYTE(a3) = 0;
    v8 = (_QWORD *)*((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3));
    v9 = (char *)&KiTimer2Collections + 24 * (v4 & 3);
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) >= v8[6] )
        {
          v10 = (_QWORD *)v8[1];
          if ( !v10 )
          {
            LOBYTE(a3) = 1;
            break;
          }
        }
        else
        {
          v10 = (_QWORD *)*v8;
          if ( !*v8 )
          {
            LOBYTE(a3) = 0;
            break;
          }
        }
        v8 = v10;
      }
    }
    RtlRbInsertNodeEx(v9, v8, a3, a1 + 24);
    if ( *((_QWORD *)v9 + 1) == a1 + 24 )
    {
      v5 = 1;
      *((_QWORD *)v9 + 2) = *(_QWORD *)(a1 + 72);
    }
  }
  v11 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v11 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v11 & 0xEF;
    v5 |= KiInsertTimer2IntoCollection(a1, (char *)&KiTimer2Collections + 24 * (v11 & 3), 1LL);
  }
  if ( !v5 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v13, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *v6 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
