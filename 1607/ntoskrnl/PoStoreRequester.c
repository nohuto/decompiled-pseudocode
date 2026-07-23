/*
 * XREFs of PoStoreRequester @ 0x1400F914C
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400F9088 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x1401FEDF8 (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x140503074 (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlStringCbCopyUnicodeString @ 0x1400FA390 (RtlStringCbCopyUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rsi
  char v7; // r13
  __int64 v8; // r12
  char *v9; // r14
  char v10; // bl
  __int64 v11; // r8
  char *v12; // rdx
  char *v13; // rcx
  char *v14; // rcx
  unsigned __int64 v15; // rbp
  struct _DEVICE_OBJECT *v16; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  _QWORD *p_Type; // rbp
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  size_t v23; // rdx
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v26; // [rsp+80h] [rbp+18h]

  v26 = a3;
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
  if ( *(_DWORD *)a1 )
  {
    if ( v10 )
    {
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 40);
    }
    v11 = *(unsigned __int16 *)(a1 + 16);
    v12 = *(char **)(a1 + 24);
    ResultLength = *(unsigned __int16 *)(a1 + 16);
    if ( a4 )
    {
      v13 = &v12[2 * ((unsigned __int64)(unsigned int)v11 >> 1)];
      if ( v13 != v12 )
      {
        do
        {
          if ( *(_WORD *)v13 == 92 )
            break;
          v13 -= 2;
        }
        while ( v13 != v12 );
        if ( v13 != v12 )
        {
          v14 = v13 + 2;
          v11 = (unsigned int)((_DWORD)v12 - (_DWORD)v14 + v11);
          v12 = v14;
          ResultLength = v11;
        }
      }
    }
    v15 = (unsigned int)v11;
    v6 = v11 + 42;
    if ( v10 && v4 >= v6 )
    {
      v10 = 1;
      memmove(v9, v12, (unsigned int)v11);
      *(_WORD *)&v9[2 * (v15 >> 1)] = 0;
      *(_QWORD *)(a2 + 16) = &v9[-a2];
    }
    else
    {
      v10 = 0;
    }
    goto LABEL_40;
  }
  v16 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  if ( !v16 )
    goto LABEL_40;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v16);
  p_Type = &DeviceAttachmentBaseRef->Type;
  if ( !DeviceAttachmentBaseRef )
    goto LABEL_40;
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
    v20 = (const UNICODE_STRING *)(p_Type[1] + 56LL);
    v21 = (unsigned int)v20->Length + 2;
    ResultLength = v20->Length + 2;
    if ( !v10 || v4 < v21 + 40 )
    {
      v10 = 0;
      goto LABEL_28;
    }
    v10 = 1;
    RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, (unsigned int)v21, v20);
  }
  LODWORD(v21) = ResultLength;
LABEL_28:
  v6 = (unsigned int)v21 + 40LL;
  if ( v10 )
  {
    v7 = 1;
    *(_QWORD *)(a2 + 16) = &v9[-a2];
    v9 += (unsigned int)v21;
  }
  v22 = *(_QWORD *)(p_Type[39] + 40LL);
  if ( v22 )
  {
    v8 = v22 + 40;
    v23 = (unsigned int)*(unsigned __int16 *)(v22 + 40) + 2;
    v6 += v23;
    ResultLength = *(unsigned __int16 *)(v22 + 40) + 2;
    if ( v10 && v4 >= v6 )
    {
      v10 = 1;
      RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v23, (PCUNICODE_STRING)(v22 + 40));
      *(_QWORD *)(a2 + 24) = &v9[-a2];
    }
    else
    {
      v10 = 0;
    }
  }
  ObfDereferenceObjectWithTag(p_Type, 0x746C6644u);
LABEL_40:
  *v26 = v6;
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
