/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x18000F984
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 **a4,
        int a5)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD **v8; // r14
  char v9; // r13
  char v11; // r9
  _QWORD *v12; // rsi
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rax

  v5 = 0;
  v6 = a1;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v9 = a3;
  v11 = 0;
  v12 = *v8;
  if ( *v8 == v8 )
    return (unsigned int)-1073741515;
  while ( 1 )
  {
    v14 = (volatile signed __int32 *)(v12 - 14);
    if ( a5 != *((_DWORD *)v12 + 38) || (v9 & 8) != 0 && (v14[26] & 1) == 0 )
      goto LABEL_5;
    if ( !a2 )
      break;
    LOBYTE(a3) = 1;
    v11 = RtlEqualUnicodeString(a2, v14 + 18, a3);
LABEL_18:
    if ( v11 )
      goto LABEL_13;
    v6 = a1;
LABEL_5:
    v12 = (_QWORD *)*v12;
    if ( v12 == v8 )
      goto LABEL_6;
  }
  if ( (v14[26] & 0x10000000) != 0 || (LOBYTE(a3) = 1, !(unsigned __int8)RtlEqualUnicodeString(v6, v14 + 22, a3)) )
  {
    v11 = 0;
    goto LABEL_18;
  }
  v11 = 1;
LABEL_13:
  v15 = *((_QWORD *)v14 + 19);
  if ( *(_DWORD *)(v15 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v14 + 69);
  *a4 = v14;
LABEL_6:
  if ( !v11 )
    return (unsigned int)-1073741515;
  return v5;
}
