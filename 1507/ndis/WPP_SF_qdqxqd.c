/*
 * XREFs of WPP_SF_qdqxqd @ 0x1C006DA60
 * Callers:
 *     ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00DE530 (-NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAP.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qdqxqd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+A0h] [rbp+18h] BYREF
  int v5; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, 0x57u, &v4);
}
