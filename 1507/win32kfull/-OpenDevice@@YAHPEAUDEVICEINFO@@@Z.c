/*
 * XREFs of ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DDDDC
 * Callers:
 *     RitTakeOver @ 0x1C01323F8 (RitTakeOver.c)
 *     DitTakeOver @ 0x1C0150074 (DitTakeOver.c)
 *     DitOpen @ 0x1C01DF91C (DitOpen.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01DE044 (-QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE20C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

__int64 __fastcall OpenDevice(struct DEVICEINFO *a1)
{
  NTSTATUS DeviceInfo; // esi
  ACCESS_MASK v3; // r13d
  ULONG ShareAccess; // r15d
  unsigned int v5; // edi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r14d
  struct _IO_STATUS_BLOCK *v10; // rax
  NTSTATUS v11; // eax
  int v12; // esi
  void *v13; // rcx
  PVOID Object; // [rsp+68h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v16[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  __int16 v17; // [rsp+A8h] [rbp+27h]

  DeviceInfo = -1073741811;
  v3 = 1048577;
  ShareAccess = 2;
  v5 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && gbDIT == 1 && *((_DWORD *)a1 + 79) )
  {
    *((_DWORD *)a1 + 24) |= 8u;
    RitWakeDITAndWaitForResponse(1u);
    return (unsigned __int8)(*((_BYTE *)a1 + 96) & 4) >> 2;
  }
  *((_QWORD *)a1 + 35) = PsGetCurrentProcessId();
  if ( gProtocolType )
  {
    *((_WORD *)a1 + 32) |= 1u;
    if ( *((_BYTE *)a1 + 48) )
    {
      if ( *((_BYTE *)a1 + 48) != 1 )
        return 0LL;
      v7 = (_QWORD *)ghRemoteKeyboardChannel;
    }
    else
    {
      v7 = (_QWORD *)ghRemoteMouseChannel;
    }
    *((_QWORD *)a1 + 28) = *v7;
    if ( !*v7 )
      return 0LL;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)a1 + 208);
    ObjectAttributes.SecurityQualityOfService = v16;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v16[0] = 12;
    v16[1] = 2;
    v17 = 257;
    if ( *((_BYTE *)a1 + 48) == 2 )
    {
      v8 = *((_QWORD *)a1 + 52);
      v3 = 1048579;
      if ( !v8 || *(_DWORD *)(v8 + 24) == 7 )
        ShareAccess = 3;
    }
    v9 = 0;
    if ( !gdwMaxRetries )
      return 0LL;
    v10 = (struct _IO_STATUS_BLOCK *)((char *)a1 + 256);
    do
    {
      v11 = ZwCreateFile((PHANDLE)a1 + 28, v3, &ObjectAttributes, v10, 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
      *((_DWORD *)a1 + 72) = v11;
      v12 = v11;
      if ( v11 != -1073741757 && v11 != -1073741790 )
        break;
      if ( !gfSwitchInProgress )
        break;
      UserSleep(100LL);
      ++v9;
      v10 = (struct _IO_STATUS_BLOCK *)((char *)a1 + 256);
    }
    while ( v9 < gdwMaxRetries );
    if ( v12 < 0 )
      return 0LL;
    v13 = (void *)*((_QWORD *)a1 + 28);
    *((_WORD *)a1 + 32) &= ~2u;
    *((_DWORD *)a1 + 78) = 0;
    DeviceInfo = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *((_QWORD *)a1 + 29) = Object;
  }
  if ( *((_BYTE *)a1 + 48) != 2 )
    DeviceInfo = QueryDeviceInfo(a1);
  LOBYTE(v5) = DeviceInfo >= 0;
  return v5;
}
