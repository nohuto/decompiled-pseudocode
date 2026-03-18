/*
 * XREFs of ?CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z @ 0x1C023C9DC
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D2B0 (-HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023D848 (-OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

__int64 __fastcall InteractiveControlDevice::CloseHapticsWriteDevice(InteractiveControlDevice *this, int a2)
{
  NTSTATUS v2; // edi
  void *v4; // rcx
  void *v5; // rcx
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  void *v10; // rcx
  NTSTATUS v12; // [rsp+30h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  NTSTATUS *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  v2 = 0;
  if ( a2 )
  {
    v4 = (void *)*((_QWORD *)this + 12);
    if ( v4 )
    {
      IoUnregisterPlugPlayNotification(v4);
      *((_QWORD *)this + 12) = 0LL;
    }
  }
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    if ( ZwCancelIoFile(v5, &IoStatusBlock) < 0 && (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v18 = 0;
      v16 = &v12;
      v12 = (int)v6;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v7, v6, 4u, &pData);
    }
    v2 = ZwClose(*((HANDLE *)this + 10));
    if ( v2 < 0 && (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v18 = 0;
      v16 = &v12;
      v12 = v2;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v8, v9, 4u, &pData);
    }
    *((_QWORD *)this + 10) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 11);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)this + 11) = 0LL;
  }
  return (unsigned int)v2;
}
