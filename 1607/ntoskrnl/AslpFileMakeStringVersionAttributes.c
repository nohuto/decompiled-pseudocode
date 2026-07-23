/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x1406C89A0
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1406C8160 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x1402339C8 (AslpFileVerBlockGetValueOffset.c)
 *     AslStringXmlSanitize @ 0x1406C5748 (AslStringXmlSanitize.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpFileQueryVersionString @ 0x1406C8FB4 (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  unsigned __int16 *v8; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  int VersionString; // eax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  const wchar_t *pszSrc; // [rsp+28h] [rbp-18h]
  int v22[2]; // [rsp+30h] [rbp-10h] BYREF
  int v23[2]; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+48h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  size_t v26; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)v23 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v7 = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v25, &v24);
    v6 = v7;
    if ( v7 == -1073741275 )
    {
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      if ( v7 < 0 )
      {
LABEL_26:
        AslLogCallPrintf(1LL);
        return (unsigned int)v6;
      }
      v10 = v24;
      v11 = v25;
      v8 = 0LL;
      v9 = 0;
      if ( AslpFileVerBlockGetValueOffset(&v26, v25, v24) >= 0 && v10 > v26 )
      {
        v8 = (unsigned __int16 *)(v26 + v11);
        v9 = v10 - v26;
      }
    }
    v12 = 0LL;
    v13 = (unsigned __int64)v9 >> 2;
    do
    {
      v14 = *(int *)((char *)&unk_14025C160 + v12);
      pszSrc = *(const wchar_t **)((char *)&unk_14025C160 + v12 + 8);
      LODWORD(v24) = *(_DWORD *)((char *)&unk_14025C160 + v12);
      VersionString = AslpFileQueryVersionString((int)v22, (int)v23, v2, (int)v8, v13, pszSrc);
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
          goto LABEL_26;
        *(_DWORD *)(32 * v14 + a1 + 24) |= 2u;
      }
      else
      {
        v16 = *(_QWORD *)v22;
        v6 = AslStringXmlSanitize(*(_WORD **)v22);
        if ( v6 < 0 )
          goto LABEL_26;
        v17 = 32LL * (int)v24;
        v18 = -1LL;
        *(_DWORD *)(v17 + a1) = 4;
        do
          ++v18;
        while ( *(_WORD *)(v16 + 2 * v18) );
        *(_DWORD *)(v17 + a1 + 24) |= 1u;
        *(_QWORD *)(v17 + a1 + 8) = v18;
        *(_QWORD *)(v17 + a1 + 16) = v16;
      }
      v12 += 16LL;
    }
    while ( v12 < 0x80 );
    if ( v8 && v13 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v19 = *v8;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v19;
    }
    else
    {
      *(_DWORD *)(a1 + 792) |= 2u;
    }
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(a1 + 184);
    v5 = 8LL;
    do
    {
      *v4 |= 2u;
      v4 += 8;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
}
