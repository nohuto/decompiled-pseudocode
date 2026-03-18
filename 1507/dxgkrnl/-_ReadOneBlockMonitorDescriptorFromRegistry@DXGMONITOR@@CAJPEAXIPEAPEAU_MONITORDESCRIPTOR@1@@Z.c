/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C018443C
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9458 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00CA5D8 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATIO.c)
 */

__int64 __fastcall DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        __int64 a2,
        struct DXGMONITOR::_MONITORDESCRIPTOR **a3,
        __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KEY_VALUE_PARTIAL_INFORMATION *v18; // rdi
  __int64 v19; // rax
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v24; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  wchar_t pszDest; // [rsp+38h] [rbp-30h] BYREF

  v24 = 0LL;
  v5 = (unsigned int)a2;
  if ( !KeyHandle )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(KeyHandle, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  *a3 = 0LL;
  v9 = RtlStringCbPrintfW(&pszDest, 8uLL, L"%d", (unsigned int)v5, v24);
  v11 = v9;
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, &pszDest);
    v13 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, &v24);
    v18 = v24;
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( v24->Type == 3 && v24->DataLength == 128 )
      {
        v20 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
        if ( v20 )
        {
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 24) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)v18->Data;
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 40) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 28);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 56) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 44);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 72) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 60);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 88) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 76);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 104) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 92);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 120) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 108);
          *(struct _KEY_VALUE_PARTIAL_INFORMATION *)(v20 + 136) = *(struct _KEY_VALUE_PARTIAL_INFORMATION *)((char *)v18 + 124);
          *((_QWORD *)v20 + 2) = v18->DataLength;
          *((_DWORD *)v20 + 2) = 3;
          *((_DWORD *)v20 + 3) = (_DWORD)v5 != 0 ? 255 : 1;
          LODWORD(v11) = 0;
          *a3 = (struct DXGMONITOR::_MONITORDESCRIPTOR *)v20;
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(0LL);
          WdLogEvent5_WdError(v21);
          LODWORD(v11) = -1073741801;
        }
      }
      else
      {
        v22 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        *(_QWORD *)(v22 + 24) = v5;
        WdLogEvent5_WdWarning(v22);
        LODWORD(v11) = -1071841279;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v15);
      *(_QWORD *)(v19 + 24) = v11;
      WdLogEvent5_WdDmmEvent(v19);
    }
    if ( v18 )
      operator delete(v18);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
