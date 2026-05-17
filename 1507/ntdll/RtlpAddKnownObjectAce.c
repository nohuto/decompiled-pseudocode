/*
 * XREFs of RtlpAddKnownObjectAce @ 0x180073D6C
 * Callers:
 *     RtlAddAccessDeniedObjectAce @ 0x180073C70 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x180073CC0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x180073D20 (RtlAddAccessAllowedObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x1800201C0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180020360 (RtlValidAcl.c)
 *     RtlCopySid @ 0x18004E900 (RtlCopySid.c)
 */

__int64 RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *a7,
        char a8,
        ...)
{
  int v12; // esi
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // dx
  __int64 v16; // r8
  _OWORD *v17; // rdx
  __int64 result; // rax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0;
  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  v13 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v13 = a3 & 0xFFFFFF20;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v19) )
    return 3221225591LL;
  v14 = a7[1];
  v15 = 4 * v14 + 20;
  if ( a5 )
  {
    v12 = 1;
    v15 = 4 * v14 + 36;
  }
  if ( a6 )
  {
    v12 |= 2u;
    v15 += 16;
  }
  v16 = v19[0];
  if ( !v19[0] || v19[0] + (unsigned __int64)v15 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v19[0] + 2LL) = v15;
  v17 = (_OWORD *)(v16 + 12);
  *(_BYTE *)(v16 + 1) = a3;
  *(_BYTE *)v16 = a8;
  *(_DWORD *)(v16 + 4) = a4;
  *(_DWORD *)(v16 + 8) = v12;
  if ( a5 )
  {
    *v17 = *a5;
    v17 = (_OWORD *)(v16 + 28);
  }
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(4 * v14 + 8, v17, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
