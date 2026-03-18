/*
 * XREFs of RtlGenerate8dot3Name @ 0x1404A368C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     GetNextWchar @ 0x1404A3A60 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1404A3B34 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PUNICODE_STRING v4; // r15
  __int64 v5; // r9
  PGENERATE_NAME_CONTEXT v6; // rbx
  char v9; // r12
  __int64 v10; // rdx
  unsigned __int16 Length; // di
  unsigned int v12; // esi
  __int16 NextWchar; // ax
  __int64 v14; // r15
  unsigned int v15; // eax
  unsigned int NameLength; // edi
  WCHAR v17; // ax
  __int64 v18; // rdx
  WCHAR v19; // cx
  unsigned int v20; // edi
  WCHAR v21; // ax
  WCHAR v22; // dx
  ULONG LastIndexValue; // ecx
  unsigned int v24; // edi
  char v25; // bp
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // ecx
  UCHAR v29; // cl
  ULONG ExtensionLength; // eax
  USHORT v32; // ax
  int v33; // r11d
  USHORT v34; // r9
  __int64 v35; // r8
  WCHAR *v36; // r10
  __int16 v37; // ax
  unsigned __int16 v38; // cx
  USHORT v39; // ax
  USHORT v40; // r11
  __int16 v41; // dx
  __int64 v42; // rax
  WCHAR v43; // dx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int i; // edx
  WCHAR v48; // r8
  int v49; // eax
  unsigned int v50; // [rsp+20h] [rbp-78h] BYREF
  __int64 v51; // [rsp+28h] [rbp-70h]
  int v52; // [rsp+30h] [rbp-68h]
  unsigned int v53; // [rsp+34h] [rbp-64h] BYREF
  PGENERATE_NAME_CONTEXT v54; // [rsp+38h] [rbp-60h]
  _QWORD v55[2]; // [rsp+40h] [rbp-58h] BYREF

  v4 = Name8dot3;
  v55[0] = Name8dot3;
  v5 = 0LL;
  LOBYTE(v52) = 1;
  v6 = Context;
  v54 = Context;
  if ( !AllowExtendedCharacters || (v9 = 1, !(_BYTE)NlsMbOemCodePageTag) )
    v9 = 0;
  v10 = NlsUnicodeToMbOemData;
  v51 = NlsUnicodeToMbOemData;
  if ( !Context->NameLength )
  {
    Length = Name->Length;
    v12 = -1;
    v50 = 0;
    if ( !Length || (LOBYTE(Context) = 1, *Name->Buffer != 46) )
      LOBYTE(Context) = 0;
    while ( 1 )
    {
      LOBYTE(v5) = AllowExtendedCharacters;
      NextWchar = GetNextWchar(Name, &v50, Context, v5);
      if ( !NextWchar )
        break;
      LOBYTE(Context) = 0;
      if ( NextWchar == 46 )
        v12 = v50;
    }
    v6 = v54;
    v14 = v51;
    v15 = Length;
    NameLength = 0;
    v50 = 0;
    v54->NameLength = 0;
    if ( v12 == v15 >> 1 )
      v12 = -1;
    v53 = v12;
    while ( 1 )
    {
      LOBYTE(v5) = AllowExtendedCharacters;
      LOBYTE(Context) = 1;
      v17 = GetNextWchar(Name, &v50, Context, v5);
      v5 = 0LL;
      v19 = v17;
      if ( !v17 )
        break;
      if ( v50 >= v12 )
        break;
      LOBYTE(v18) = v6->NameLength;
      if ( (unsigned __int8)v18 >= 6u )
        break;
      if ( v9 )
      {
        if ( v17 <= 0x7Fu || (v44 = 2, !*(_BYTE *)(v14 + 2LL * v19 + 1)) )
          v44 = 1;
        NameLength += v44;
        if ( NameLength > 6 )
          break;
      }
      v6->NameBuffer[(unsigned __int8)v18] = v19;
      ++v6->NameLength;
    }
    if ( !v9 )
      NameLength = v6->NameLength;
    v4 = (PUNICODE_STRING)v55[0];
    if ( NameLength <= 2 )
    {
      v39 = RtlComputeLfnChecksum(Name, v18, Context, 0LL);
      v5 = 0LL;
      v6->Checksum = v39;
      v40 = v39;
      LODWORD(Context) = 0;
      do
      {
        v41 = 55;
        if ( (v40 & 0xFu) <= 9 )
          v41 = 48;
        v42 = (unsigned int)Context + v6->NameLength;
        v43 = (v40 & 0xF) + v41;
        v40 >>= 4;
        Context = (PGENERATE_NAME_CONTEXT)(unsigned int)((_DWORD)Context + 1);
        v6->NameBuffer[v42] = v43;
      }
      while ( (unsigned int)Context < 4 );
      v6->NameLength += 4;
      v6->CheckSumInserted = 1;
    }
    if ( v12 == -1 )
    {
      v6->ExtensionLength = 0;
    }
    else
    {
      v6->ExtensionBuffer[0] = 46;
      v20 = 1;
      for ( v6->ExtensionLength = 1; ; ++v6->ExtensionLength )
      {
        LOBYTE(v5) = AllowExtendedCharacters;
        LOBYTE(Context) = 1;
        v21 = GetNextWchar(Name, &v53, Context, v5);
        v5 = 0LL;
        v22 = v21;
        if ( !v21 )
          break;
        Context = (PGENERATE_NAME_CONTEXT)v6->ExtensionLength;
        if ( (unsigned int)Context >= 4 )
          goto LABEL_48;
        if ( v9 )
        {
          if ( v21 <= 0x7Fu || (v45 = 2, !*(_BYTE *)(v51 + 2LL * v22 + 1)) )
            v45 = 1;
          v20 += v45;
          if ( v20 > 4 )
          {
LABEL_48:
            v10 = v51;
            if ( FsRtlSafeExtensions )
              v6->ExtensionBuffer[(_DWORD)Context - 1] = 126;
            goto LABEL_28;
          }
        }
        v6->ExtensionBuffer[(_QWORD)Context] = v22;
      }
    }
    v10 = v51;
  }
LABEL_28:
  if ( ++v6->LastIndexValue > 4 && !v6->CheckSumInserted )
  {
    v32 = RtlComputeLfnChecksum(Name, v10, Context, 0LL);
    v6->Checksum = v32;
    v34 = v32;
    if ( 2 - v33 < (unsigned int)(6 - v33) )
    {
      v35 = 4LL;
      v36 = &v6->NameBuffer[2 - v33];
      do
      {
        v37 = 55;
        v38 = v34 & 0xF;
        if ( v38 <= 9u )
          v37 = 48;
        v34 >>= 4;
        *v36++ = v38 + v37;
        --v35;
      }
      while ( v35 );
    }
    v6->LastIndexValue = 1;
    v6->NameLength = 6 - v33;
    v6->CheckSumInserted = 1;
  }
  LastIndexValue = v6->LastIndexValue;
  v24 = 1;
  v25 = v52;
  do
  {
    if ( !LastIndexValue )
      break;
    v26 = LastIndexValue / 0xA;
    v27 = 8 - v24;
    v28 = LastIndexValue % 0xA + 48;
    if ( (_WORD)v28 != 57 )
      v25 = 0;
    ++v24;
    *((_WORD *)v55 + v27) = v28;
    LastIndexValue = v26;
  }
  while ( v24 <= 7 );
  v29 = v6->NameLength;
  *((_WORD *)v55 + 8 - v24) = 126;
  if ( (unsigned __int8)(v29 - 1) > 0xBu )
  {
    v4->Length = 0;
  }
  else
  {
    memmove(v4->Buffer, v6->NameBuffer, 2 * v29);
    v4->Length = 2 * v6->NameLength;
  }
  memmove(&v4->Buffer[(unsigned __int64)v4->Length >> 1], (char *)v55 + 2 * (8 - v24), 2 * v24);
  v4->Length += 2 * v24;
  ExtensionLength = v6->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v4->Buffer[(unsigned __int64)v4->Length >> 1], v6->ExtensionBuffer, 2 * ExtensionLength);
    v4->Length += 2 * LOWORD(v6->ExtensionLength);
  }
  if ( !v25 )
    return 0;
  if ( v9 )
  {
    v46 = 0;
    for ( i = 0; v46 < v6->NameLength; ++v46 )
    {
      v48 = v6->NameBuffer[v46];
      if ( v48 <= 0x7Fu || (v49 = 2, !*(_BYTE *)(v51 + 2LL * v48 + 1)) )
        v49 = 1;
      i += v49;
      if ( i > 7 - v24 )
        break;
    }
    v6->NameLength = v46;
  }
  else
  {
    --v6->NameLength;
  }
  if ( v6->NameLength )
    return 0;
  else
    return -1073740761;
}
