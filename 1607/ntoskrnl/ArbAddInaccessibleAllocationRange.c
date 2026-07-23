/*
 * XREFs of ArbAddInaccessibleAllocationRange @ 0x14055B1C4
 * Callers:
 *     IopMemInitialize @ 0x14055B5C0 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlAddRange @ 0x14055A080 (RtlAddRange.c)
 *     ArbpGetRegistryValue @ 0x14055ABBC (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddInaccessibleAllocationRange(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  const WCHAR *v6; // rdx
  int RegistryValue; // eax
  _DWORD *v8; // rdi
  const WCHAR *v9; // rdx
  char *v10; // r14
  char *i; // rsi
  int v12; // eax
  int v13; // ecx
  HANDLE KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v15; // [rsp+48h] [rbp-31h] BYREF
  int v16; // [rsp+50h] [rbp-29h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-21h]
  int v18; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v19; // [rsp+68h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  v16 = 7733366;
  v15 = 0LL;
  v17 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v18 = 2228258;
    v19 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v5 < 0 )
    {
LABEL_17:
      ZwClose(KeyHandle);
      return v5;
    }
    v6 = *(const WCHAR **)(a1 + 24);
    P = 0LL;
    RegistryValue = ArbpGetRegistryValue(Handle, v6, &P);
    v8 = P;
    v5 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) != 1 )
        goto LABEL_8;
      v9 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
      if ( v9[((unsigned __int64)*((unsigned int *)P + 3) >> 1) - 1] )
        goto LABEL_21;
      RegistryValue = ArbpGetRegistryValue(Handle, v9, &v15);
      v5 = RegistryValue;
      if ( RegistryValue >= 0 )
      {
        ExFreePoolWithTag(v8, 0);
        v8 = v15;
LABEL_8:
        if ( v8[1] == 10 )
        {
          v10 = (char *)v8 + (unsigned int)v8[2] + 32;
          for ( i = v10 + 8; i < &v10[32 * *((unsigned int *)v10 + 1) + 8]; i += 32 )
          {
            v12 = (unsigned __int8)i[1];
            v13 = *(_DWORD *)(a1 + 32);
            if ( v12 == v13 || (_BYTE)v12 == 7 && v13 == 3 )
            {
              v5 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 0x40u, 1u, 0LL, 0LL);
              if ( v5 < 0 )
                break;
            }
          }
          goto LABEL_14;
        }
LABEL_21:
        v5 = -1073741811;
LABEL_14:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        ZwClose(Handle);
        goto LABEL_17;
      }
    }
    if ( RegistryValue != -1073741670 )
      v5 = 0;
    goto LABEL_14;
  }
  return result;
}
