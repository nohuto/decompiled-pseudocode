/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180018C40
 * Callers:
 *     sxsisol_CanonicalizeFullPathFileName @ 0x180016948 (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  NTSTATUS v22; // ebx
  unsigned __int64 i; // rax
  unsigned __int16 v25; // bx
  unsigned __int16 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned __int16 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+88h] [rbp+20h]

  v33 = 0LL;
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
      v22 = -1073741811;
      goto LABEL_22;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    v34 = MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &FileName->Length,
                          MaximumLength,
                          Buffer,
                          &v33,
                          NameInvalid,
                          (__int64)&FilePartPrefixCch);
    LOWORD(v21) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( StaticString && FullPathName_Ustr < (unsigned int)BytesRequired )
      {
        StaticString->Length = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v33 )
            v28 = (signed __int64)(v33 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v22 = 0;
      }
      else if ( DynamicString )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v34;
          DynamicString->Length = FullPathName_Ustr;
          v11[(unsigned __int64)FullPathName_Ustr >> 1] = 0;
          if ( v13 )
          {
            if ( v33 )
              v30 = (v33 - (__int64)v11) >> 1;
            else
              v30 = 0LL;
            *v13 = v30;
          }
          if ( StringUsed )
            *StringUsed = DynamicString;
          DynamicString->Buffer = v11;
          v22 = 0;
          goto LABEL_22;
        }
        for ( i = FullPathName_Ustr + 2LL; ; i = v21 + 2 )
        {
          if ( i > 0xFFFE )
          {
            v22 = -1073741562;
            goto LABEL_18;
          }
          v25 = v21 + 2;
          v26 = v25;
          StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v25);
          if ( !StringRoutine )
          {
            v22 = -1073741801;
            goto LABEL_18;
          }
          v27 = RtlGetFullPathName_Ustr(
                  &FileName->Length,
                  (unsigned int)v25 - 2,
                  StringRoutine,
                  &v33,
                  NameInvalid,
                  (__int64)&FilePartPrefixCch);
          v21 = v27;
          if ( !v27 )
          {
            v22 = -1073741773;
            goto LABEL_18;
          }
          if ( v27 <= (unsigned __int64)v26 - 2 )
            break;
          NtdllpFreeStringRoutine(StringRoutine, v18, v19, v20);
          StringRoutine = 0LL;
        }
        if ( v13 )
        {
          if ( v33 )
            v31 = (v33 - (__int64)StringRoutine) >> 1;
          else
            v31 = 0LL;
          *v13 = v31;
        }
        StringRoutine[v21 >> 1] = 0;
        DynamicString->Buffer = StringRoutine;
        DynamicString->Length = v21;
        DynamicString->MaximumLength = v26;
        if ( StringUsed )
          *StringUsed = DynamicString;
        StringRoutine = 0LL;
        v22 = 0;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v22 = -1073741789;
      }
    }
    else
    {
      v22 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11, v18, v19, v20);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine, v18, v19, v20);
LABEL_22:
    *InputPathType = (int)FilePartPrefixCch;
    return v22;
  }
  MaximumLength = 520;
  v34 = 520LL;
  v29 = (unsigned __int16 *)NtdllpAllocateStringRoutine(0x208uLL);
  v11 = v29;
  if ( v29 )
  {
    Buffer = v29;
    goto LABEL_11;
  }
  return -1073741801;
}
