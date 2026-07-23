/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180060240
 * Callers:
 *     sxsisol_CanonicalizeFullPathFileName @ 0x1800259F8 (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlGetFullPathName_Ustr @ 0x180026020 (RtlGetFullPathName_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UstrEx(
        PUNICODE_STRING FileName,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *StringUsed,
        SIZE_T *FilePartPrefixCch,
        PBOOLEAN NameInvalid,
        RTL_PATH_TYPE *InputPathType,
        SIZE_T *BytesRequired)
{
  unsigned __int16 *v11; // r12
  SIZE_T *v12; // r13
  SIZE_T *v13; // r15
  unsigned __int16 *StringRoutine; // r14
  unsigned __int16 MaximumLength; // bx
  unsigned __int16 *Buffer; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v18; // rbx
  NTSTATUS v19; // ebx
  unsigned __int64 i; // rax
  unsigned __int16 v22; // bx
  unsigned __int16 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned __int16 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v11 = 0LL;
  if ( StringUsed )
    *StringUsed = 0LL;
  v12 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  v13 = FilePartPrefixCch;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  StringRoutine = 0LL;
  SLODWORD(FilePartPrefixCch) = *InputPathType;
  if ( StaticString )
  {
    if ( DynamicString && !StringUsed )
    {
      v19 = -1073741811;
      goto LABEL_22;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    v31 = MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &FileName->Length,
                          MaximumLength,
                          Buffer,
                          &v30,
                          NameInvalid,
                          (__int64)&FilePartPrefixCch);
    LOWORD(v18) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( StaticString && FullPathName_Ustr < (unsigned int)BytesRequired )
      {
        StaticString->Length = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v30 )
            v25 = (signed __int64)(v30 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v25 = 0LL;
          *v13 = v25;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v19 = 0;
      }
      else if ( DynamicString )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v31;
          DynamicString->Length = FullPathName_Ustr;
          v11[(unsigned __int64)FullPathName_Ustr >> 1] = 0;
          if ( v13 )
          {
            if ( v30 )
              v27 = (v30 - (__int64)v11) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          if ( StringUsed )
            *StringUsed = DynamicString;
          DynamicString->Buffer = v11;
          v19 = 0;
          goto LABEL_22;
        }
        for ( i = FullPathName_Ustr + 2LL; ; i = v18 + 2 )
        {
          if ( i > 0xFFFE )
          {
            v19 = -1073741562;
            goto LABEL_18;
          }
          v22 = v18 + 2;
          v23 = v22;
          StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v22);
          if ( !StringRoutine )
          {
            v19 = -1073741801;
            goto LABEL_18;
          }
          v24 = RtlGetFullPathName_Ustr(
                  &FileName->Length,
                  (unsigned int)v22 - 2,
                  StringRoutine,
                  &v30,
                  NameInvalid,
                  (__int64)&FilePartPrefixCch);
          v18 = v24;
          if ( !v24 )
          {
            v19 = -1073741773;
            goto LABEL_18;
          }
          if ( v24 <= (unsigned __int64)v23 - 2 )
            break;
          NtdllpFreeStringRoutine(StringRoutine);
          StringRoutine = 0LL;
        }
        if ( v13 )
        {
          if ( v30 )
            v28 = (v30 - (__int64)StringRoutine) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        StringRoutine[v18 >> 1] = 0;
        DynamicString->Buffer = StringRoutine;
        DynamicString->Length = v18;
        DynamicString->MaximumLength = v23;
        if ( StringUsed )
          *StringUsed = DynamicString;
        StringRoutine = 0LL;
        v19 = 0;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v19 = -1073741789;
      }
    }
    else
    {
      v19 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine);
LABEL_22:
    *InputPathType = (int)FilePartPrefixCch;
    return v19;
  }
  MaximumLength = 520;
  v31 = 520LL;
  v26 = (unsigned __int16 *)NtdllpAllocateStringRoutine(0x208uLL);
  v11 = v26;
  if ( v26 )
  {
    Buffer = v26;
    goto LABEL_11;
  }
  return -1073741801;
}
