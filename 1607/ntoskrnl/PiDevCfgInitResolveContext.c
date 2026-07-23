/*
 * XREFs of PiDevCfgInitResolveContext @ 0x1406398C8
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641134 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x140638FA8 (PiDevCfgFreeResolveContext.c)
 */

__int64 __fastcall PiDevCfgInitResolveContext(void *a1, void *a2, HANDLE *a3)
{
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  PVOID PoolWithTag; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int v13; // [rsp+20h] [rbp-48h] BYREF
  const wchar_t *v14; // [rsp+28h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(a3, 0, 0x20uLL);
  *a3 = a1;
  v14 = L"Variables";
  v13 = 1310738;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  v6 = 0LL;
  ObjectAttributes.Length = 48;
  a3[2] = 0LL;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(a3 + 2, 0x20019u, &ObjectAttributes);
  v8 = v7;
  if ( v7 == -1073741772 )
    return 0;
  if ( v7 < 0 )
  {
LABEL_6:
    PiDevCfgFreeResolveContext((__int64)a3);
    return v8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7F0uLL, 0x63647050u);
  a3[3] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_6;
  }
  v11 = 127LL;
  do
  {
    v12 = (char *)a3[3] + v6;
    v6 += 16LL;
    v12[1] = v12;
    *v12 = v12;
    --v11;
  }
  while ( v11 );
  return v8;
}
