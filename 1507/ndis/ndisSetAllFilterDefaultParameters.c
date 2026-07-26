/*
 * XREFs of ndisSetAllFilterDefaultParameters @ 0x1C00CFB74
 * Callers:
 *     ndisCreateFilterDriverRegistry @ 0x1C00AE670 (ndisCreateFilterDriverRegistry.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00B06E0 (ndisCreateFilterAdapterRegistry.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00CF19C (ndisCreateFilterInstanceRegistry.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     ndisSetFilterDefaultParameter @ 0x1C00CFDE8 (ndisSetFilterDefaultParameter.c)
 */

__int64 __fastcall ndisSetAllFilterDefaultParameters(
        PCUNICODE_STRING Source,
        __int64 a2,
        const UNICODE_STRING *a3,
        char a4)
{
  ULONG v4; // r12d
  unsigned int v6; // ebx
  _WORD *v7; // rdi
  wchar_t *PoolWithTag; // rax
  _WORD *v12; // rax
  ULONG i; // edx
  NTSTATUS v14; // eax
  __int64 v15; // r9
  PULONG ResultLength; // [rsp+28h] [rbp-41h]
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-39h] BYREF
  int v19; // [rsp+40h] [rbp-29h] BYREF
  _WORD *v20; // [rsp+48h] [rbp-21h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  ULONG v23; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+77h] BYREF

  v4 = 0;
  v6 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v7 = 0LL;
  Destination.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v23 = 0;
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x5Cu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, Source, a2, a3);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
  Destination.MaximumLength = DestinationString.Length + a3->Length + 2 + Source->Length;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
  Destination.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Source);
    RtlAppendUnicodeStringToString(&Destination, a3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) )
    {
      KeyHandle = 0LL;
      goto LABEL_19;
    }
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
    v7 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x218uLL);
      v23 = 0;
      for ( i = 0; ; i = v4 )
      {
        v14 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v7, 0x216u, &v23);
        if ( v14 == -2147483622 )
          break;
        if ( v14 )
        {
          v6 = -1073741823;
          break;
        }
        LOBYTE(v15) = a4;
        LOWORD(v19) = v7[6];
        HIWORD(v19) = v19 + 2;
        v20 = v7 + 8;
        v6 = ndisSetFilterDefaultParameter(a2, KeyHandle, &v19, v15);
        if ( v6 )
          break;
        ++v4;
        memset(v7, 0, 0x218uLL);
        v23 = 0;
      }
    }
    else
    {
      v6 = -1073741670;
    }
    PoolWithTag = Destination.Buffer;
  }
  else
  {
    v6 = -1073741670;
  }
  if ( !KeyHandle )
    goto LABEL_20;
  ZwClose(KeyHandle);
LABEL_19:
  PoolWithTag = Destination.Buffer;
LABEL_20:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ResultLength) = v6;
    WPP_SF_qqqL(
      0x5Du,
      &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids,
      Source,
      a2,
      a3,
      ResultLength,
      *(_QWORD *)&Destination.Length);
  }
  return v6;
}
