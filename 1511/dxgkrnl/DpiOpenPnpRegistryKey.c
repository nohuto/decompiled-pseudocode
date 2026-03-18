/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C005D7E0
 * Callers:
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiGetAdapterInfo @ 0x1C00D4D80 (DpiGetAdapterInfo.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // rbx
  struct _UNICODE_STRING *v6; // rdx
  struct _UNICODE_STRING *v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v6 = *(struct _UNICODE_STRING **)(a1 + 64);
  if ( (_DWORD)v4 == 1 )
  {
    v8 = v6 + 32;
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
    {
      v13 = WdLogNewEntry5_WdError((unsigned int)(v4 - 1));
      *(_QWORD *)(v13 + 24) = v4;
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    v8 = v6 + 33;
  }
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(a4, a3, &ObjectAttributes);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = v11;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v11;
}
