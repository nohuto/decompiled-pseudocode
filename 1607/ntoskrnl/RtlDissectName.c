/*
 * XREFs of RtlDissectName @ 0x14008B970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlDissectName(UNICODE_STRING *Path, PUNICODE_STRING FirstName, PUNICODE_STRING RemainingName)
{
  unsigned int v6; // r8d
  wchar_t *Buffer; // rdx
  _BOOL8 i; // r11
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8
  unsigned int v11; // eax

  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  v6 = Path->Length >> 1;
  if ( v6 )
  {
    Buffer = Path->Buffer;
    v11 = *Buffer == 92;
    for ( i = *Buffer == 92; v11 < v6; ++v11 )
    {
      if ( Buffer[v11] == 92 )
        break;
    }
    v9 = 2 * (v11 - i);
    FirstName->Length = v9;
    FirstName->MaximumLength = v9;
    FirstName->Buffer = &Path->Buffer[i];
    if ( v11 < v6 )
    {
      v10 = 2 * (v6 - v11 - 1);
      RemainingName->Length = v10;
      RemainingName->MaximumLength = v10;
      RemainingName->Buffer = &Path->Buffer[v11 + 1];
    }
  }
}
