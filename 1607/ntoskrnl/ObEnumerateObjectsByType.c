/*
 * XREFs of ObEnumerateObjectsByType @ 0x1406665EC
 * Callers:
 *     IovUnloadDrivers @ 0x140701070 (IovUnloadDrivers.c)
 * Callees:
 *     ObpCreateTypeArray @ 0x140666D20 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140666E5C (ObpDestroyTypeArray.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 */

__int64 ObEnumerateObjectsByType()
{
  unsigned int v0; // ebx
  _DWORD *TypeArray; // rax
  _DWORD *v2; // rdi
  int v3; // esi
  __int64 v4; // r8
  __int64 v5; // rcx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v0 = 0;
  TypeArray = (_DWORD *)ObpCreateTypeArray(IoDriverObjectType);
  v2 = TypeArray;
  if ( TypeArray )
  {
    v3 = 0;
    if ( *TypeArray )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)&v2[2 * v3 + 2];
        if ( v4 )
        {
          v5 = (*(_BYTE *)(v4 + 58) & 2) != 0 ? v4 + 32 - ObpInfoMaskToOffset[*(_BYTE *)(v4 + 58) & 3] : 0LL;
          v7 = v5 ? *(_OWORD *)(v5 + 8) : 0LL;
          if ( !(unsigned __int8)IovpBuildDriverObjectList(
                                   v4 + 80,
                                   &v7,
                                   *(_QWORD *)(v4 + 40),
                                   *(_QWORD *)(v4 + 32),
                                   0LL) )
            break;
        }
        if ( (unsigned int)++v3 >= *v2 )
          goto LABEL_14;
      }
      v0 = -2147483622;
    }
LABEL_14:
    ObpDestroyTypeArray(v2);
  }
  return v0;
}
