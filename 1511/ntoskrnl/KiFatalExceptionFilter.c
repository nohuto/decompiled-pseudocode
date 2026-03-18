/*
 * XREFs of KiFatalExceptionFilter @ 0x14076FED0
 * Callers:
 *     KiLockServiceTable @ 0x140123C84 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x14001A844 (RtlCaptureImageExceptionValues.c)
 *     RtlpSearchFunctionTable @ 0x14001A868 (RtlpSearchFunctionTable.c)
 *     RtlLookupExceptionHandler @ 0x140141744 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r9
  int v4; // eax
  ULONG v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR v8; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  RtlCaptureImageExceptionValues((void *)0x140000000LL, &v7, &v6);
  if ( !v7 )
    KeBugCheck(0x31u);
  v1 = RtlpSearchFunctionTable(v7, v6 / 0xC, (__int64)KiServiceTablesLocked, 0x140000000LL);
  if ( !v1 )
    KeBugCheck(0x31u);
  v4 = RtlLookupExceptionHandler((__int64)v1, v2, 1u, v3, &v8, 0LL);
  if ( v4 < 0 )
    KeBugCheckEx(0x31u, v4, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v8;
  KiHardwareTriggerLock = 0LL;
  return 0LL;
}
