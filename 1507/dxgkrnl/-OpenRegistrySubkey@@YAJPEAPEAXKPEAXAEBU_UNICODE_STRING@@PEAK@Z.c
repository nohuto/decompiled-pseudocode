/*
 * XREFs of ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C009F3E8
 * Callers:
 *     ?WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z @ 0x1C009F47C (-WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z.c)
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C009F5A8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01417A0 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C014194C (-WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OpenRegistrySubkey(
        PHANDLE KeyHandle,
        __int64 a2,
        void *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *Disposition)
{
  __int64 v9; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !KeyHandle )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 696LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( Disposition )
    return ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes);
}
