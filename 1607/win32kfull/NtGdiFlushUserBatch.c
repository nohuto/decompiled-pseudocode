/*
 * XREFs of NtGdiFlushUserBatch @ 0x1C004EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 */

void NtGdiFlushUserBatch()
{
  _BYTE v0[8]; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 LowLimit; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 HighLimit; // [rsp+50h] [rbp+18h] BYREF

  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&v0[-LowLimit] < 0x2000 )
    KeExpandKernelStackAndCalloutEx(NtGdiFlushUserBatchInternal, 0LL, 0x2000uLL, 1u, 0LL);
  else
    NtGdiFlushUserBatchInternal(0LL);
}
