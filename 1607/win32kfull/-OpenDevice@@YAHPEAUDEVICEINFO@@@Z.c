/*
 * XREFs of ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01D5C1C
 * Callers:
 *     DitOpen @ 0x1C01D692C (DitOpen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01D5E84 (-QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01D5F4C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

__int64 __fastcall OpenDevice(struct DEVICEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS DeviceInfo; // esi
  ACCESS_MASK v6; // r13d
  ULONG ShareAccess; // r15d
  unsigned int v8; // edi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r14d
  struct _IO_STATUS_BLOCK *v13; // rax
  NTSTATUS v14; // eax
  int v15; // esi
  void *v16; // rcx
  PVOID Object; // [rsp+68h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v19[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  __int16 v20; // [rsp+A8h] [rbp+27h]

  DeviceInfo = -1073741811;
  v6 = 1048577;
  ShareAccess = 2;
  v8 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) == gptiRit
    && gbDIT == 1
    && *((_DWORD *)a1 + 79) )
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
      v10 = (_QWORD *)ghRemoteKeyboardChannel;
    }
    else
    {
      v10 = (_QWORD *)ghRemoteMouseChannel;
    }
    *((_QWORD *)a1 + 28) = *v10;
    if ( !*v10 )
      return 0LL;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)a1 + 208);
    ObjectAttributes.SecurityQualityOfService = v19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v19[0] = 12;
    v19[1] = 2;
    v20 = 257;
    if ( *((_BYTE *)a1 + 48) == 2 )
    {
      v11 = *((_QWORD *)a1 + 60);
      v6 = 1048579;
      if ( !v11 || *(_DWORD *)(v11 + 24) == 6 )
        ShareAccess = 3;
    }
    v12 = 0;
    if ( !gdwMaxRetries )
      return 0LL;
    v13 = (struct _IO_STATUS_BLOCK *)((char *)a1 + 256);
    do
    {
      v14 = ZwCreateFile((PHANDLE)a1 + 28, v6, &ObjectAttributes, v13, 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
      *((_DWORD *)a1 + 72) = v14;
      v15 = v14;
      if ( v14 != -1073741757 && v14 != -1073741790 )
        break;
      if ( !gfSwitchInProgress )
        break;
      UserSleep(100LL);
      ++v12;
      v13 = (struct _IO_STATUS_BLOCK *)((char *)a1 + 256);
    }
    while ( v12 < gdwMaxRetries );
    if ( v15 < 0 )
      return 0LL;
    v16 = (void *)*((_QWORD *)a1 + 28);
    *((_WORD *)a1 + 32) &= ~2u;
    *((_DWORD *)a1 + 78) = 0;
    DeviceInfo = ObReferenceObjectByHandle(v16, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *((_QWORD *)a1 + 29) = Object;
  }
  if ( *((_BYTE *)a1 + 48) != 2 )
    DeviceInfo = QueryDeviceInfo(a1);
  LOBYTE(v8) = DeviceInfo >= 0;
  return v8;
}
