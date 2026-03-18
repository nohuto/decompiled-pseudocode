/*
 * XREFs of InternalVkKeyScanEx @ 0x1C00DAA04
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C00DA230 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C00DA574 (xxxInternalToUnicode.c)
 * Callees:
 *     GetModificationNumber @ 0x1C00DAB78 (GetModificationNumber.c)
 */

__int64 __fastcall InternalVkKeyScanEx(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  unsigned __int16 v3; // bx
  __int64 v4; // rbp
  __int16 ModificationNumber; // r15
  __int64 v6; // rcx
  __int16 v7; // ax
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r9
  _BYTE *v13; // rcx
  char v14; // si
  unsigned __int8 v15; // r14
  unsigned __int8 v16; // di
  _BYTE *v17; // rdx

  v2 = a2;
  v3 = 0;
  if ( !a2 )
    v2 = *(_QWORD **)(*(_QWORD *)(gspklBaseLayout + 48LL) + 32LL);
  v4 = *v2;
  ModificationNumber = GetModificationNumber(*v2, 2LL);
  v7 = GetModificationNumber(v6, 3LL);
  v12 = *(_QWORD *)(v11 + 8);
  if ( !v12 || (v13 = *(_BYTE **)v12) == 0LL )
  {
LABEL_27:
    if ( v9 < 0x20u )
      return (unsigned __int8)(v9 + 64) | 0x200u;
    else
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 )
      break;
LABEL_11:
    v12 += 16LL;
    v13 = *(_BYTE **)v12;
    if ( !*(_QWORD *)v12 )
    {
      if ( v3 )
        return v3;
      if ( v10 )
        return v10;
      goto LABEL_27;
    }
  }
  v15 = *(_BYTE *)(v12 + 8);
  while ( 1 )
  {
    v16 = v8;
    if ( v15 )
      break;
LABEL_10:
    v13 += *(unsigned __int8 *)(v12 + 9);
    v14 = *v13;
    if ( !*v13 )
      goto LABEL_11;
  }
  while ( 1 )
  {
    v17 = v13;
    if ( *(_WORD *)&v13[2 * v16 + 2] == v9 )
      break;
LABEL_9:
    if ( ++v16 >= v15 )
      goto LABEL_10;
  }
  if ( v14 == -1 )
    v17 = &v13[-*(unsigned __int8 *)(v12 + 9)];
  if ( v16 == ModificationNumber )
  {
    if ( !v3 )
      v3 = (unsigned __int8)*v17 | 0x200;
    goto LABEL_9;
  }
  if ( v16 == v7 )
  {
    if ( !v10 )
      v10 = (unsigned __int8)*v17 | 0x300;
    goto LABEL_9;
  }
  while ( *(_BYTE *)(v8 + v4 + 10) != v16 )
  {
    if ( ++v8 > *(_WORD *)(v4 + 8) )
      return 0xFFFFFFFFLL;
  }
  if ( *v17 == 0xFF )
    v17 -= *(unsigned __int8 *)(v12 + 9);
  return ((unsigned __int8)v8 << 8) | (unsigned int)(unsigned __int8)*v17;
}
