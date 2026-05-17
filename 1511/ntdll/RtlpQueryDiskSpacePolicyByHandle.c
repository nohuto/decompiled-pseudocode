/*
 * XREFs of RtlpQueryDiskSpacePolicyByHandle @ 0x18008389C
 * Callers:
 *     RtlpQueryDiskSpacePolicy @ 0x180083740 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A59E0 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicyByHandle(__int64 a1, int *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  _BYTE v6[16]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+58h] [rbp-20h]
  unsigned int v9; // [rsp+5Ch] [rbp-1Ch]

  result = ZwQueryVolumeInformationFile(a1, v6, v7, 32LL, 7);
  if ( (int)result >= 0 )
  {
    v4 = v7[0] * v8 * (unsigned __int64)v9;
    if ( v4 <= 0x200000000LL )
    {
      *a2 = 5;
    }
    else if ( v4 <= 0x800000000LL )
    {
      *a2 = 10;
    }
    else
    {
      v5 = 20;
      if ( v4 <= 0x2000000000LL )
        v5 = 15;
      *a2 = v5;
    }
    return 0LL;
  }
  return result;
}
