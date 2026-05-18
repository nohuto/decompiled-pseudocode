/*
 * XREFs of sub_180004CC0 @ 0x180004CC0
 * Callers:
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004CC0(__int64 a1, int a2, __int64 a3)
{
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)a1 = &off_180008E88;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = a2;
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 80) = GetProcessHeap();
  GetNativeSystemInfo(&SystemInfo);
  if ( !SystemInfo.wProcessorArchitecture || SystemInfo.wProcessorArchitecture == 5 )
  {
    *(_QWORD *)(a1 + 8) = sub_180005380;
    *(_QWORD *)(a1 + 16) = sub_180004FC0;
    *(_QWORD *)(a1 + 24) = &sub_180005050;
    goto LABEL_7;
  }
  if ( SystemInfo.wProcessorArchitecture == 9 || SystemInfo.wProcessorArchitecture == 12 )
  {
    *(_QWORD *)(a1 + 8) = sub_180005380;
    *(_QWORD *)(a1 + 16) = sub_180004FC0;
    *(_QWORD *)(a1 + 24) = &sub_180005050;
LABEL_7:
    *(_QWORD *)(a1 + 32) = &sub_1800051B0;
  }
  return a1;
}
