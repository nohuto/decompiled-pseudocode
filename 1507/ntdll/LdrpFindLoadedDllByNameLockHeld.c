/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x180040448
 * Callers:
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        _QWORD *a4,
        int a5)
{
  unsigned int v5; // edi
  unsigned __int16 *v6; // rax
  _QWORD **v8; // r14
  char v11; // r9
  _QWORD *v12; // rsi
  _QWORD *v14; // rbx
  __int64 v15; // rax

  v5 = 0;
  v6 = a1;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v11 = 0;
  v12 = *v8;
  if ( *v8 == v8 )
    return (unsigned int)-1073741515;
  while ( 1 )
  {
    v14 = v12 - 14;
    if ( a5 != *((_DWORD *)v12 + 38) || (a3 & 8) != 0 && (v14[13] & 1) == 0 )
      goto LABEL_5;
    if ( !a2 )
      break;
    v11 = RtlEqualUnicodeString(a2, (unsigned __int16 *)v14 + 36, 1);
LABEL_18:
    if ( v11 )
      goto LABEL_13;
    v6 = a1;
LABEL_5:
    v12 = (_QWORD *)*v12;
    if ( v12 == v8 )
      goto LABEL_6;
  }
  if ( (v14[13] & 0x10000000) != 0 || !RtlEqualUnicodeString(v6, (unsigned __int16 *)v14 + 44, 1) )
  {
    v11 = 0;
    goto LABEL_18;
  }
  v11 = 1;
LABEL_13:
  v15 = v14[19];
  if ( *(_DWORD *)(v15 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v14 + 69);
  *a4 = v14;
LABEL_6:
  if ( !v11 )
    return (unsigned int)-1073741515;
  return v5;
}
