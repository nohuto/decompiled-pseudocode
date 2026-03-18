/*
 * XREFs of PopBcdSetupResumeObject @ 0x14053F0D0
 * Callers:
 *     PopBcdSetPendingResume @ 0x1405349E4 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = IoArcBootDeviceName.Length + 22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x64634250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    *v4 = 2;
    memmove(v4 + 5, IoArcBootDeviceName.Buffer, IoArcBootDeviceName.Length);
    v6 = BcdSetElementDataWithFlags(a1, 0x21000001u, v5, (__int64)v4, v2);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
      v6 = BcdSetElementDataWithFlags(
             a1,
             0x22000002u,
             v7,
             (__int64)DestinationString.Buffer,
             (unsigned int)DestinationString.Length + 2);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
