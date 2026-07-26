/*
 * XREFs of WPP_SF_DDDDDDDDDDD @ 0x1C003EBE8
 * Callers:
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00AA9B0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDDDDDDDDDD(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+F8h] [rbp+2Fh] BYREF
  int v5; // [rsp+100h] [rbp+37h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, 0x6Bu, &v4);
}
