/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x1404BEE8C
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlMapGenericMask @ 0x1403FF7D0 (RtlMapGenericMask.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpCheckAdminAccess @ 0x140600A48 (CmpCheckAdminAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
 */

__int64 __fastcall CmpVEPerformOpenAccessCheck(
        _QWORD *Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned int v9; // ecx
  ACCESS_MASK v11; // eax
  char v12; // al
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp+8h] BYREF

  v6 = Object[1];
  if ( *(_WORD *)(v6 + 58) )
    return a6;
  if ( CmpIsSystemEntity((int *)(a5 + 16)) )
    return a6;
  if ( (*(_DWORD *)(v6 + 176) & 0x40) != 0 )
    return a6;
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 5360LL) & 0x10) == 0 )
    return a6;
  LODWORD(v13[0]) = CmpCheckAdminAccess(*(_DWORD *)(a3 + 16), (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 80) + 32LL));
  if ( SLODWORD(v13[0]) < 0 )
  {
    return a6;
  }
  else if ( (_BYTE)AccessMask )
  {
    AccessMask = 0x2000000;
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
    v11 = AccessMask;
    *(_DWORD *)(a3 + 16) = AccessMask;
    *(_DWORD *)(a3 + 24) = v11;
    v12 = CmpCheckKeyBodyAccess(Object, (__int64)v13);
    v9 = v13[0];
    if ( v12 )
      return 0;
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v9;
}
