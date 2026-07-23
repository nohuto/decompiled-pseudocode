/*
 * XREFs of WmipInitializeDataStructs @ 0x14079C638
 * Callers:
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 * Callees:
 *     WmipAllocRegEntry @ 0x14012E408 (WmipAllocRegEntry.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 */

__int64 WmipInitializeDataStructs()
{
  _QWORD *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 *i; // rax
  _BYTE v4[8]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v5; // [rsp+38h] [rbp-41h]
  __int128 v6; // [rsp+48h] [rbp-31h]
  _QWORD v7[12]; // [rsp+60h] [rbp-19h] BYREF

  *(_QWORD *)&v5 = 0x11D1AADBC7BF35D0LL;
  WmipDSHeadPtr = (__int64)&WmipDSHead;
  qword_1402FD9F8 = (__int64)&WmipDSHead;
  WmipDSHead = (__int64)&WmipDSHead;
  WmipGEHeadPtr = (__int64)&WmipGEHead;
  qword_1402FDA18 = (__int64)&WmipGEHead;
  WmipGEHead = (__int64)&WmipGEHead;
  WmipMRHeadPtr = (__int64)&WmipMRHead;
  qword_1402FDA28 = (__int64)&WmipMRHead;
  WmipMRHead = (__int64)&WmipMRHead;
  *((_QWORD *)&v5 + 1) = 0x102906C9A0004ABFLL;
  *(_QWORD *)&v6 = 0x11D23915E3DFF7BDLL;
  *((_QWORD *)&v6 + 1) = 0xA298B94FC0000391uLL;
  v0 = WmipAllocRegEntry(-1LL, 1342177280);
  if ( !v0 )
    return 3221225626LL;
  memset(v7, 0, 0x58uLL);
  LODWORD(v7[0]) = 88;
  LODWORD(v7[2]) = 2;
  *(_OWORD *)&v7[3] = v5;
  *(_OWORD *)&v7[7] = v6;
  result = WmipAddDataSource((__int64)v0, (__int64)v7, 88, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v2 = WmipGEHeadPtr;
    for ( i = *(__int64 **)WmipGEHeadPtr; i != (__int64 *)v2; i = (__int64 *)*i )
      *((_DWORD *)i + 4) |= 1u;
    result = WmipAddMofResource(v0[4], L"kernelbase.dll", 1, L"MofResourceName", v4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
