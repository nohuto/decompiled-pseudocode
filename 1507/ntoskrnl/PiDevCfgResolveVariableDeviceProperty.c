/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x14068A004
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PnpRegSzToString @ 0x1404E7044 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  __int64 v7; // r15
  int v8; // r14d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  int ObjectProperty; // eax
  unsigned int v13; // esi
  _DWORD *v14; // rdi
  int v15; // ecx
  _DWORD *PoolWithTag; // rax
  unsigned __int64 v17; // rax
  int v19; // [rsp+28h] [rbp-61h]
  PVOID P; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-9h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF
  int v25; // [rsp+A0h] [rbp+17h]

  *(_QWORD *)&GuidString.Length = 0LL;
  P = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &GuidString);
  if ( RegistryValue >= 0 )
  {
    v7 = *(_QWORD *)&GuidString.Length;
    v8 = 1;
    if ( *(_DWORD *)(*(_QWORD *)&GuidString.Length + 4LL) != 1 )
      goto LABEL_46;
    v9 = *(_DWORD *)(*(_QWORD *)&GuidString.Length + 12LL);
    if ( v9 < 2 )
      goto LABEL_46;
    v10 = *(unsigned int *)(*(_QWORD *)&GuidString.Length + 8LL);
    if ( *(_WORD *)(v10 + 2 * ((unsigned __int64)v9 >> 1) + *(_QWORD *)&GuidString.Length - 2) )
      goto LABEL_46;
    PnpRegSzToString((_WORD *)(*(_QWORD *)&GuidString.Length + v10), v9, &GuidString);
    GuidString.MaximumLength = *(_WORD *)(v7 + 12);
    GuidString.Buffer = (wchar_t *)(v7 + *(unsigned int *)(v7 + 8));
    RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
    if ( RegistryValue < 0 )
      goto LABEL_61;
    ExFreePoolWithTag((PVOID)v7, 0);
    *(_QWORD *)&GuidString.Length = 0LL;
    RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &GuidString);
    if ( RegistryValue >= 0 )
    {
      v7 = *(_QWORD *)&GuidString.Length;
      if ( *(_DWORD *)(*(_QWORD *)&GuidString.Length + 4LL) != 4
        || *(_DWORD *)(*(_QWORD *)&GuidString.Length + 12LL) != 4 )
      {
        goto LABEL_46;
      }
      v11 = *a1;
      v25 = *(_DWORD *)(*(unsigned int *)(*(_QWORD *)&GuidString.Length + 8LL) + *(_QWORD *)&GuidString.Length);
      ObjectProperty = PnpGetObjectProperty(
                         0x47706E50u,
                         0LL,
                         *(_QWORD *)(v11 + 48),
                         1,
                         0LL,
                         v19,
                         (__int64)&Guid,
                         (__int64)&v22,
                         &P,
                         &GuidString,
                         0);
      RegistryValue = ObjectProperty;
      if ( ObjectProperty < 0 )
      {
        if ( ObjectProperty != -1073741275 )
          goto LABEL_61;
        RegistryValue = 0;
        goto LABEL_58;
      }
      if ( (unsigned int)v22 <= 0x2012 )
      {
        if ( (_DWORD)v22 == 8210 )
        {
          v13 = *(_DWORD *)&GuidString.Length;
          if ( *(_DWORD *)&GuidString.Length < 4u
            || (v17 = (unsigned __int64)*(unsigned int *)&GuidString.Length >> 1, *((_WORD *)P + v17 - 1))
            || *((_WORD *)P + v17 - 2) )
          {
            if ( *(_DWORD *)&GuidString.Length != 2 || *(_WORD *)P )
              goto LABEL_46;
          }
          v8 = 7;
          goto LABEL_40;
        }
        if ( (unsigned int)v22 <= 0xD )
        {
          if ( (_DWORD)v22 == 13 )
          {
            if ( *(_DWORD *)&GuidString.Length == 16 )
            {
              RegistryValue = RtlStringFromGUIDEx((unsigned int *)P, (__int64)&UnicodeString, 1);
              if ( RegistryValue < 0 )
                goto LABEL_61;
              v13 = UnicodeString.Length + 2;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x63647050u);
              v14 = PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_19;
              memmove(PoolWithTag, UnicodeString.Buffer, v13);
              goto LABEL_59;
            }
            goto LABEL_46;
          }
          if ( (unsigned int)v22 <= 5 )
          {
            if ( (unsigned int)v22 < 4 )
            {
              if ( (unsigned int)v22 > 1 )
              {
                if ( *(_DWORD *)&GuidString.Length == 1 )
                {
                  v8 = 4;
                  v13 = 4;
                  v14 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
                  if ( !v14 )
                  {
LABEL_19:
                    RegistryValue = -1073741670;
                    goto LABEL_61;
                  }
                  v15 = *(unsigned __int8 *)P;
                  goto LABEL_21;
                }
LABEL_46:
                RegistryValue = -1073741823;
                goto LABEL_61;
              }
LABEL_58:
              v14 = 0LL;
              v13 = 0;
              v8 = 0;
              goto LABEL_59;
            }
            if ( *(_DWORD *)&GuidString.Length != 2 )
              goto LABEL_46;
            v8 = 4;
            v13 = 4;
            v14 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( !v14 )
              goto LABEL_19;
            v15 = *(unsigned __int16 *)P;
LABEL_21:
            *v14 = v15;
LABEL_59:
            *(_DWORD *)(a3 + 32) = v8;
            *(_DWORD *)(a3 + 36) = v13;
            *(_QWORD *)(a3 + 40) = v14;
            goto LABEL_61;
          }
          if ( (unsigned int)v22 > 7 )
          {
            if ( (unsigned int)v22 <= 9 )
            {
              v13 = 8;
              if ( *(_DWORD *)&GuidString.Length != 8 )
                goto LABEL_46;
              v8 = 11;
              goto LABEL_40;
            }
            goto LABEL_39;
          }
LABEL_42:
          if ( *(_DWORD *)&GuidString.Length != 4 )
            goto LABEL_46;
          v8 = 4;
          v13 = 4;
          goto LABEL_40;
        }
        if ( (_DWORD)v22 == 17 )
        {
          if ( *(_DWORD *)&GuidString.Length != 1 )
            goto LABEL_46;
          v8 = 4;
          v13 = 4;
          v14 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( !v14 )
            goto LABEL_19;
          v15 = *(_BYTE *)P == 0xFF;
          goto LABEL_21;
        }
        if ( (_DWORD)v22 == 18 || (_DWORD)v22 == 20 )
          goto LABEL_44;
        if ( (unsigned int)v22 > 0x15 )
        {
          if ( (unsigned int)v22 <= 0x18 )
            goto LABEL_42;
          if ( (_DWORD)v22 == 25 )
          {
LABEL_44:
            v13 = *(_DWORD *)&GuidString.Length;
            if ( *(_DWORD *)&GuidString.Length < 2u )
              goto LABEL_46;
            v14 = P;
            if ( *((_WORD *)P + ((unsigned __int64)*(unsigned int *)&GuidString.Length >> 1) - 1) )
              goto LABEL_46;
LABEL_41:
            P = 0LL;
            goto LABEL_59;
          }
        }
      }
LABEL_39:
      v13 = *(_DWORD *)&GuidString.Length;
      v8 = 3;
LABEL_40:
      v14 = P;
      goto LABEL_41;
    }
  }
  v7 = *(_QWORD *)&GuidString.Length;
LABEL_61:
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
    ExFreePoolWithTag((PVOID)v7, 0);
  return (unsigned int)RegistryValue;
}
