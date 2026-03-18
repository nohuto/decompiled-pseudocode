/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x140682D1C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140682468 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140680544 (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x1406832F8 (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryValue @ 0x1406834D4 (AslpFileVerQueryValue.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r15d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  int VersionString; // eax
  _WORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 *v19; // [rsp+80h] [rbp+18h] BYREF
  _WORD *v20; // [rsp+88h] [rbp+20h] BYREF

  v2 = a2;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0;
  if ( a2 )
  {
    v7 = AslpFileVerQueryValue(a2, L"\\VarFileInfo\\Translation", &v19, &v18);
    v6 = v7;
    if ( v7 == -1073741275 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v7 < 0 )
      {
LABEL_22:
        AslLogCallPrintf(1LL);
        return (unsigned int)v6;
      }
      v8 = v19;
    }
    v9 = 0LL;
    v10 = (unsigned __int64)v18 >> 2;
    do
    {
      v11 = *(int *)((char *)&unk_14025DCF0 + v9);
      VersionString = AslpFileQueryVersionString(
                        (int)&v20,
                        v2,
                        (int)v8,
                        v10,
                        *(NTSTRSAFE_PCWSTR *)((char *)&unk_14025DCF0 + v9 + 8));
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
          goto LABEL_22;
        *(_DWORD *)(32 * v11 + a1 + 24) |= 2u;
      }
      else
      {
        v13 = v20;
        v6 = AslStringXmlSanitize(v20);
        if ( v6 < 0 )
          goto LABEL_22;
        v14 = 32 * v11;
        v15 = -1LL;
        *(_DWORD *)(32 * v11 + a1) = 4;
        do
          ++v15;
        while ( v13[v15] );
        *(_DWORD *)(v14 + a1 + 24) |= 1u;
        *(_QWORD *)(v14 + a1 + 16) = v13;
        *(_QWORD *)(v14 + a1 + 8) = v15;
      }
      v9 += 16LL;
    }
    while ( v9 < 0x80 );
    if ( v8 && v10 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v16 = *v8;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v16;
      return 0;
    }
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
  }
  *(_DWORD *)(a1 + 792) |= 2u;
  return 0;
}
