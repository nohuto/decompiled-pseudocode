/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryDword @ 0x14012C1B4 (PnpValidateRegistryDword.c)
 *     PnpValidateRegistryString @ 0x14012C344 (PnpValidateRegistryString.c)
 *     PnpValidateStringData @ 0x14012C378 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x14012F998 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpRegSzToString @ 0x1403B9CD8 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // ebx
  unsigned int *v7; // r15
  __int64 v8; // r8
  int ObjectProperty; // eax
  unsigned int v10; // esi
  int v11; // r14d
  _DWORD *PoolWithTag; // rdi
  int v14; // ecx
  _DWORD *v15; // rax
  int v16; // [rsp+28h] [rbp-61h]
  PVOID P; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v19; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-9h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF
  int v22; // [rsp+A0h] [rbp+17h]

  *(_QWORD *)&GuidString.Length = 0LL;
  P = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &GuidString);
  if ( RegistryValue < 0 )
    goto LABEL_57;
  v7 = *(unsigned int **)&GuidString.Length;
  if ( !PnpValidateRegistryString(*(_DWORD **)&GuidString.Length) )
    goto LABEL_20;
  PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], &GuidString);
  GuidString.MaximumLength = *((_WORD *)v7 + 6);
  GuidString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue < 0 )
    goto LABEL_15;
  ExFreePoolWithTag(v7, 0);
  *(_QWORD *)&GuidString.Length = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &GuidString);
  if ( RegistryValue < 0 )
  {
LABEL_57:
    v7 = *(unsigned int **)&GuidString.Length;
  }
  else
  {
    v7 = *(unsigned int **)&GuidString.Length;
    if ( !PnpValidateRegistryDword(*(__int64 *)&GuidString.Length) )
      goto LABEL_20;
    v8 = *a1;
    v22 = *(unsigned int *)((char *)v7 + v7[2]);
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0LL,
                       *(_QWORD *)(v8 + 48),
                       1u,
                       0LL,
                       v16,
                       (__int64)&Guid,
                       (__int64)&v19,
                       &P,
                       &GuidString,
                       0);
    RegistryValue = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( ObjectProperty == -1073741275 )
      {
        RegistryValue = 0;
        goto LABEL_56;
      }
    }
    else
    {
      if ( (unsigned int)v19 > 0x2012 )
        goto LABEL_46;
      if ( (_DWORD)v19 == 8210 )
      {
        v10 = *(_DWORD *)&GuidString.Length;
        if ( (unsigned __int8)PnpValidateMultiSzData(P, *(unsigned int *)&GuidString.Length) )
        {
          v11 = 7;
          goto LABEL_13;
        }
        goto LABEL_20;
      }
      if ( (unsigned int)v19 > 0xD )
      {
        if ( (_DWORD)v19 == 18 )
          goto LABEL_11;
        if ( (_DWORD)v19 != 17 )
        {
          if ( (_DWORD)v19 == 20 )
            goto LABEL_11;
          if ( (unsigned int)v19 > 0x15 )
          {
            if ( (unsigned int)v19 > 0x18 )
            {
              if ( (_DWORD)v19 != 25 )
                goto LABEL_46;
LABEL_11:
              v10 = *(_DWORD *)&GuidString.Length;
              if ( PnpValidateStringData((__int64)P, *(unsigned int *)&GuidString.Length) )
              {
                v11 = 1;
LABEL_13:
                PoolWithTag = P;
                P = 0LL;
LABEL_14:
                *(_DWORD *)(a3 + 32) = v11;
                *(_DWORD *)(a3 + 36) = v10;
                *(_QWORD *)(a3 + 40) = PoolWithTag;
                goto LABEL_15;
              }
              goto LABEL_20;
            }
            goto LABEL_47;
          }
          goto LABEL_46;
        }
        if ( *(_DWORD *)&GuidString.Length == 1 )
        {
          v11 = 4;
          v10 = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( PoolWithTag )
          {
            v14 = *(_BYTE *)P == 0xFF;
            goto LABEL_29;
          }
          goto LABEL_28;
        }
LABEL_20:
        RegistryValue = -1073741823;
        goto LABEL_15;
      }
      if ( (_DWORD)v19 != 13 )
      {
        if ( (unsigned int)v19 > 5 )
        {
          if ( (unsigned int)v19 <= 7 )
          {
LABEL_47:
            if ( *(_DWORD *)&GuidString.Length == 4 )
            {
              v11 = 4;
              v10 = 4;
              goto LABEL_13;
            }
            goto LABEL_20;
          }
          if ( (unsigned int)v19 <= 9 )
          {
            v10 = 8;
            if ( *(_DWORD *)&GuidString.Length == 8 )
            {
              v11 = 11;
              goto LABEL_13;
            }
            goto LABEL_20;
          }
LABEL_46:
          v10 = *(_DWORD *)&GuidString.Length;
          v11 = 3;
          goto LABEL_13;
        }
        if ( (unsigned int)v19 >= 4 )
        {
          if ( *(_DWORD *)&GuidString.Length != 2 )
            goto LABEL_20;
          v11 = 4;
          v10 = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( PoolWithTag )
          {
            v14 = *(unsigned __int16 *)P;
            goto LABEL_29;
          }
LABEL_28:
          RegistryValue = -1073741670;
          goto LABEL_15;
        }
        if ( (unsigned int)v19 > 1 )
        {
          if ( *(_DWORD *)&GuidString.Length != 1 )
            goto LABEL_20;
          v11 = 4;
          v10 = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( PoolWithTag )
          {
            v14 = *(unsigned __int8 *)P;
LABEL_29:
            *PoolWithTag = v14;
            goto LABEL_14;
          }
          goto LABEL_28;
        }
LABEL_56:
        PoolWithTag = 0LL;
        v10 = 0;
        v11 = 0;
        goto LABEL_14;
      }
      if ( *(_DWORD *)&GuidString.Length != 16 )
        goto LABEL_20;
      RegistryValue = RtlStringFromGUIDEx((PGUID)P, &UnicodeString, 1u);
      if ( RegistryValue >= 0 )
      {
        v10 = UnicodeString.Length + 2;
        v11 = 1;
        v15 = ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
        PoolWithTag = v15;
        if ( v15 )
        {
          memmove(v15, UnicodeString.Buffer, v10);
          goto LABEL_14;
        }
        goto LABEL_28;
      }
    }
  }
LABEL_15:
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
