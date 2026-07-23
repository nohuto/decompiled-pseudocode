/*
 * XREFs of PspSetProcessAffinitySafe @ 0x14067DD40
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1404690A0 (PspApplyJobLimitsToProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DE70 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(__int64 a1, char a2, __int16 *a3, __int64 *a4, int *a5)
{
  int v5; // esi
  int v10; // edi
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  char v13; // bp
  __int64 v14; // rbx
  int v15; // eax
  _DWORD v17[44]; // [rsp+20h] [rbp-F8h] BYREF

  v5 = 0;
  v10 = 1;
  if ( a4 )
  {
    v17[0] = 1310721;
    memset(&v17[1], 0, 0xA4uLL);
    v11 = *((_WORD *)a4 + 4);
    v12 = *a4;
    if ( v11 )
      LOWORD(v17[0]) = v11 + 1;
    a3 = (__int16 *)v17;
    v13 = 1;
    *(_QWORD *)&v17[2 * v11 + 2] |= v12;
  }
  else
  {
    v13 = 0;
    if ( (a2 & 2) != 0 )
      v13 = 2;
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 944);
    if ( v14 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u);
      v15 = *(_DWORD *)(v14 + 848);
      if ( (v15 & 0x10) != 0 && ((v15 & 0x4000) == 0 || !(unsigned int)KeIsSubsetAffinityEx(a3, (__int16 *)(v14 + 616))) )
      {
        v10 = 0;
        goto LABEL_15;
      }
    }
  }
  v5 = KeSetAffinityProcess(a1, v13, (unsigned __int16 *)a3);
LABEL_15:
  if ( v14 )
    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
  if ( v5 >= 0 )
    *a5 = v10;
  return (unsigned int)v5;
}
