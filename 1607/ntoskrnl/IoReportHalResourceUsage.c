/*
 * XREFs of IoReportHalResourceUsage @ 0x1407AB540
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     HeadlessTerminalAddResources @ 0x14055592C (HeadlessTerminalAddResources.c)
 *     IopWriteResourceList @ 0x140557C10 (IopWriteResourceList.c)
 */

__int64 __fastcall IoReportHalResourceUsage(UNICODE_STRING *a1, void *a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v6; // rsi
  int v8; // ebx
  int v9; // eax
  PVOID v10; // rdi
  ULONG v11; // ecx
  _DWORD *v12; // rax
  PVOID v13; // r14
  ULONG v14; // eax
  PVOID PoolWithTag; // rax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v20; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF

  P = 0LL;
  v6 = a4;
  RtlInitUnicodeString(&DestinationString, L"Hardware Abstraction Layer");
  v8 = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&v20, L".Raw");
    v9 = HeadlessTerminalAddResources(a2, (unsigned int)v6, 0, &P, &v17);
    v10 = P;
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = v6;
      if ( P )
        v11 = v17;
      v12 = a2;
      if ( P )
        v12 = P;
      v8 = IopWriteResourceList(Handle, &DestinationString, a1, &v20, v12, v11);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v20, L".Translated");
        v8 = HeadlessTerminalAddResources(a3, (unsigned int)v6, 1, &P, &v17);
        if ( v8 >= 0 )
        {
          v13 = P;
          v14 = v6;
          if ( P )
          {
            v14 = v17;
            a3 = P;
          }
          v8 = IopWriteResourceList(Handle, &DestinationString, a1, &v20, a3, v14);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
        }
      }
    }
    ZwClose(Handle);
    if ( v8 < 0 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    else if ( v10 )
    {
      IopInitHalResources = v10;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20207050u);
      IopInitHalResources = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, a2, v6);
      else
        return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
