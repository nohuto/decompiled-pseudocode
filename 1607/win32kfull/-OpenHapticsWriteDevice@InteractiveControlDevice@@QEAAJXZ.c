/*
 * XREFs of ?OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023D848
 * Callers:
 *     ?HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D2B0 (-HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z @ 0x1C023C9DC (-CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::OpenHapticsWriteDevice(struct _IO_STATUS_BLOCK *this)
{
  NTSTATUS v2; // edi
  char *Pointer; // rcx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  NTSTATUS v6; // eax
  PVOID v7; // r8
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  PVOID EventCategoryData; // [rsp+60h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+17h] BYREF
  PVOID *p_EventCategoryData; // [rsp+D0h] [rbp+27h]
  int v16; // [rsp+D8h] [rbp+2Fh]
  int v17; // [rsp+DCh] [rbp+33h]

  v2 = 0;
  Pointer = (char *)this->Pointer;
  if ( (*((_DWORD *)Pointer + 62) & 0x800) == 0 && !this[5].Pointer && !this[5].Information && !this[6].Pointer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(Pointer + 272);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateFile((PHANDLE)&this[5], 2u, &ObjectAttributes, this + 4, 0LL, 0x80u, 3u, 3u, 0x40000000u, 0LL, 0);
    if ( v2 < 0 )
    {
      if ( (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v17 = 0;
        p_EventCategoryData = &EventCategoryData;
        v16 = 4;
        LODWORD(EventCategoryData) = v2;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v4, v5, 4u, &pData);
      }
      goto LABEL_14;
    }
    v6 = ObReferenceObjectByHandle(this[5].Pointer, 0, (POBJECT_TYPE)IoFileObjectType, 0, &EventCategoryData, 0LL);
    v7 = EventCategoryData;
    v2 = v6;
    this[5].Information = (ULONG_PTR)EventCategoryData;
    if ( v6 < 0 )
    {
      if ( (unsigned int)hProvider > 2 )
        goto LABEL_13;
      goto LABEL_14;
    }
    v2 = IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           v7,
           gpWin32kDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)InteractiveControlDevice::HapticsDeviceNotify,
           this,
           (PVOID *)&this[6]);
    if ( v2 < 0 )
    {
      if ( (unsigned int)hProvider > 2 )
      {
LABEL_13:
        TlgCreateSz(&pDesc, "Function failed.");
        v17 = 0;
        p_EventCategoryData = &EventCategoryData;
        v16 = 4;
        LODWORD(EventCategoryData) = v2;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v8, v9, 4u, &pData);
      }
LABEL_14:
      InteractiveControlDevice::CloseHapticsWriteDevice((InteractiveControlDevice *)this, 1);
    }
  }
  return (unsigned int)v2;
}
