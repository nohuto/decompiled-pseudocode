/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C00E8654
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00D4360 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C00E8790 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  struct _UNICODE_STRING *v3; // rsi
  __int64 v5; // rcx
  const WCHAR *v6; // rdx
  NTSTATUS v7; // eax
  void *ExportAddress; // rsi
  void *v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  bool v17; // zf
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax

  v3 = (struct _UNICODE_STRING *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x38uLL);
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_20:
      v21 = WdLogNewEntry5_WdError(v5);
      v20 = -1073741811;
      *(_QWORD *)(v21 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v21);
      return v20;
    }
    v6 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v6 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString(v3, v6);
  v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v3, 0x38uLL);
  if ( v7 < 0 && v7 != -1073741554 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
      "We broke into the  debugger to allow a chance for debugging this issue.\n"
      "Another attempt to load it will be made now.\n",
      v7);
    JUMPOUT(0x1C0122F96LL);
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v9 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v10 = v9;
  if ( !ExportAddress || !v9 )
    goto LABEL_20;
  v11 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v11 )
  {
    v13 = (unsigned int)(a2 + 1);
    v11[1] = ExportAddress;
    *(_DWORD *)v11 = v13;
  }
  *((_QWORD *)this + 9) = v11;
  if ( v11 )
  {
    v16 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v16 )
    {
      v13 = (unsigned int)(a2 + 1);
      v16[1] = v10;
      *(_DWORD *)v16 = v13;
    }
    v17 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v16;
    if ( !v17 )
      return 0LL;
  }
  v19 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
  v20 = -1073741801;
  *(_QWORD *)(v19 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v19);
  return v20;
}
