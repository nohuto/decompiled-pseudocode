/*
 * XREFs of KiInsertTimer2IntoCollection @ 0x1400ED2D0
 * Callers:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EC8A0 (KiInsertTimer2WithCollectionLockHeld.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2IntoCollection(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rdx
  unsigned __int64 v7; // rdi
  bool v8; // r8
  _QWORD *v9; // rax
  _QWORD *v11; // rax

  v3 = a3;
  v5 = (_QWORD *)*a2;
  v7 = a1 + 24 * (a3 + 1LL);
  if ( a3 )
  {
    v8 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v7 + 32) >= v5[4] )
        {
          v9 = (_QWORD *)v5[1];
          if ( !v9 )
            goto LABEL_7;
        }
        else
        {
          v9 = (_QWORD *)*v5;
          if ( !*v5 )
            goto LABEL_8;
        }
        v5 = v9;
      }
    }
  }
  else
  {
    v8 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v7 + 48) < v5[6] )
        {
          v11 = (_QWORD *)*v5;
          if ( !*v5 )
          {
LABEL_8:
            v8 = 0;
            break;
          }
        }
        else
        {
          v11 = (_QWORD *)v5[1];
          if ( !v11 )
          {
LABEL_7:
            v8 = 1;
            break;
          }
        }
        v5 = v11;
      }
    }
  }
  RtlRbInsertNodeEx(a2, (unsigned __int64)v5, v8, v7);
  if ( a2[1] != v7 )
    return 0LL;
  a2[2] = *(_QWORD *)(a1 + 8 * v3 + 72);
  return 1LL;
}
