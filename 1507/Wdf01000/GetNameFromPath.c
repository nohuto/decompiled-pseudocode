/*
 * XREFs of GetNameFromPath @ 0x1C0005C84
 * Callers:
 *     GetImageName @ 0x1C00059B4 (GetImageName.c)
 *     FxLibraryCommonRegisterClient @ 0x1C002753C (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rcx
  unsigned __int16 *Buffer; // rax
  unsigned __int16 *v7; // rax
  bool v8; // zf
  unsigned __int16 v9; // ax

  if ( Path->Length < 2u )
  {
    *(_QWORD *)&Name->Length = 0LL;
    Name->Buffer = 0LL;
  }
  else
  {
    Length = Path->Length;
    v4 = Path->Buffer - 1;
    Name->Length = 2;
    v5 = (unsigned __int16 *)((char *)v4 + Length);
    Name->Buffer = v5;
    if ( v5 < Path->Buffer )
    {
LABEL_10:
      Name->Length -= 2;
      ++Name->Buffer;
      v9 = Name->Length;
    }
    else
    {
      while ( 1 )
      {
        Buffer = Name->Buffer;
        if ( *Buffer == 92 )
          break;
        Name->Length += 2;
        v7 = Buffer - 1;
        Name->Buffer = v7;
        if ( v7 < Path->Buffer )
          goto LABEL_10;
      }
      ++Name->Buffer;
      v8 = Name->Length == 2;
      Name->Length -= 2;
      v9 = Name->Length;
      if ( v8 )
        Name->Buffer = 0LL;
    }
    Name->MaximumLength = v9;
  }
}
