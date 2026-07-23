/*
 * XREFs of sxsisol_CanonicalizeFullPathFileName @ 0x180016948
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall sxsisol_CanonicalizeFullPathFileName(
        PUNICODE_STRING FileName,
        __int64 StaticString,
        PUNICODE_STRING DynamicString,
        __int64 a4)
{
  bool v4; // r14
  _UNICODE_STRING *v6; // rbx
  RTL_PATH_TYPE v8; // r11d
  NTSTATUS FullPathName_Ustr; // ebx
  PUNICODE_STRING v10; // rcx
  _UNICODE_STRING v11; // xmm0
  unsigned __int16 v12; // ax
  unsigned __int16 *v13; // rcx
  unsigned __int16 *Buffer; // rax
  _UNICODE_STRING v16; // [rsp+40h] [rbp-10h]
  RTL_PATH_TYPE InputPathType; // [rsp+70h] [rbp+20h] BYREF
  PUNICODE_STRING StringUsed; // [rsp+88h] [rbp+38h] BYREF

  StringUsed = 0LL;
  v4 = 0;
  v6 = (_UNICODE_STRING *)StaticString;
  if ( !FileName || DynamicString && DynamicString->Buffer )
  {
    FullPathName_Ustr = -1073741811;
  }
  else
  {
    v8 = (unsigned int)RtlDetermineDosPathNameType_Ustr(FileName);
    InputPathType = v8;
    if ( ((v8 - 1) & 0xFFFFFFFA) != 0 || v8 == RtlPathTypeRelative )
      goto LABEL_11;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          FileName,
                          v6,
                          DynamicString,
                          &StringUsed,
                          0LL,
                          0LL,
                          &InputPathType,
                          0LL);
    if ( FullPathName_Ustr >= 0 )
    {
      v10 = StringUsed;
      v11 = *StringUsed;
      v16 = *StringUsed;
      if ( InputPathType == RtlPathTypeLocalDevice && (Buffer = FileName->Buffer, Buffer[5] == 58) && Buffer[6] == 92 )
      {
        v16.Buffer += 4;
        StaticString = 65528LL;
        FileName->Buffer = Buffer + 4;
        FileName->Length -= 8;
        v12 = v16.Length - 8;
        FileName->MaximumLength -= 8;
        v16.MaximumLength -= 8;
        v16.Length -= 8;
        v11 = v16;
      }
      else
      {
        v12 = (unsigned __int16)*StringUsed;
      }
      if ( FileName->Length > v12 )
      {
        v4 = v10 == DynamicString;
        *FileName = v11;
      }
LABEL_11:
      FullPathName_Ustr = 0;
      if ( v4 )
        return (unsigned int)FullPathName_Ustr;
    }
  }
  v13 = DynamicString->Buffer;
  if ( v13 )
  {
    NtdllpFreeStringRoutine(v13, StaticString, DynamicString, a4);
    *(_QWORD *)&DynamicString->Length = 0LL;
    DynamicString->Buffer = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
