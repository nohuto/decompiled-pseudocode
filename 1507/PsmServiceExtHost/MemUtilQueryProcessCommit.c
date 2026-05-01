/*
 * XREFs of MemUtilQueryProcessCommit @ 0x18004E464
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x180006F30 (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     MemUtilGetNextRegionInfo @ 0x18004E114 (MemUtilGetNextRegionInfo.c)
 *     MemUtilQueryProcessVaCommon @ 0x18004E660 (MemUtilQueryProcessVaCommon.c)
 */

__int64 __fastcall MemUtilQueryProcessCommit(DWORD a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned __int64 i; // rdx
  unsigned int NextRegionInfo; // eax
  unsigned int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]
  unsigned __int64 v12; // [rsp+68h] [rbp+20h]

  MemUtilQueryProcessVaCommon(a1);
  v3 = 0LL;
  for ( i = 0LL; ; i = v10 + v8 )
  {
    NextRegionInfo = MemUtilGetNextRegionInfo(0LL, i, v12, &v8);
    v6 = NextRegionInfo;
    if ( NextRegionInfo )
      break;
    if ( v9 == 0x8000000 )
      v3 += v10;
    else
      v3 += v11;
  }
  if ( NextRegionInfo == 259 )
  {
    *a2 = v3;
    return 0;
  }
  return v6;
}
