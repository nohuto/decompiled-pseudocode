/*
 * XREFs of RtlpLogHeapContractEvent @ 0x140218D48
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     GetUCBytes @ 0x140218388 (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapContractEvent(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 UCBytes; // rax
  __int64 v9; // rcx
  _QWORD v11[4]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-9h] BYREF
  int v14; // [rsp+60h] [rbp-1h] BYREF
  __int64 v15; // [rsp+64h] [rbp+3h]
  _QWORD *v16; // [rsp+70h] [rbp+Fh] BYREF
  int v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+7Ch] [rbp+1Bh]

  v13 = 0LL;
  v12 = 0LL;
  v14 = 0;
  v11[0] = a1;
  v7 = a1[68] - 16LL * a1[24];
  v11[2] = a2;
  v11[3] = a4;
  v15 = v7;
  if ( a5 )
    a3 -= a6;
  v11[1] = a3;
  UCBytes = GetUCBytes((__int64)a1, &v13, &v14);
  v9 = v13 - a1[79];
  v18 = 0;
  v12 = v9 - UCBytes;
  v16 = v11;
  v17 = 60;
  return EtwTraceKernelEvent((int)&v16, 1, 0x40000020u, 4138, 272636163);
}
