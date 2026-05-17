/*
 * XREFs of LdrpEnableParallelLoading @ 0x180004A10
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 *     TpSetPoolMaxThreads @ 0x180004B00 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180004B70 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x1800061E0 (TpAllocPoolInternal.c)
 *     TpAllocWork @ 0x18000CDC0 (TpAllocWork.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  int v2; // edi
  int v4; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+28h] [rbp-50h]
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-40h]
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  int v12; // [rsp+60h] [rbp-18h]

  v2 = 0;
  LdrpDetectDetour();
  if ( !a1 )
  {
    if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 )
      return (unsigned int)v2;
    a1 = 4;
    goto LABEL_4;
  }
  if ( a1 > 0x10 )
    a1 = 16;
  if ( a1 > 1 )
  {
LABEL_4:
    if ( !LdrpDetourExist )
    {
      v2 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
      if ( v2 >= 0 )
      {
        TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
        TpSetPoolMaxThreads(LdrpThreadPool, a1 - 1);
        v6 = 0LL;
        v7 = 0LL;
        v9 = 0LL;
        v10 = 0;
        v8 = 0LL;
        v5 = LdrpThreadPool;
        v4 = 3;
        v11 = 1;
        v12 = 72;
        return (unsigned int)((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(), _QWORD, int *))TpAllocWork)(
                               &LdrpMapAndSnapWork,
                               LdrpWorkCallback,
                               0LL,
                               &v4);
      }
    }
  }
  return (unsigned int)v2;
}
