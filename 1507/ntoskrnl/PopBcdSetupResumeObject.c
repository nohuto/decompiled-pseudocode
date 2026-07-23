/*
 * XREFs of PopBcdSetupResumeObject @ 0x14057143C
 * Callers:
 *     PopBcdSetPendingResume @ 0x140569D2C (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(HANDLE BcdObjectHandle)
{
  ULONG BufferSize; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  BCD_FLAGS v5; // r8d
  NTSTATUS v6; // ebx
  BCD_FLAGS v7; // r8d
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  BufferSize = IoArcBootDeviceName.Length + 22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferSize, 0x64634250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, BufferSize);
    *v4 = 2;
    memmove(v4 + 5, IoArcBootDeviceName.Buffer, IoArcBootDeviceName.Length);
    v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000001u, v5, v4, BufferSize);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
      v6 = BcdSetElementDataWithFlags(
             BcdObjectHandle,
             0x22000002u,
             v7,
             DestinationString.Buffer,
             DestinationString.Length + 2);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
