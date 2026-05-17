/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x180007E28
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
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
  volatile signed __int32 **v7; // r12
  _QWORD **v8; // r14
  char v9; // r13
  _QWORD *v11; // rsi
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax

  v5 = 0;
  v6 = a1;
  v7 = a4;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v9 = a3;
  LOBYTE(a4) = 0;
  v11 = *v8;
  if ( *v8 == v8 )
    return (unsigned int)-1073741515;
  while ( 1 )
  {
    v13 = (volatile signed __int32 *)(v11 - 14);
    if ( a5 != *((_DWORD *)v11 + 38) || (v9 & 8) != 0 && (v13[26] & 1) == 0 )
      goto LABEL_5;
    if ( !a2 )
      break;
    LOBYTE(a3) = 1;
    LOBYTE(a4) = RtlEqualUnicodeString(a2, v13 + 18, a3, a4);
LABEL_18:
    if ( (_BYTE)a4 )
      goto LABEL_13;
    v6 = a1;
LABEL_5:
    v11 = (_QWORD *)*v11;
    if ( v11 == v8 )
      goto LABEL_6;
  }
  if ( (v13[26] & 0x10000000) != 0 || (LOBYTE(a3) = 1, !(unsigned __int8)RtlEqualUnicodeString(v6, v13 + 22, a3, a4)) )
  {
    LOBYTE(a4) = 0;
    goto LABEL_18;
  }
  LOBYTE(a4) = 1;
LABEL_13:
  v14 = *((_QWORD *)v13 + 19);
  if ( *(_DWORD *)(v14 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v14 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v13 + 69);
  *v7 = v13;
LABEL_6:
  if ( !(_BYTE)a4 )
    return (unsigned int)-1073741515;
  return v5;
}
