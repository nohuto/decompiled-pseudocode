/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x1406852B8
 * Callers:
 *     PiDevCfgConfigureDeviceInterface @ 0x1406833E4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140683BA8 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14068937C (PiDevCfgResetDeviceKeyCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, int a3, __int64 a4)
{
  int v4; // edi
  HANDLE *PoolWithTag; // rax
  HANDLE *v10; // rbx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  void *v13; // rsi
  void *v14; // r14
  int v15; // ebx
  __int64 **v16; // rax
  __int64 **v17; // rax
  void *v18; // rsi
  void *v19; // r14
  int v20; // ebx
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  v4 = 0;
  P = &v22;
  v22 = (__int64)&v22;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63647050u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    while ( 1 )
    {
      v11 = (__int64 *)P;
LABEL_4:
      if ( (__int64 *)v22 == &v22 )
        break;
      v12 = (__int64 **)v11[1];
      if ( (__int64 *)*v11 != &v22 || *v12 != v11 )
        __fastfail(3u);
      P = (PVOID)v11[1];
      *v12 = &v22;
      v13 = (void *)v11[2];
      v14 = (void *)v11[3];
      v15 = *((_DWORD *)v11 + 8);
      ExFreePoolWithTag(v11, 0);
      if ( (v15 & 0x40000000) != 0 )
      {
        ZwClose(v13);
        ZwClose(v14);
      }
    }
    return (unsigned int)v4;
  }
  *((_DWORD *)PoolWithTag + 8) = a3;
  if ( a3 >= 0 )
  {
    PoolWithTag[2] = a1;
    PoolWithTag[3] = a2;
  }
  else
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)PiDevCfgEmptyString;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(PoolWithTag + 2, 0x20019u, &ObjectAttributes);
    if ( v4 < 0 )
    {
LABEL_13:
      v11 = (__int64 *)P;
      goto LABEL_19;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)PiDevCfgEmptyString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(v10 + 3, 0xF003Fu, &ObjectAttributes);
    if ( v4 < 0 )
    {
      ZwClose(v10[2]);
      goto LABEL_13;
    }
    *((_DWORD *)v10 + 8) |= 0x40000000u;
  }
  v16 = (__int64 **)P;
  *v10 = &v22;
  v10[1] = v16;
  if ( *v16 != &v22 )
    __fastfail(3u);
  *v16 = (__int64 *)v10;
  v11 = (__int64 *)v10;
  P = v10;
  v10 = 0LL;
LABEL_19:
  if ( !v10 )
    goto LABEL_27;
  ExFreePoolWithTag(v10, 0);
  while ( 1 )
  {
    v11 = (__int64 *)P;
LABEL_27:
    if ( v4 < 0 )
      goto LABEL_4;
    if ( (__int64 *)v22 == &v22 )
      return (unsigned int)v4;
    v17 = (__int64 **)v11[1];
    if ( (__int64 *)*v11 != &v22 || *v17 != v11 )
      __fastfail(3u);
    P = (PVOID)v11[1];
    *v17 = &v22;
    v18 = (void *)v11[2];
    v19 = (void *)v11[3];
    v20 = *((_DWORD *)v11 + 8);
    ExFreePoolWithTag(v11, 0);
    v4 = PiDevCfgCopyDeviceKey(v18, v19, 0LL, 0, v20, (__int64)&v22, a4);
    if ( (v20 & 0x40000000) != 0 )
    {
      ZwClose(v18);
      ZwClose(v19);
    }
  }
}
