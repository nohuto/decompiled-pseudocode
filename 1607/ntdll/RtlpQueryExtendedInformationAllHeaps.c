/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x1800EABFC
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA764 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18004E4BC (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(__int64 a1)
{
  int v2; // ecx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD *, __int64); // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v8; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v9; // [rsp+D8h] [rbp+3Fh]
  int v10; // [rsp+E0h] [rbp+47h]

  v2 = *(_DWORD *)a1;
  if ( (unsigned int)(v2 - 1) <= 4 || v2 == 0x80000000 )
  {
    RtlpEnumProcessHeaps((__int64)RtlpLockUlockAllHeapsCallback, 1LL, 1);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_8;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v3 = RtlpEnumProcessHeaps((__int64)RtlpHeapQueryTotalReserveSize, (__int64)&v8, 3);
    if ( v3 >= 0 )
    {
      memset(v7, 0, 0xA8uLL);
      v4 = *(_QWORD *)(a1 + 16);
      LODWORD(v7[4]) = v10;
      v7[2] = v8;
      v7[3] = v9;
      v5 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a1 + 8);
      LODWORD(v7[0]) = 1;
      v7[1] = 48LL;
      v3 = v5(v7, v4);
      if ( v3 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_8:
        v3 = RtlpEnumProcessHeaps((__int64)RtlpQueryExtendedInformationHeap, a1, 3);
    }
    RtlpEnumProcessHeaps((__int64)RtlpLockUlockAllHeapsCallback, 0LL, 1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
