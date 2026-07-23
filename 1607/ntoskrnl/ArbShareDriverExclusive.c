/*
 * XREFs of ArbShareDriverExclusive @ 0x140558810
 * Callers:
 *     ArbFindSuitableRange @ 0x14055A244 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     RtlGetNextRange @ 0x14055A5F0 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x14055A6A4 (RtlGetFirstRange.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rax
  PRTL_RANGE v8; // rdi
  unsigned __int64 Start; // rcx
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int8 Attributes; // dl
  struct _DEVICE_OBJECT *Owner; // rcx
  unsigned __int8 Flags; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  bool v18; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  PRTL_RANGE Range; // [rsp+38h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(v4 + 44);
  if ( (v6 & 2) != 0 )
    goto LABEL_20;
  if ( (v6 & 4) != 0
    || IoGetDeviceProperty(
         *(PDEVICE_OBJECT *)(v4 + 32),
         DevicePropertyEnumeratorName,
         0xAu,
         PropertyBuffer,
         &ResultLength) < 0 )
  {
    goto LABEL_6;
  }
  v18 = wcsicmp(PropertyBuffer, L"ROOT") == 0;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v18 )
  {
    *(_DWORD *)(v7 + 44) |= 2u;
LABEL_20:
    v3 = 1;
    goto LABEL_6;
  }
  *(_DWORD *)(v7 + 44) |= 4u;
LABEL_6:
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v8 = Range;
    if ( !Range )
      return 0;
    Start = Range->Start;
    v10 = *(_QWORD *)(a2 + 16);
    v11 = v10 < Range->Start;
    if ( v10 > Range->Start )
    {
      if ( Range->End < v10 )
        goto LABEL_10;
      v11 = v10 < Start;
    }
    if ( !v11 || *(_QWORD *)(a2 + 24) >= Start )
    {
      Attributes = Range->Attributes;
      if ( (*(_BYTE *)(a2 + 67) & Attributes) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (Attributes & 2) != 0) )
      {
        Owner = (struct _DEVICE_OBJECT *)Range->Owner;
        if ( Owner )
        {
          if ( v3 )
          {
            Flags = Range->Flags;
            if ( (Flags & 0x40) == 0 )
            {
              if ( (Flags & 0x20) != 0
                || IoGetDeviceProperty(Owner, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_36;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                v8->Flags |= 0x20u;
LABEL_36:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_38;
              }
              v8->Flags |= 0x40u;
            }
            v3 = 0;
          }
          v16 = *((_QWORD *)v8->Owner + 3);
          if ( v16 )
            break;
        }
      }
    }
LABEL_10:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v17 )
      break;
LABEL_33:
    v16 = *(_QWORD *)(v16 + 24);
    if ( !v16 )
      goto LABEL_10;
  }
  while ( *(_QWORD *)(v16 + 8) != *(_QWORD *)(v17 + 8) )
  {
    v17 = *(_QWORD *)(v17 + 24);
    if ( !v17 )
      goto LABEL_33;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_38:
  if ( v18 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}
