/*
 * XREFs of RtlGenerate8dot3Name @ 0x1405221F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     GetNextWchar @ 0x1405226C4 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x140522798 (RtlComputeLfnChecksum.c)
 *     RtlIsValidOemCharacter @ 0x1406CCA3C (RtlIsValidOemCharacter.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PGENERATE_NAME_CONTEXT v4; // r14
  PUNICODE_STRING v6; // r12
  char v7; // bp
  bool v8; // si
  __int64 v9; // r13
  ULONG LastIndexValue; // ecx
  unsigned int i; // ebx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  UCHAR v14; // cl
  __int64 v15; // r15
  ULONG ExtensionLength; // eax
  unsigned __int16 Length; // cx
  unsigned int v19; // r13d
  unsigned int v20; // edi
  bool v21; // si
  unsigned int v22; // ebp
  wchar_t *Buffer; // rbx
  __int64 v24; // rax
  WCHAR v25; // ax
  int v26; // ecx
  __int64 v27; // rdi
  unsigned int v28; // ebx
  unsigned __int16 NextWchar; // ax
  UCHAR NameLength; // cl
  unsigned int v31; // ebx
  unsigned __int16 v32; // ax
  int v33; // ebx
  USHORT v34; // r11
  __int64 v35; // r8
  WCHAR *v36; // rdx
  unsigned __int16 v37; // cx
  __int16 v38; // ax
  USHORT v39; // ax
  unsigned __int16 v40; // r11
  __int64 v41; // rax
  BOOLEAN IsValidOemCharacter; // al
  int v43; // eax
  int v44; // eax
  WCHAR v45; // ax
  int v46; // ecx
  WCHAR v47; // ax
  int v48; // ebx
  unsigned int v49; // ecx
  WCHAR v50; // r8
  int v51; // eax
  BOOLEAN v52; // [rsp+20h] [rbp-68h]
  bool v53; // [rsp+21h] [rbp-67h]
  WCHAR Char[2]; // [rsp+24h] [rbp-64h] BYREF
  __int64 v55; // [rsp+28h] [rbp-60h]
  PGENERATE_NAME_CONTEXT v56; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v57[2]; // [rsp+38h] [rbp-50h] BYREF

  v4 = Context;
  v6 = Name8dot3;
  v57[0] = Name8dot3;
  v7 = 1;
  v56 = Context;
  v52 = AllowExtendedCharacters;
  v8 = AllowExtendedCharacters && (_BYTE)NlsMbOemCodePageTag;
  v9 = NlsUnicodeToMbOemData;
  v53 = v8;
  v55 = NlsUnicodeToMbOemData;
  if ( Context->NameLength )
    goto LABEL_4;
  Length = Name->Length;
  v19 = -1;
  *(_DWORD *)Char = -1;
  v20 = 0;
  v21 = Length && *Name->Buffer == 46;
  v22 = Length >> 1;
  while ( v20 < v22 )
  {
    Buffer = Name->Buffer;
    while ( 1 )
    {
      v24 = v20++;
      v25 = Buffer[v24];
      Char[0] = v25;
      if ( v25 <= 0x20u )
        goto LABEL_34;
      if ( v25 >= 0x7Fu )
      {
        if ( !AllowExtendedCharacters )
          goto LABEL_34;
        IsValidOemCharacter = RtlIsValidOemCharacter(Char);
        AllowExtendedCharacters = v52;
        if ( !IsValidOemCharacter )
          goto LABEL_34;
        v25 = Char[0];
      }
      if ( v25 != 46 )
        break;
      if ( !v21 )
        goto LABEL_26;
LABEL_34:
      if ( v20 >= v22 )
        goto LABEL_35;
    }
    if ( v25 >= 0x80u )
      goto LABEL_28;
LABEL_26:
    Context = (PGENERATE_NAME_CONTEXT)RtlFatIllegalTable;
    v26 = RtlFatIllegalTable[(unsigned __int64)v25 >> 5];
    if ( _bittest(&v26, v25 & 0x1F) )
    {
      v25 = 95;
      goto LABEL_31;
    }
    AllowExtendedCharacters = v52;
LABEL_28:
    if ( (unsigned __int16)(v25 - 97) <= 0x19u )
      v25 -= 32;
    if ( v25 )
    {
LABEL_31:
      AllowExtendedCharacters = v52;
      v21 = 0;
      if ( v25 == 46 )
        v19 = v20;
      continue;
    }
    break;
  }
LABEL_35:
  v4 = v56;
  *(_DWORD *)Char = v19;
  if ( v19 == v22 )
  {
    v19 = -1;
    *(_DWORD *)Char = -1;
  }
  v27 = v55;
  v28 = 0;
  LODWORD(v56) = 0;
  v4->NameLength = 0;
  while ( 1 )
  {
    LOBYTE(Context) = 1;
    NextWchar = GetNextWchar(Name, &v56, Context, AllowExtendedCharacters);
    *(_QWORD *)&AllowExtendedCharacters = NextWchar;
    if ( !NextWchar )
      break;
    if ( (unsigned int)v56 >= v19 )
      break;
    NameLength = v4->NameLength;
    if ( NameLength >= 6u )
      break;
    if ( v53 )
    {
      if ( NextWchar <= 0x7Fu || (v43 = 2, !*(_BYTE *)(v27 + 2LL * AllowExtendedCharacters + 1)) )
        v43 = 1;
      v28 += v43;
      if ( v28 > 6 )
        break;
    }
    v4->NameBuffer[NameLength] = AllowExtendedCharacters;
    ++v4->NameLength;
    AllowExtendedCharacters = v52;
  }
  if ( !v53 )
    v28 = v4->NameLength;
  v6 = (PUNICODE_STRING)v57[0];
  if ( v28 <= 2 )
  {
    v39 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters);
    v4->Checksum = v39;
    v40 = v39;
    LODWORD(Context) = 0;
    do
    {
      *(_QWORD *)&AllowExtendedCharacters = 55LL;
      if ( (v40 & 0xFu) <= 9 )
        *(_QWORD *)&AllowExtendedCharacters = 48LL;
      v41 = (unsigned int)Context + v4->NameLength;
      *(_WORD *)&AllowExtendedCharacters = (v40 & 0xF) + AllowExtendedCharacters;
      v40 >>= 4;
      Context = (PGENERATE_NAME_CONTEXT)(unsigned int)((_DWORD)Context + 1);
      v4->NameBuffer[v41] = AllowExtendedCharacters;
    }
    while ( (unsigned int)Context < 4 );
    v4->NameLength += 4;
    v4->CheckSumInserted = 1;
  }
  v8 = v53;
  if ( v19 == -1 )
  {
    v9 = v55;
    v7 = 1;
    v4->ExtensionLength = 0;
  }
  else
  {
    v31 = 1;
    v4->ExtensionBuffer[0] = 46;
    for ( v4->ExtensionLength = 1; ; ++v4->ExtensionLength )
    {
      LOBYTE(Context) = 1;
      v32 = GetNextWchar(Name, Char, Context, v52);
      Context = (PGENERATE_NAME_CONTEXT)v32;
      if ( !v32 )
      {
        v9 = v55;
        v7 = 1;
        goto LABEL_4;
      }
      *(_QWORD *)&AllowExtendedCharacters = v4->ExtensionLength;
      if ( AllowExtendedCharacters >= 4u )
        break;
      if ( v53 )
      {
        v9 = v55;
        if ( v32 <= 0x7Fu || (v44 = 2, !*(_BYTE *)(v55 + 2LL * (unsigned __int16)Context + 1)) )
          v44 = 1;
        v31 += v44;
        if ( v31 > 4 )
          goto LABEL_54;
      }
      v4->ExtensionBuffer[AllowExtendedCharacters] = (unsigned __int16)Context;
    }
    v9 = v55;
LABEL_54:
    v7 = 1;
    if ( FsRtlSafeExtensions )
      v4->ExtensionBuffer[AllowExtendedCharacters - 1] = 126;
  }
LABEL_4:
  if ( ++v4->LastIndexValue > 4 && !v4->CheckSumInserted )
  {
    if ( v8 )
    {
      v45 = v4->NameBuffer[0];
      if ( v45 <= 0x7Fu || (v46 = 1, !*(_BYTE *)(v9 + 2LL * v45 + 1)) )
        v46 = 0;
      v47 = v4->NameBuffer[1];
      if ( v47 <= 0x7Fu || (v48 = 1, !*(_BYTE *)(v9 + 2LL * v47 + 1)) )
        v48 = 0;
      v33 = v46 | v48;
    }
    else
    {
      v33 = 0;
    }
    v34 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters);
    v4->Checksum = v34;
    if ( 2 - v33 < (unsigned int)(6 - v33) )
    {
      v35 = 4LL;
      v36 = &v4->NameBuffer[2 - v33];
      do
      {
        ++v36;
        v37 = v34 & 0xF;
        v38 = 55;
        if ( v37 <= 9u )
          v38 = 48;
        v34 >>= 4;
        *(v36 - 1) = v37 + v38;
        --v35;
      }
      while ( v35 );
    }
    v4->LastIndexValue = 1;
    v4->NameLength = 6 - v33;
    v4->CheckSumInserted = 1;
  }
  LastIndexValue = v4->LastIndexValue;
  for ( i = 1; i <= 7; ++i )
  {
    if ( !LastIndexValue )
      break;
    v12 = LastIndexValue / 0xA;
    v13 = LastIndexValue % 0xA + 48;
    *((_WORD *)v57 + 8 - i) = v13;
    if ( (_WORD)v13 != 57 )
      v7 = 0;
    LastIndexValue = v12;
  }
  v14 = v4->NameLength;
  *((_WORD *)v57 + 8 - i) = 126;
  if ( (unsigned __int8)(v14 - 1) > 0xBu )
  {
    v15 = 0LL;
    v6->Length = 0;
  }
  else
  {
    memmove(v6->Buffer, v4->NameBuffer, 2 * v14);
    v6->Length = 2 * v4->NameLength;
    v15 = 0LL;
  }
  memmove(&v6->Buffer[(unsigned __int64)v6->Length >> 1], (char *)v57 + 2 * (8 - i), 2 * i);
  v6->Length += 2 * i;
  ExtensionLength = v4->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v6->Buffer[(unsigned __int64)v6->Length >> 1], v4->ExtensionBuffer, 2 * ExtensionLength);
    v6->Length += 2 * LOWORD(v4->ExtensionLength);
  }
  if ( !v7 )
    return 0;
  if ( v8 )
  {
    v49 = 0;
    if ( v4->NameLength )
    {
      do
      {
        v50 = v4->NameBuffer[v15];
        if ( v50 <= 0x7Fu || (v51 = 2, !*(_BYTE *)(v9 + 2LL * v50 + 1)) )
          v51 = 1;
        v49 += v51;
        if ( v49 > 7 - i )
          break;
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < v4->NameLength );
    }
    v4->NameLength = v15;
  }
  else
  {
    --v4->NameLength;
  }
  if ( v4->NameLength )
    return 0;
  else
    return -1073740761;
}
