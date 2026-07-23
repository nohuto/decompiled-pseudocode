/*
 * XREFs of PopCalculateHiberFileSize @ 0x140547194
 * Callers:
 *     PopAdjustHiberFile @ 0x14052EF58 (PopAdjustHiberFile.c)
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PopSetHiberFileSize @ 0x14066E6C4 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14066E7C8 (PopSetHiberFileType.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PopCalculateHiberFileSize(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // r9
  __int64 v5; // rbx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  __int64 v9; // xmm1_8
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-28h]
  __int64 v13; // [rsp+10h] [rbp-18h]

  v4 = 2;
  v5 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6288LL);
  v6 = 100;
  if ( (unsigned int)PopHiberFileSizePercent >= 0x28 )
  {
    v6 = PopHiberFileSizePercent;
  }
  else
  {
    v4 = 2;
    if ( (unsigned int)(PopHiberFileType - 1) <= 1 )
      v4 = PopHiberFileType;
    v7 = 0;
    v8 = &PopHiberFileBucket;
    while ( 1 )
    {
      v9 = v8[2];
      v12 = *(_OWORD *)v8;
      v13 = v9;
      if ( v5 << 12 <= (unsigned __int64)v12 )
        break;
      ++v7;
      v8 += 3;
      if ( v7 >= 7 )
        goto LABEL_10;
    }
    if ( *((_DWORD *)&v12 + v4 + 2) < 0x64u )
      v6 = *((_DWORD *)&v12 + v4 + 2);
  }
LABEL_10:
  v10 = v5 * v6;
  result = 0x47AE147AE147AE15LL * v10;
  *a1 = (v10 / 0x64) << 12;
  if ( a2 )
    *a2 = v4;
  return result;
}
