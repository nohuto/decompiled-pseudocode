/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C01B24AC
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F1574 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000B6E0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00F2E90 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATIO.c)
 */

__int64 __fastcall DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        unsigned int a2,
        struct DXGMONITOR::_MONITORDESCRIPTOR **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KEY_VALUE_PARTIAL_INFORMATION *v17; // rdi
  __int64 v18; // rax
  char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v23; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  wchar_t pszDest; // [rsp+38h] [rbp-30h] BYREF

  v23 = 0LL;
  v4 = a2;
  if ( !KeyHandle )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(KeyHandle);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0LL;
  v8 = RtlStringCbPrintfW(&pszDest, 8uLL, L"%d", (unsigned int)v4, v23);
  v10 = v8;
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, &pszDest);
    v12 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, &v23);
    v17 = v23;
    v10 = v12;
    if ( v12 >= 0 )
    {
      if ( v23->Type == 3 && v23->DataLength == 128 )
      {
        v19 = (char *)operator new(0x9FuLL, 0x4D677844u, PagedPool);
        if ( v19 )
        {
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 24) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)v17->Data;
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 40) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 28);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 56) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 44);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 72) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 60);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 88) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 76);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 104) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 92);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 120) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 108);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v19 + 136) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v17 + 124);
          *((_QWORD *)v19 + 2) = v17->DataLength;
          *((_DWORD *)v19 + 2) = 3;
          *((_DWORD *)v19 + 3) = (_DWORD)v4 != 0 ? 255 : 1;
          LODWORD(v10) = 0;
          *a3 = (struct DXGMONITOR::_MONITORDESCRIPTOR *)v19;
        }
        else
        {
          v20 = WdLogNewEntry5_WdError(0LL);
          WdLogEvent5_WdError(v20);
          LODWORD(v10) = -1073741801;
        }
      }
      else
      {
        v21 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        *(_QWORD *)(v21 + 24) = v4;
        WdLogEvent5_WdWarning(v21);
        LODWORD(v10) = -1071841279;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v18 + 24) = v10;
      WdLogEvent5_WdDmmEvent(v18);
    }
    if ( v17 )
      operator delete(v17);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
