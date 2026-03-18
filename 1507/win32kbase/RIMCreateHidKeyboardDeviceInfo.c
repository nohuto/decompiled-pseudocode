/*
 * XREFs of RIMCreateHidKeyboardDeviceInfo @ 0x1C00CED4C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00CF024 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00CF4A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimReadHidKeyboardFlags @ 0x1C00CF97C (rimReadHidKeyboardFlags.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00CFB7C (rimValidateCustomHidKeyboardUsages.c)
 *     rimRegQueryRegistryDWord @ 0x1C00D30C0 (rimRegQueryRegistryDWord.c)
 */

__int64 __fastcall RIMCreateHidKeyboardDeviceInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  char *v8; // rdi
  int IsButtonDevice; // ebx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  _DWORD *v15; // r14
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 76) & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x1000) == 0 )
    return (unsigned int)-1073741668;
  v8 = (char *)Win32AllocPoolZInit(0x1C0uLL);
  if ( !v8 )
    goto LABEL_4;
  v10 = Win32AllocPool();
  *((_QWORD *)v8 + 55) = v10;
  if ( !v10 )
  {
    Win32FreePool();
LABEL_4:
    IsButtonDevice = -1073741801;
    goto LABEL_22;
  }
  v23 = 0;
  *(_QWORD *)(a2 + 424) = v8;
  IsButtonDevice = rimContainsCustomHidKeyboardUsages(v12, v11, a3, (_DWORD)a4, (__int64)&v23);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  if ( !v23 )
  {
    *((_DWORD *)v8 + 93) = 1;
    IsButtonDevice = rimHidKeyboardIsButtonDevice(v14, v13, a3, (_DWORD)a4, (__int64)(v8 + 372));
    if ( IsButtonDevice >= 0 )
      goto LABEL_15;
LABEL_22:
    v20 = *(_QWORD **)(a2 + 424);
    if ( v20 )
    {
      --*(_BYTE *)(a1 + 952);
      if ( v20[43] )
      {
        Win32FreePool();
        v20[43] = 0LL;
      }
      if ( v20[49] )
      {
        Win32FreePool();
        v20[49] = 0LL;
      }
      if ( v20[51] )
      {
        Win32FreePool();
        v20[51] = 0LL;
      }
      if ( v20[55] )
      {
        Win32FreePool();
        v20[55] = 0LL;
      }
      Win32FreePool();
      *(_QWORD *)(a2 + 424) = 0LL;
    }
    return (unsigned int)IsButtonDevice;
  }
  v15 = v8 + 368;
  IsButtonDevice = rimReadHidKeyboardFlags(v8 + 368);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  IsButtonDevice = rimValidateCustomHidKeyboardUsages(v16, a2, a3, a4);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  *((_DWORD *)v8 + 93) = 0;
  if ( (*v15 & 0x400) == 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x14u,
      (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids);
    *v15 |= 0x400u;
  }
  ++*((_DWORD *)v8 + 90);
LABEL_15:
  *((_DWORD *)v8 + 88) = a4[23];
  v17 = (void *)Win32AllocPoolNonPaged();
  *((_QWORD *)v8 + 43) = v17;
  if ( !v17 )
    goto LABEL_4;
  memset(v17, 0, 2LL * *((unsigned int *)v8 + 88));
  if ( (*((_DWORD *)v8 + 92) & 0x400) != 0 )
  {
    *((_DWORD *)v8 + 100) = a4[3];
    v18 = Win32AllocPoolNonPaged();
    *((_QWORD *)v8 + 49) = v18;
    if ( !v18 )
      goto LABEL_4;
    *((_DWORD *)v8 + 104) = a4[26];
    v19 = Win32AllocPoolNonPaged();
    *((_QWORD *)v8 + 51) = v19;
    if ( !v19 )
      goto LABEL_4;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
  if ( (unsigned int)rimRegQueryRegistryDWord(&DestinationString, L"EnableStartOnIdle") )
    *((_DWORD *)v8 + 108) = 1;
  return (unsigned int)IsButtonDevice;
}
