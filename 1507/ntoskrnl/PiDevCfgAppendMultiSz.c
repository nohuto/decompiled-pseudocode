/*
 * XREFs of PiDevCfgAppendMultiSz @ 0x140682470
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140689244 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgAppendMultiSz(PUNICODE_STRING UnicodeString, unsigned __int16 *a2, const void **a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // eax
  wchar_t *StringRoutine; // rax
  unsigned __int16 Length; // ax
  wchar_t *v11; // rax
  unsigned int v12; // edx
  int v13; // ecx
  wchar_t *Buffer; // r13
  unsigned __int16 v15; // r14
  wchar_t *v16; // rsi
  unsigned __int16 v17; // r14
  unsigned __int64 v18; // rax
  const WCHAR *i; // rsi
  __int64 v20; // rax
  wchar_t *v21; // r15
  unsigned int v22; // r15d
  UNICODE_STRING v23; // xmm0
  UNICODE_STRING UnicodeStringa; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int Size; // [rsp+80h] [rbp+30h]

  v4 = 0;
  *(_DWORD *)&UnicodeStringa.Length = 0;
  UnicodeStringa.Buffer = 0LL;
  if ( !UnicodeString->Buffer )
  {
    if ( a2 )
    {
      v8 = *a2 + 4;
      if ( v8 > 0xFFFE )
      {
LABEL_4:
        v4 = -2147483643;
        goto LABEL_50;
      }
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v8);
      UnicodeString->Buffer = StringRoutine;
      if ( !StringRoutine )
      {
LABEL_6:
        v4 = -1073741670;
        goto LABEL_50;
      }
      UnicodeString->Length = *a2;
      if ( *a2 )
      {
        memmove(StringRoutine, *((const void **)a2 + 1), *a2);
        UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
        UnicodeString->Length += 2;
      }
      UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
      UnicodeString->Length += 2;
      Length = UnicodeString->Length;
LABEL_10:
      UnicodeString->MaximumLength = Length;
      goto LABEL_50;
    }
    if ( a3 )
    {
      if ( a3[1] )
      {
        v11 = (wchar_t *)ExpAllocateStringRoutine(*((unsigned __int16 *)a3 + 1));
        UnicodeString->Buffer = v11;
        if ( !v11 )
          goto LABEL_6;
        memmove(v11, a3[1], *((unsigned __int16 *)a3 + 1));
      }
      else
      {
        UnicodeString->Buffer = 0LL;
      }
      UnicodeString->Length = *(_WORD *)a3;
      Length = *((_WORD *)a3 + 1);
      goto LABEL_10;
    }
LABEL_49:
    v4 = -1073741811;
    goto LABEL_50;
  }
  if ( a2 )
  {
    v12 = UnicodeString->Length + *a2 + 2;
  }
  else
  {
    if ( !a3 )
      goto LABEL_49;
    v13 = UnicodeString->Length;
    v12 = v13 + *(unsigned __int16 *)a3;
    if ( (_WORD)v13 )
      v12 -= 2;
  }
  if ( v12 > 0xFFFE )
    goto LABEL_4;
  UnicodeStringa.Buffer = (wchar_t *)ExpAllocateStringRoutine(v12);
  Buffer = UnicodeStringa.Buffer;
  if ( !UnicodeStringa.Buffer )
    goto LABEL_6;
  if ( UnicodeString->Length <= 2u )
  {
    v15 = 0;
  }
  else
  {
    memmove(UnicodeStringa.Buffer, UnicodeString->Buffer, UnicodeString->Length);
    v15 = UnicodeString->Length - 2;
  }
  if ( a2 )
  {
    if ( !a4 )
    {
      v16 = UnicodeString->Buffer;
      RtlInitUnicodeString(&DestinationString, *((PCWSTR *)a2 + 1));
      while ( *v16 )
      {
        RtlInitUnicodeString(&String2, v16);
        if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
          goto LABEL_48;
        v16 += ((unsigned __int64)String2.Length >> 1) + 1;
      }
    }
    memmove((char *)UnicodeStringa.Buffer + v15, *((const void **)a2 + 1), *a2);
    v17 = *a2 + v15;
    v18 = (unsigned __int64)v17 >> 1;
    v15 = v17 + 2;
    UnicodeStringa.Buffer[v18] = 0;
  }
  else if ( a3 )
  {
    if ( a4 )
    {
      memmove((char *)UnicodeStringa.Buffer + v15, a3[1], *(unsigned __int16 *)a3);
      v15 += *(_WORD *)a3 - 2;
    }
    else
    {
      for ( i = (const WCHAR *)a3[1]; *i; i += (unsigned __int64)v22 >> 1 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( i[v20] );
        v21 = UnicodeString->Buffer;
        Size = 2 * v20 + 2;
        RtlInitUnicodeString(&DestinationString, i);
        while ( 1 )
        {
          if ( !*v21 )
          {
            v22 = Size;
            memmove((char *)UnicodeStringa.Buffer + v15, i, Size);
            v15 += Size;
            goto LABEL_46;
          }
          RtlInitUnicodeString(&String2, v21);
          if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
            break;
          v21 += ((unsigned __int64)String2.Length >> 1) + 1;
        }
        v22 = Size;
LABEL_46:
        ;
      }
    }
  }
LABEL_48:
  UnicodeStringa.Length = v15 + 2;
  UnicodeStringa.MaximumLength = v15 + 2;
  Buffer[(unsigned __int64)v15 >> 1] = 0;
  RtlFreeAnsiString(UnicodeString);
  v23 = UnicodeStringa;
  *(_QWORD *)&UnicodeStringa.Length = 0LL;
  *UnicodeString = v23;
  UnicodeStringa.Buffer = 0LL;
LABEL_50:
  RtlFreeAnsiString(&UnicodeStringa);
  return v4;
}
