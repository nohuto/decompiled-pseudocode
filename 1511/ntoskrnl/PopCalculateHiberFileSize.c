/*
 * XREFs of PopCalculateHiberFileSize @ 0x1404F9E4C
 * Callers:
 *     PopAdjustHiberFile @ 0x1404F5998 (PopAdjustHiberFile.c)
 *     PopHiberInitializeResources @ 0x1404F61A4 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     PopSetHiberFileSize @ 0x140636238 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14063633C (PopSetHiberFileType.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400F4844 (MmGetNumberOfPhysicalPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PopCalculateHiberFileSize(_QWORD *a1)
{
  __int64 NumberOfPhysicalPages; // rax
  unsigned __int8 v3; // r9
  unsigned __int8 *v4; // r10
  int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  __int64 v9; // xmm1_8
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  v6 = v5 + 100;
  if ( (unsigned int)PopHiberFileSizePercent >= 0x28 )
  {
    v6 = PopHiberFileSizePercent;
  }
  else
  {
    if ( (unsigned int)(PopHiberFileType - 1) <= 1 )
      v3 = PopHiberFileType;
    v7 = 0;
    v8 = &PopHiberFileBucket;
    while ( 1 )
    {
      v9 = v8[2];
      v12 = *(_OWORD *)v8;
      v13 = v9;
      if ( NumberOfPhysicalPages << 12 <= (unsigned __int64)v12 )
        break;
      ++v7;
      v8 += 3;
      if ( v7 >= 7 )
        goto LABEL_10;
    }
    if ( *((_DWORD *)&v12 + v3 + 2) < v6 )
      v6 = *((_DWORD *)&v12 + v3 + 2);
  }
LABEL_10:
  v10 = NumberOfPhysicalPages * v6;
  result = 0x47AE147AE147AE15LL * v10;
  *a1 = (v10 / 0x64) << 12;
  if ( v4 )
    *v4 = v3;
  return result;
}
