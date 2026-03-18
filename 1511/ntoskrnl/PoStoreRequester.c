/*
 * XREFs of PoStoreRequester @ 0x140098274
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x1401E662C (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x140454D34 (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyUnicodeString @ 0x140097EF0 (RtlStringCbCopyUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rsi
  char v7; // r13
  __int64 v8; // r12
  char *v9; // r14
  char v10; // bl
  struct _DEVICE_OBJECT *v11; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  _QWORD *p_Type; // rbp
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int16 *v19; // rcx
  __int64 v20; // r8
  char *v21; // rdx
  char *v22; // rcx
  char *v23; // rcx
  unsigned __int64 v24; // rbp
  size_t v25; // rdx
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v4 = *a3;
  ResultLength = 0;
  v6 = 40LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v9 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !*(_DWORD *)a1 )
  {
    v11 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    if ( !v11 )
      goto LABEL_18;
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v11);
    p_Type = &DeviceAttachmentBaseRef->Type;
    if ( !DeviceAttachmentBaseRef )
      goto LABEL_18;
    if ( DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode )
    {
      if ( v10 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyDeviceDescription,
                           v4 - 40,
                           v9,
                           &ResultLength);
      }
      else
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyDeviceDescription,
                           0,
                           0LL,
                           &ResultLength);
        if ( DeviceProperty == -1073741789 )
          DeviceProperty = 0;
      }
    }
    else
    {
      DeviceProperty = -1073741808;
    }
    if ( DeviceProperty < 0 )
    {
      v15 = (const UNICODE_STRING *)(p_Type[1] + 56LL);
      v16 = (unsigned int)v15->Length + 2;
      ResultLength = v15->Length + 2;
      if ( !v10 || v4 < v16 + 40 )
      {
        v10 = 0;
        goto LABEL_14;
      }
      v10 = 1;
      RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, (unsigned int)v16, v15);
    }
    LODWORD(v16) = ResultLength;
LABEL_14:
    v6 = (unsigned int)v16 + 40LL;
    if ( v10 )
    {
      v7 = 1;
      *(_QWORD *)(a2 + 16) = &v9[-a2];
      v9 += (unsigned int)v16;
    }
    v17 = *(_QWORD *)(p_Type[39] + 40LL);
    if ( v17 )
    {
      v8 = v17 + 40;
      v25 = (unsigned int)*(unsigned __int16 *)(v17 + 40) + 2;
      v6 += v25;
      ResultLength = *(unsigned __int16 *)(v17 + 40) + 2;
      if ( v10 && v4 >= v6 )
      {
        v10 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v25, (PCUNICODE_STRING)(v17 + 40));
        *(_QWORD *)(a2 + 24) = &v9[-a2];
      }
      else
      {
        v10 = 0;
      }
    }
    ObfDereferenceObjectWithTag(p_Type, 0x746C6644u);
    goto LABEL_18;
  }
  if ( v10 )
  {
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 744LL);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
  }
  v19 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1128LL);
  v20 = *v19;
  v21 = (char *)*((_QWORD *)v19 + 1);
  ResultLength = *v19;
  if ( a4 )
  {
    v22 = &v21[2 * ((unsigned __int64)(unsigned int)v20 >> 1)];
    if ( v22 != v21 )
    {
      do
      {
        if ( *(_WORD *)v22 == 92 )
          break;
        v22 -= 2;
      }
      while ( v22 != v21 );
      if ( v22 != v21 )
      {
        v23 = v22 + 2;
        v20 = (unsigned int)((_DWORD)v21 - (_DWORD)v23 + v20);
        v21 = v23;
        ResultLength = v20;
      }
    }
  }
  v24 = (unsigned int)v20;
  v6 = v20 + 42;
  if ( v10 && v4 >= v6 )
  {
    v10 = 1;
    memmove(v9, v21, (unsigned int)v20);
    *(_WORD *)&v9[2 * (v24 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v9[-a2];
  }
  else
  {
    v10 = 0;
  }
LABEL_18:
  *v27 = v6;
  if ( !v10 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v7 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v8 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
