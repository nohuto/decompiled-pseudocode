/*
 * XREFs of PiDevCfgAppendMultiSz @ 0x140632414
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14063D598 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x1401CF258 (PnpMultiSzContainsString.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PiDevCfgAppendMultiSz(PUNICODE_STRING UnicodeString, const void **a2, const void **a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  wchar_t *StringRoutine; // rax
  unsigned int v11; // edx
  int Length; // ecx
  wchar_t *Buffer; // r12
  unsigned __int16 v14; // si
  unsigned __int16 v15; // si
  unsigned __int64 v16; // rax
  _WORD *i; // r14
  __int64 v18; // rax
  unsigned int v19; // r15d
  UNICODE_STRING v20; // xmm0
  UNICODE_STRING UnicodeStringa; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  *(_DWORD *)&UnicodeStringa.Length = 0;
  UnicodeStringa.Buffer = 0LL;
  if ( UnicodeString->Buffer )
  {
    if ( a2 )
    {
      v11 = UnicodeString->Length + *(unsigned __int16 *)a2 + 2;
    }
    else
    {
      if ( !a3 )
        goto LABEL_38;
      Length = UnicodeString->Length;
      v11 = Length + *(unsigned __int16 *)a3;
      if ( (_WORD)Length )
        v11 -= 2;
    }
    if ( v11 > 0xFFFE )
      goto LABEL_4;
    UnicodeStringa.Buffer = (wchar_t *)ExpAllocateStringRoutine(v11);
    Buffer = UnicodeStringa.Buffer;
    if ( !UnicodeStringa.Buffer )
      goto LABEL_6;
    if ( UnicodeString->Length <= 2u )
    {
      v14 = 0;
    }
    else
    {
      memmove(UnicodeStringa.Buffer, UnicodeString->Buffer, UnicodeString->Length);
      v14 = UnicodeString->Length - 2;
    }
    if ( a2 )
    {
      if ( a4 || !PnpMultiSzContainsString(UnicodeString->Buffer, (const WCHAR *)a2[1]) )
      {
        memmove((char *)UnicodeStringa.Buffer + v14, a2[1], *(unsigned __int16 *)a2);
        v15 = *(_WORD *)a2 + v14;
        v16 = (unsigned __int64)v15 >> 1;
        v14 = v15 + 2;
        UnicodeStringa.Buffer[v16] = 0;
      }
    }
    else if ( a3 )
    {
      if ( a4 )
      {
        memmove((char *)UnicodeStringa.Buffer + v14, a3[1], *(unsigned __int16 *)a3);
        v14 += *(_WORD *)a3 - 2;
      }
      else
      {
        for ( i = a3[1]; *i; i += (unsigned __int64)v19 >> 1 )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( i[v18] );
          v19 = 2 * v18 + 2;
          if ( !PnpMultiSzContainsString(UnicodeString->Buffer, i) )
          {
            memmove((char *)UnicodeStringa.Buffer + v14, i, v19);
            v14 += v19;
          }
        }
      }
    }
    UnicodeStringa.Length = v14 + 2;
    UnicodeStringa.MaximumLength = v14 + 2;
    Buffer[(unsigned __int64)v14 >> 1] = 0;
    RtlFreeAnsiString(UnicodeString);
    v20 = UnicodeStringa;
    *(_QWORD *)&UnicodeStringa.Length = 0LL;
    *UnicodeString = v20;
    UnicodeStringa.Buffer = 0LL;
    goto LABEL_39;
  }
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( PnpDuplicateUnicodeString((__int64)UnicodeString, (__int64)a3) )
        goto LABEL_39;
      goto LABEL_6;
    }
LABEL_38:
    v4 = -1073741811;
    goto LABEL_39;
  }
  v9 = *(unsigned __int16 *)a2 + 4;
  if ( v9 > 0xFFFE )
  {
LABEL_4:
    v4 = -2147483643;
    goto LABEL_39;
  }
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  UnicodeString->Buffer = StringRoutine;
  if ( !StringRoutine )
  {
LABEL_6:
    v4 = -1073741670;
    goto LABEL_39;
  }
  UnicodeString->Length = *(_WORD *)a2;
  if ( *(_WORD *)a2 )
  {
    memmove(StringRoutine, a2[1], *(unsigned __int16 *)a2);
    UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
    UnicodeString->Length += 2;
  }
  UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
  UnicodeString->Length += 2;
  UnicodeString->MaximumLength = UnicodeString->Length;
LABEL_39:
  RtlFreeAnsiString(&UnicodeStringa);
  return v4;
}
