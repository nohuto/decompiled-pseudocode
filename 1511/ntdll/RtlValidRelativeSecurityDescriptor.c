/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x180075A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 *     RtlpValidateSDOffsetAndSize @ 0x180075BD0 (RtlpValidateSDOffsetAndSize.c)
 */

char __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  char v3; // r10
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (unsigned int)a2 < 0x14 || *(_BYTE *)a1 != 1 || *(__int16 *)(a1 + 2) >= 0 )
    return 0;
  v6 = *(unsigned int *)(a1 + 4);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v6, a2, 12LL, &v20) )
      return 0;
    if ( *(_BYTE *)(a1 + v8) != 1 )
      return 0;
    v9 = *(_BYTE *)(a1 + v8 + 1);
    if ( v9 > 0xFu || v20 < 4 * (unsigned int)v9 + 8 )
      return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v10 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v10 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v10, v4, v7, &v20) )
      return 0;
    if ( *(_BYTE *)(a1 + v11) != 1 )
      return 0;
    v12 = *(_BYTE *)(a1 + v11 + 1);
    if ( v12 > 0xFu || v20 < 4 * (unsigned int)v12 + 8 )
      return 0;
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (v13 = *(unsigned int *)(a1 + 16), !(_DWORD)v13)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(v13, v4, 8LL, &v20)
    && (v15 = a1 + v14, v20 >= *(unsigned __int16 *)(v15 + 2))
    && RtlValidAcl(v15) )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      return 1;
    v17 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v17 )
      return 1;
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v17, v4, 8LL, &v20) )
    {
      v19 = a1 + v18;
      if ( v20 >= *(unsigned __int16 *)(v19 + 2) )
      {
        if ( RtlValidAcl(v19) )
          return 1;
      }
    }
  }
  return 0;
}
