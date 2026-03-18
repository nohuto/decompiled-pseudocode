/*
 * XREFs of NtGdiGetCertificate @ 0x1C00C0F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     CallMonitor @ 0x1C0083A30 (CallMonitor.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     sub_1C00C0CE8 @ 0x1C00C0CE8 (sub_1C00C0CE8.c)
 */

__int64 __fastcall NtGdiGetCertificate(struct _UNICODE_STRING *a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rsi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    Object[0] = 0LL;
    PoolWithTag = 0LL;
    v10 = sub_1C00C0CE8(a1, InputBuffer, &NumberOfBytes, Object);
    if ( v10 >= 0 )
    {
      if ( a4 >= (unsigned int)NumberOfBytes )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D504F47u);
        Object[1] = PoolWithTag;
        if ( PoolWithTag )
        {
          v10 = CallMonitor((PDEVICE_OBJECT)Object[0], 0x232487u, &InputBuffer, 4u, PoolWithTag, NumberOfBytes);
          if ( v10 >= 0 )
          {
            ProbeForWrite(a3, (unsigned int)NumberOfBytes, 1u);
            memmove((void *)a3, PoolWithTag, (unsigned int)NumberOfBytes);
          }
        }
        else
        {
          v10 = -1073741801;
        }
      }
      else
      {
        v10 = -1071774450;
      }
    }
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    OPMFreeMemory(PoolWithTag);
    UserSessionSwitchLeaveCrit(v12, v11);
    if ( v10 < 0 )
      return (unsigned int)v10;
    return v8;
  }
  return result;
}
