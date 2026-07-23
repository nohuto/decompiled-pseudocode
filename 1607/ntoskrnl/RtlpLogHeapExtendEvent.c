/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x140218F78
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     GetUCBytes @ 0x140218388 (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 UCBytes; // rax
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-21h] BYREF
  __int64 v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h] BYREF
  int v12; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+64h] [rbp+13h]
  _QWORD *v14; // [rsp+70h] [rbp+1Fh] BYREF
  int v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+7Ch] [rbp+2Bh]

  v11 = 0LL;
  v10 = 0LL;
  v12 = 0;
  v9[0] = a1;
  v5 = a1[68] - 16LL * a1[24];
  v9[1] = a3;
  v9[2] = a2;
  v13 = v5;
  v9[3] = a4;
  UCBytes = GetUCBytes((__int64)a1, &v11, &v12);
  v7 = v11 - a1[79];
  v16 = 0;
  v10 = v7 - UCBytes;
  v14 = v9;
  v15 = 60;
  return EtwTraceKernelEvent((int)&v14, 1, 0x40000020u, 4133, 272636163);
}
