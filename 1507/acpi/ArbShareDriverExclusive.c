/*
 * XREFs of ArbShareDriverExclusive @ 0x1C0081860
 * Callers:
 *     ArbFindSuitableRange @ 0x1C006E310 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rax
  ULONGLONG Start; // rcx
  ULONGLONG v9; // rax
  bool v10; // cf
  UCHAR Attributes; // r8
  struct _DEVICE_OBJECT *Owner; // rcx
  UCHAR Flags; // al
  PRTL_RANGE v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  bool v18; // zf
  PRTL_RANGE Range; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(v4 + 44);
  if ( (v6 & 2) == 0 )
  {
    if ( (v6 & 4) != 0
      || IoGetDeviceProperty(
           *(PDEVICE_OBJECT *)(v4 + 32),
           DevicePropertyEnumeratorName,
           0xAu,
           PropertyBuffer,
           &ResultLength) < 0 )
    {
      goto LABEL_8;
    }
    v18 = _wcsicmp(PropertyBuffer, L"ROOT") == 0;
    v7 = *(_QWORD *)(a2 + 32);
    if ( !v18 )
    {
      *(_DWORD *)(v7 + 44) |= 4u;
      goto LABEL_8;
    }
    *(_DWORD *)(v7 + 44) |= 2u;
  }
  v3 = 1;
LABEL_8:
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v14 = Range;
    if ( !Range )
      return 0;
    Start = Range->Start;
    v9 = *(_QWORD *)(a2 + 16);
    v10 = v9 < Range->Start;
    if ( v9 > Range->Start )
    {
      if ( Range->End < v9 )
        goto LABEL_30;
      v10 = v9 < Start;
    }
    if ( !v10 || *(_QWORD *)(a2 + 24) >= Start )
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
                goto LABEL_34;
              }
              if ( !_wcsicmp(PropertyBuffer, L"ROOT") )
              {
                Range->Flags |= 0x20u;
LABEL_34:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_35;
              }
              Range->Flags |= 0x40u;
              v14 = Range;
            }
            v3 = 0;
          }
          v15 = *((_QWORD *)v14->Owner + 3);
          if ( v15 )
            break;
        }
      }
    }
LABEL_30:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v16 )
      break;
LABEL_29:
    v15 = *(_QWORD *)(v15 + 24);
    if ( !v15 )
      goto LABEL_30;
  }
  while ( *(_QWORD *)(v15 + 8) != *(_QWORD *)(v16 + 8) )
  {
    v16 = *(_QWORD *)(v16 + 24);
    if ( !v16 )
      goto LABEL_29;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_35:
  if ( v18 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}
