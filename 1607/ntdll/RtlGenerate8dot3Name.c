/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800EE700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     GetNextWchar @ 0x1800EE584 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800EE680 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  char v5; // r8
  PUNICODE_STRING v6; // r15
  char v9; // r12
  unsigned int v10; // esi
  __int16 NextWchar; // ax
  unsigned int NameLength; // edi
  __int64 v13; // r15
  bool v14; // zf
  WCHAR v15; // ax
  WCHAR v16; // cx
  int v17; // eax
  USHORT v18; // ax
  unsigned int v19; // r8d
  USHORT v20; // r11
  __int16 v21; // dx
  __int64 v22; // rax
  WCHAR v23; // dx
  unsigned int v24; // edi
  WCHAR v25; // ax
  WCHAR v26; // dx
  __int64 v27; // rcx
  int v28; // eax
  USHORT v29; // ax
  int v30; // r11d
  USHORT v31; // r9
  __int64 v32; // r8
  WCHAR *v33; // r10
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  ULONG LastIndexValue; // ecx
  unsigned int v37; // edi
  char v38; // bp
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // ecx
  ULONG ExtensionLength; // eax
  unsigned int v43; // ecx
  unsigned int i; // edx
  int v45; // eax
  unsigned int v47; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+24h] [rbp-64h] BYREF
  int v49; // [rsp+28h] [rbp-60h]
  _QWORD v50[2]; // [rsp+30h] [rbp-58h] BYREF

  v50[0] = Name8dot3;
  v5 = 0;
  LOBYTE(v49) = 1;
  v6 = Name8dot3;
  if ( !AllowExtendedCharacters || (v9 = 1, !NlsMbOemCodePageTag) )
    v9 = 0;
  if ( !Context->NameLength )
  {
    v10 = -1;
    v47 = 0;
    if ( Name->Length && *Name->Buffer == 46 )
      v5 = 1;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v47, v5, AllowExtendedCharacters);
      if ( !NextWchar )
        break;
      v5 = 0;
      if ( NextWchar == 46 )
        v10 = v47;
    }
    NameLength = 0;
    v13 = NlsUnicodeToMbOemData;
    v14 = v10 == Name->Length >> 1;
    v47 = 0;
    Context->NameLength = 0;
    if ( v14 )
      v10 = -1;
    v48 = v10;
    while ( 1 )
    {
      v15 = GetNextWchar(&Name->Length, &v47, 1, AllowExtendedCharacters);
      v16 = v15;
      if ( !v15 || v47 >= v10 || Context->NameLength >= 6u )
        break;
      if ( v9 )
      {
        if ( v15 <= 0x7Fu || (v14 = *(_BYTE *)(v13 + 2LL * v15 + 1) == 0, v17 = 2, v14) )
          v17 = 1;
        NameLength += v17;
        if ( NameLength > 6 )
          break;
      }
      Context->NameBuffer[Context->NameLength++] = v16;
    }
    if ( !v9 )
      NameLength = Context->NameLength;
    v6 = (PUNICODE_STRING)v50[0];
    if ( NameLength <= 2 )
    {
      v18 = RtlComputeLfnChecksum(&Name->Length);
      v19 = 0;
      Context->Checksum = v18;
      v20 = v18;
      do
      {
        v21 = 55;
        if ( (v20 & 0xFu) <= 9 )
          v21 = 48;
        v22 = v19 + Context->NameLength;
        v23 = (v20 & 0xF) + v21;
        v20 >>= 4;
        ++v19;
        Context->NameBuffer[v22] = v23;
      }
      while ( v19 < 4 );
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v10 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v24 = 1;
      for ( Context->ExtensionLength = 1; ; ++Context->ExtensionLength )
      {
        v25 = GetNextWchar(&Name->Length, &v48, 1, AllowExtendedCharacters);
        v26 = v25;
        if ( !v25 )
          break;
        if ( Context->ExtensionLength >= 4 )
          goto LABEL_41;
        if ( v9 )
        {
          if ( v25 <= 0x7Fu || (v27 = v25, v28 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v27 + 1)) )
            v28 = 1;
          v24 += v28;
          if ( v24 > 4 )
          {
LABEL_41:
            Context->ExtensionBuffer[Context->ExtensionLength - 1] = 126;
            break;
          }
        }
        Context->ExtensionBuffer[Context->ExtensionLength] = v26;
      }
    }
  }
  if ( ++Context->LastIndexValue > 4 && !Context->CheckSumInserted )
  {
    v29 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v29;
    v31 = v29;
    if ( 2 - v30 < (unsigned int)(6 - v30) )
    {
      v32 = 4LL;
      v33 = &Context->NameBuffer[2 - v30];
      do
      {
        v34 = 55;
        v35 = v31 & 0xF;
        if ( v35 <= 9u )
          v34 = 48;
        v31 >>= 4;
        *v33++ = v35 + v34;
        --v32;
      }
      while ( v32 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v30;
    Context->CheckSumInserted = 1;
  }
  LastIndexValue = Context->LastIndexValue;
  v37 = 1;
  v38 = v49;
  do
  {
    if ( !LastIndexValue )
      break;
    v39 = LastIndexValue / 0xA;
    v40 = 8 - v37;
    v41 = LastIndexValue % 0xA + 48;
    if ( (_WORD)v41 != 57 )
      v38 = 0;
    ++v37;
    *((_WORD *)v50 + v40) = v41;
    LastIndexValue = v39;
  }
  while ( v37 <= 7 );
  *((_WORD *)v50 + 8 - v37) = 126;
  if ( (unsigned __int8)(Context->NameLength - 1) > 0xBu )
  {
    v6->Length = 0;
  }
  else
  {
    memmove(v6->Buffer, Context->NameBuffer, 2 * Context->NameLength);
    v6->Length = 2 * Context->NameLength;
  }
  memmove(&v6->Buffer[(unsigned __int64)v6->Length >> 1], (char *)v50 + 2 * (8 - v37), 2 * v37);
  v6->Length += 2 * v37;
  ExtensionLength = Context->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v6->Buffer[(unsigned __int64)v6->Length >> 1], Context->ExtensionBuffer, 2 * ExtensionLength);
    v6->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v38 )
    return 0;
  if ( v9 )
  {
    v43 = 0;
    for ( i = 0; v43 < Context->NameLength; ++v43 )
    {
      if ( Context->NameBuffer[v43] <= 0x7Fu
        || (v45 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * Context->NameBuffer[v43] + 1)) )
      {
        v45 = 1;
      }
      i += v45;
      if ( i > 7 - v37 )
        break;
    }
    Context->NameLength = v43;
  }
  else
  {
    --Context->NameLength;
  }
  if ( Context->NameLength )
    return 0;
  else
    return -1073740761;
}
