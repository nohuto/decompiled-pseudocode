/*
 * XREFs of MsiGetTargetInfo @ 0x1C006E734
 * Callers:
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ProcessorGetDestinationMode @ 0x1C006E7D8 (ProcessorGetDestinationMode.c)
 */

__int64 __fastcall MsiGetTargetInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v4; // r9
  __int128 v5; // xmm0
  int v6; // r10d
  int MessageRoutingInfo; // eax
  int v8; // edx
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v12[4]; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-A0h]
  int v14; // [rsp+48h] [rbp-90h]
  _BYTE v15[72]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-30h]
  __int16 v17; // [rsp+B0h] [rbp-28h]

  ProcessorGetDestinationMode(a1, &v11);
  v5 = *v4;
  v12[0] = 0;
  v13 = v5;
  v12[2] = v6;
  v14 = v11;
  MessageRoutingInfo = HalGetMessageRoutingInfo(v12, v15);
  v8 = 0;
  if ( MessageRoutingInfo < 0 )
    v8 = MessageRoutingInfo;
  if ( v8 >= 0 )
  {
    v9 = v16;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)a3 = v9;
    *(_WORD *)(a3 + 20) = v17;
    *(_DWORD *)(a3 + 16) = 1;
  }
  return (unsigned int)v8;
}
