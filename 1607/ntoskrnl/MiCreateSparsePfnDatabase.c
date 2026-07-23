/*
 * XREFs of MiCreateSparsePfnDatabase @ 0x140797038
 * Callers:
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 * Callees:
 *     MxMapPfnRange @ 0x14079720C (MxMapPfnRange.c)
 */

__int64 __fastcall MiCreateSparsePfnDatabase(__int64 a1)
{
  __int64 *v1; // r15
  __int64 *v2; // rbx
  unsigned int v3; // esi
  int v4; // edi
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx

  v1 = (__int64 *)(a1 + 32);
  v2 = *(__int64 **)(a1 + 32);
  v3 = 0;
  v4 = 3;
  v5 = -1LL;
  v6 = 0LL;
  if ( v2 == (__int64 *)(a1 + 32) )
    goto LABEL_24;
  v7 = 0x1C0C00048LL;
  do
  {
    v8 = *((int *)v2 + 4);
    if ( (unsigned int)v8 <= 0x20 && _bittest64(&v7, v8) )
    {
      if ( v5 == -1 )
        goto LABEL_19;
LABEL_29:
      if ( v4 != 2 )
      {
        v9 = 1LL;
        if ( v4 != 24 )
          goto LABEL_15;
      }
      goto LABEL_14;
    }
    if ( v5 == -1 )
      goto LABEL_18;
    if ( v6 + v5 != v2[3] )
      goto LABEL_29;
    if ( (v4 == 2 || v4 == 24) && ((_DWORD)v8 == 2 || (_DWORD)v8 == 24) )
    {
LABEL_13:
      v6 += v2[4];
      goto LABEL_19;
    }
    if ( v4 != 2 )
    {
      if ( (_DWORD)v8 != 2 && v4 != 24 && (_DWORD)v8 != 24 )
        goto LABEL_13;
      goto LABEL_29;
    }
LABEL_14:
    v9 = 0LL;
LABEL_15:
    if ( !(unsigned int)MxMapPfnRange(v5, v6, v9) )
      return 0LL;
    v8 = *((int *)v2 + 4);
    v7 = 0x1C0C00048LL;
    if ( (unsigned int)v8 > 0x20 || !_bittest64(&v7, v8) )
    {
LABEL_18:
      v6 = v2[4];
      v4 = v8;
      v5 = v2[3];
      goto LABEL_19;
    }
    v5 = -1LL;
LABEL_19:
    v2 = (__int64 *)*v2;
  }
  while ( v2 != v1 );
  if ( v5 != -1 )
  {
    if ( v4 == 2 || (v10 = 1LL, v4 == 24) )
      v10 = 0LL;
    if ( !(unsigned int)MxMapPfnRange(v5, v6, v10) )
      return 0LL;
  }
LABEL_24:
  v11 = qword_140326AD0;
  if ( qword_1403273A0 == qword_140326AD0 + 1 )
    goto LABEL_27;
  if ( !(unsigned int)MxMapPfnRange(qword_1403273A0, 2048LL, 1LL) )
    return 0LL;
  v11 = qword_140326AD0;
LABEL_27:
  LOBYTE(v3) = (unsigned int)MxMapPfnRange(v11 + 1, -1LL, 1LL) != 0;
  return v3;
}
