/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x140682918
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015B488 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringPrintf @ 0x14015DE04 (RtlUnicodeStringPrintf.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PnpRegSzToString @ 0x1404E7044 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(
        __int64 a1,
        unsigned __int16 *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4)
{
  unsigned __int16 v4; // ax
  NTSTATUS v9; // ebx
  _WORD *v10; // rdi
  _WORD *v11; // rcx
  unsigned __int16 Length; // bx
  wchar_t *StringRoutine; // rax
  const WCHAR *v14; // r14
  NTSTATUS RegistryValue; // ebx
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned __int16 v19; // r12
  int v20; // r14d
  __int64 v21; // r14
  UNICODE_STRING v22; // xmm0
  wchar_t *v23; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  int v27; // [rsp+50h] [rbp-31h] BYREF
  char *v28; // [rsp+58h] [rbp-29h]
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = *a2;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( v4 > 4u && (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 == 37) && v11[((unsigned __int64)v4 >> 1) - 1] == 37 )
  {
    v27 = 0;
    RemainingString.Buffer = L"Strings";
    ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
    v28 = 0LL;
    ObjectAttributes.ObjectName = &RemainingString;
    *(_DWORD *)&RemainingString.Length = 1048590;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      UnicodeString.Length = *a2 - 4;
      Length = UnicodeString.Length;
      UnicodeString.MaximumLength = UnicodeString.Length + 2;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(UnicodeString.Length + 2));
      UnicodeString.Buffer = StringRoutine;
      v14 = StringRoutine;
      if ( !StringRoutine )
      {
LABEL_6:
        v9 = -1073741670;
        goto LABEL_31;
      }
      memmove(StringRoutine, (const void *)(*((_QWORD *)a2 + 1) + 2LL), Length);
      v14[(unsigned __int64)Length >> 1] = 0;
      RegistryValue = IopGetRegistryValue(KeyHandle, v14, 0, &P);
      RtlFreeAnsiString(&UnicodeString);
      if ( RegistryValue >= 0 )
      {
        v10 = P;
        if ( *((_DWORD *)P + 1) != 1
          || (v16 = *((_DWORD *)P + 3), v16 < 2)
          || (v17 = *((unsigned int *)P + 2), *(_WORD *)((char *)P + 2 * ((unsigned __int64)v16 >> 1) + v17 - 2)) )
        {
          ExFreePoolWithTag(P, 0);
          v10 = 0LL;
        }
        else
        {
          PnpRegSzToString((char *)P + v17, v16, &P);
          LOWORD(v27) = (_WORD)P;
          HIWORD(v27) = v10[6];
          v28 = (char *)v10 + *((unsigned int *)v10 + 2);
        }
      }
    }
    v18 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
    if ( v28 )
      v18 += (unsigned __int16)v27 + 2;
    if ( (unsigned __int64)v18 + 2 > 0xFFFE )
    {
      v9 = -1073741562;
      goto LABEL_31;
    }
    DestinationString.Length = v18;
    DestinationString.MaximumLength = v18 + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v18 + 2));
    if ( !DestinationString.Buffer )
      goto LABEL_6;
    v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
    if ( v9 >= 0 )
    {
      v19 = DestinationString.Length;
      v20 = DestinationString.Length >> 1;
      if ( v28 )
      {
        v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v27);
        if ( v9 < 0 )
          goto LABEL_31;
        DestinationString.Length = RemainingString.Length + v19;
        v21 = (unsigned int)(v20 + 1);
      }
      else
      {
        v21 = v20 - (*a2 >> 1);
      }
      v22 = DestinationString;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      *a3 = v22;
      if ( a4 )
        RtlInitUnicodeString(a4, &a3->Buffer[v21]);
    }
  }
  else
  {
    if ( *((_QWORD *)a2 + 1) )
    {
      v23 = (wchar_t *)ExpAllocateStringRoutine(a2[1]);
      a3->Buffer = v23;
      if ( !v23 )
        goto LABEL_6;
      memmove(v23, *((const void **)a2 + 1), a2[1]);
    }
    else
    {
      a3->Buffer = 0LL;
    }
    a3->Length = *a2;
    a3->MaximumLength = a2[1];
    if ( a4 )
      *a4 = *a3;
  }
LABEL_31:
  RtlFreeAnsiString(&DestinationString);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
