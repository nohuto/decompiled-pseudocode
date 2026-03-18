/*
 * XREFs of bWriteUserSystemEUDCRegistry @ 0x140324B28
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1400CAFA4 (bReadUserSystemEUDCRegistry.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     GetUserEUDCRegistryPath @ 0x1400CB2E4 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x1400CB428 (bNotIsKeySymbolicLink.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

__int64 __fastcall bWriteUserSystemEUDCRegistry(PVOID ValueData)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v5; // [rsp+38h] [rbp-8h] BYREF
  PCWSTR Path; // [rsp+78h] [rbp+38h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  if ( Path )
  {
    Handle = 0LL;
    v5 = 0LL;
    if ( (int)GetUserEUDCRegistryPath((WCHAR *)Path, v1, v2) >= 0 )
      bNotIsKeySymbolicLink(Path, &Handle, &v5);
    if ( Handle )
      ZwClose(Handle);
    if ( v5 )
      ZwClose(v5);
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Path);
  return 0LL;
}
