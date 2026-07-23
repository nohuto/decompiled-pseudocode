/*
 * XREFs of RtlFindCharInUnicodeString @ 0x180027030
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180064638 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlDowncaseUnicodeChar @ 0x1800D1FC0 (RtlDowncaseUnicodeChar.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  __int64 v4; // rbp
  char v6; // r12
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // r8
  unsigned __int16 v9; // r8
  unsigned __int16 Length; // r11
  unsigned __int16 *Buffer; // r13
  unsigned __int16 *v12; // rsi
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // di
  ULONG v15; // r8d
  int v16; // r15d
  unsigned __int16 v17; // cx
  __int16 v18; // bx
  USHORT v19; // bx
  ULONG v20; // r12d
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  signed __int64 v23; // r13
  WCHAR *v24; // r14
  int v25; // r12d
  WCHAR v26; // r8
  unsigned __int16 i; // dx
  unsigned __int16 v28; // cx
  ULONG v29; // r12d
  WCHAR v30; // r15
  unsigned __int16 v31; // [rsp+20h] [rbp-A8h]
  ULONG v32; // [rsp+24h] [rbp-A4h]
  USHORT *v33; // [rsp+28h] [rbp-A0h]
  int v34; // [rsp+30h] [rbp-98h]
  _WORD v35[32]; // [rsp+40h] [rbp-88h] BYREF

  LODWORD(v4) = 0;
  v33 = NonInclusivePrefixLength;
  v6 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 || !NonInclusivePrefixLength )
    return -1073741811;
  result = 0;
  if ( StringToSearch )
  {
    if ( (StringToSearch->Length & 1) != 0
      || (MaximumLength = StringToSearch->MaximumLength, (MaximumLength & 1) != 0)
      || StringToSearch->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (StringToSearch->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    result = 0;
    if ( CharSet )
    {
      if ( (CharSet->Length & 1) != 0
        || (v9 = CharSet->MaximumLength, (v9 & 1) != 0)
        || CharSet->Length > v9
        || v9 == 0xFFFF
        || !CharSet->Buffer && (CharSet->Length || v9) )
      {
        result = -1073741811;
      }
    }
    if ( result >= 0 )
    {
      Length = StringToSearch->Length;
      Buffer = CharSet->Buffer;
      v12 = StringToSearch->Buffer;
      v13 = StringToSearch->Length >> 1;
      v14 = CharSet->Length >> 1;
      v15 = Flags & 1;
      v31 = StringToSearch->Length;
      v32 = v15;
      if ( (Flags & 1) != 0 )
      {
        v16 = -1;
        v34 = -1;
        v12 = &v12[v13 - 1];
      }
      else
      {
        v16 = 1;
        v34 = 1;
      }
      if ( (Flags & 4) == 0 )
      {
        if ( v14 == 1 )
        {
          v17 = *Buffer;
          if ( (v6 & 2) != 0 )
          {
            if ( v13 )
            {
              do
              {
                if ( *v12 != v17 )
                  break;
                v12 += v16;
                --v13;
              }
              while ( v13 );
              goto LABEL_27;
            }
          }
          else if ( v13 )
          {
            do
            {
              if ( *v12 == v17 )
                break;
              v12 += v16;
              --v13;
            }
            while ( v13 );
            goto LABEL_27;
          }
        }
        else if ( v13 )
        {
          v20 = Flags & 2;
          while ( 1 )
          {
            v21 = *v12;
            v22 = 0;
            if ( v20 )
            {
              if ( v14 )
              {
                do
                {
                  if ( v21 == Buffer[v22] )
                    break;
                  ++v22;
                }
                while ( v22 < v14 );
                LODWORD(v4) = 0;
              }
              if ( v22 == v14 )
                goto LABEL_27;
            }
            else
            {
              if ( v14 )
              {
                do
                {
                  if ( v21 == Buffer[v22] )
                    break;
                  ++v22;
                }
                while ( v22 < v14 );
                LODWORD(v4) = 0;
              }
              if ( v22 != v14 )
                goto LABEL_27;
            }
            v12 += v16;
            if ( !--v13 )
              goto LABEL_27;
          }
        }
        return -1073741275;
      }
      if ( v14 <= 0x20u )
      {
        if ( v14 )
        {
          v4 = v14;
          v23 = (char *)Buffer - (char *)v35;
          v24 = v35;
          do
          {
            *v24 = RtlDowncaseUnicodeChar(*(WCHAR *)((char *)v24 + v23));
            ++v24;
            --v4;
          }
          while ( v4 );
        }
        if ( v13 )
        {
          v25 = v6 & 2;
          while ( 1 )
          {
            v26 = RtlDowncaseUnicodeChar(*v12);
            if ( v25 )
            {
              for ( i = v4; i < v14; ++i )
              {
                if ( v26 == v35[i] )
                  break;
              }
              if ( i == v14 )
                goto LABEL_79;
            }
            else
            {
              v28 = v4;
              if ( (unsigned __int16)v4 < v14 )
              {
                do
                {
                  if ( v26 == v35[v28] )
                    break;
                  ++v28;
                }
                while ( v28 < v14 );
                LODWORD(v4) = 0;
              }
              if ( v28 != v14 )
                goto LABEL_79;
            }
            v12 += v16;
            if ( !--v13 )
              goto LABEL_79;
          }
        }
        return -1073741275;
      }
      if ( v13 )
      {
        v29 = Flags & 2;
        while ( 1 )
        {
          v30 = RtlDowncaseUnicodeChar(*v12);
          if ( v29 )
          {
            do
            {
              if ( v30 == RtlDowncaseUnicodeChar(Buffer[(unsigned __int16)v4]) )
                break;
              LOWORD(v4) = v4 + 1;
            }
            while ( (unsigned __int16)v4 < v14 );
            if ( (_WORD)v4 == v14 )
              goto LABEL_78;
          }
          else
          {
            do
            {
              if ( v30 == RtlDowncaseUnicodeChar(Buffer[(unsigned __int16)v4]) )
                break;
              LOWORD(v4) = v4 + 1;
            }
            while ( (unsigned __int16)v4 < v14 );
            if ( (_WORD)v4 != v14 )
            {
LABEL_78:
              LODWORD(v4) = 0;
LABEL_79:
              Length = v31;
              NonInclusivePrefixLength = v33;
              v15 = v32;
LABEL_27:
              if ( v13 )
              {
                v18 = v13 - 1;
                if ( v15 )
                  v19 = 2 * v18;
                else
                  v19 = Length - 2 * v18;
                *NonInclusivePrefixLength = v19;
                return v4;
              }
              return -1073741275;
            }
          }
          LODWORD(v4) = 0;
          v12 += v34;
          if ( !--v13 )
            goto LABEL_79;
        }
      }
      return -1073741275;
    }
  }
  return result;
}
