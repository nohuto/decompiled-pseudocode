/*
 * XREFs of PoStoreRequester @ 0x1400D0B50
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x140233764 (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlStringCbCopyUnicodeString @ 0x1400D18D8 (RtlStringCbCopyUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v8; // rbp
  char v9; // dl
  __int64 v10; // r13
  char *v11; // r14
  char v12; // bl
  unsigned __int16 *v13; // rsi
  __int64 v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  char *v17; // rcx
  unsigned __int64 v18; // rsi
  struct _DEVICE_OBJECT *v20; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  _QWORD *p_Type; // rsi
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  size_t v27; // rdx
  char v28; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 *v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  v4 = *a3;
  v8 = 40LL;
  ResultLength = 0;
  v9 = 0;
  v28 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v11 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( !*(_DWORD *)a1 )
  {
    v20 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    if ( !v20 )
      goto LABEL_24;
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v20);
    p_Type = &DeviceAttachmentBaseRef->Type;
    if ( !DeviceAttachmentBaseRef )
      goto LABEL_23;
    if ( DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode )
    {
      if ( v12 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyDeviceDescription,
                           v4 - 40,
                           v11,
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
      v24 = (const UNICODE_STRING *)(p_Type[1] + 56LL);
      v25 = (unsigned int)v24->Length + 2;
      ResultLength = v24->Length + 2;
      if ( !v12 || v4 < v25 + 40 )
      {
        v12 = 0;
        goto LABEL_37;
      }
      v12 = 1;
      RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v11, (unsigned int)v25, v24);
    }
    LODWORD(v25) = ResultLength;
LABEL_37:
    v8 = (unsigned int)v25 + 40LL;
    if ( v12 )
    {
      v28 = 1;
      *(_QWORD *)(a2 + 16) = &v11[-a2];
      v11 += (unsigned int)v25;
    }
    v26 = *(_QWORD *)(p_Type[39] + 40LL);
    if ( v26 )
    {
      v10 = v26 + 40;
      v27 = (unsigned int)*(unsigned __int16 *)(v26 + 40) + 2;
      v8 += v27;
      ResultLength = *(unsigned __int16 *)(v26 + 40) + 2;
      if ( v12 && v4 >= v8 )
      {
        v12 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v11, v27, (PCUNICODE_STRING)(v26 + 40));
        *(_QWORD *)(a2 + 24) = &v11[-a2];
      }
      else
      {
        v12 = 0;
      }
    }
    ObfDereferenceObjectWithTag(p_Type, 0x746C6644u);
    v9 = v28;
    goto LABEL_24;
  }
  if ( v12 )
  {
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_4274317627_57077665_FeatureDescriptorDetails) )
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 32);
    else
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 744LL);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 40);
  }
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_4274317627_57077665_FeatureDescriptorDetails) )
    v13 = (unsigned __int16 *)(a1 + 16);
  else
    v13 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1120LL);
  v14 = *v13;
  v15 = (char *)*((_QWORD *)v13 + 1);
  ResultLength = *v13;
  if ( a4 )
  {
    v16 = &v15[2 * ((unsigned __int64)(unsigned int)v14 >> 1)];
    if ( v16 != v15 )
    {
      do
      {
        if ( *(_WORD *)v16 == 92 )
          break;
        v16 -= 2;
      }
      while ( v16 != v15 );
      if ( v16 != v15 )
      {
        v17 = v16 + 2;
        v14 = (unsigned int)((_DWORD)v15 - (_DWORD)v17 + v14);
        v15 = v17;
        ResultLength = v14;
      }
    }
  }
  v18 = (unsigned int)v14;
  v8 = v14 + 42;
  if ( v12 && v4 >= v8 )
  {
    v12 = 1;
    memmove(v11, v15, (unsigned int)v14);
    *(_WORD *)&v11[2 * (v18 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v11[-a2];
LABEL_23:
    v9 = 0;
    goto LABEL_24;
  }
  v12 = 0;
  v9 = 0;
LABEL_24:
  *v30 = v8;
  if ( !v12 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v9 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v10 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
