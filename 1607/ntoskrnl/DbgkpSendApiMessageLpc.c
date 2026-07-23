/*
 * XREFs of DbgkpSendApiMessageLpc @ 0x14061A4BC
 * Callers:
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFlushInstructionCache @ 0x14015BD70 (ZwFlushInstructionCache.c)
 *     LpcRequestWaitReplyPortEx @ 0x14049C3B4 (LpcRequestWaitReplyPortEx.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     DbgkpSuspendProcess @ 0x14061AE68 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessageLpc(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  ULONG_PTR Process; // rbp
  int v8; // edi
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _BYTE v19[688]; // [rsp+20h] [rbp-2D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( a3 )
    v4 = DbgkpSuspendProcess(CurrentThread->ApcState.Process);
  *(_DWORD *)(a1 + 44) = 259;
  v8 = LpcRequestWaitReplyPortEx(a2, a1, (__int64)v19);
  ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
  if ( v8 == 192 )
  {
    v8 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    v9 = 2LL;
    v10 = v19;
    do
    {
      v11 = v10[1];
      *(_OWORD *)a1 = *v10;
      v12 = v10[2];
      *(_OWORD *)(a1 + 16) = v11;
      v13 = v10[3];
      *(_OWORD *)(a1 + 32) = v12;
      v14 = v10[4];
      *(_OWORD *)(a1 + 48) = v13;
      v15 = v10[5];
      *(_OWORD *)(a1 + 64) = v14;
      v16 = v10[6];
      *(_OWORD *)(a1 + 80) = v15;
      v17 = v10[7];
      v10 += 8;
      *(_OWORD *)(a1 + 96) = v16;
      a1 += 128LL;
      *(_OWORD *)(a1 - 16) = v17;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)a1 = *v10;
  }
  if ( v4 )
  {
    PsThawProcess(Process, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v8;
}
