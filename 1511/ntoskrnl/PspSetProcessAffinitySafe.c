/*
 * XREFs of PspSetProcessAffinitySafe @ 0x14063F50C
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x14063F640 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeSetAffinityProcess @ 0x14014075C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1401C4D7C (KeIsSubsetAffinityEx.c)
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
  _DWORD v17[2]; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v18[21]; // [rsp+28h] [rbp-F0h] BYREF

  v5 = 0;
  v10 = 1;
  if ( a4 )
  {
    v17[1] = 0;
    v17[0] = 1310721;
    memset(v18, 0, 0xA0uLL);
    v11 = *((_WORD *)a4 + 4);
    v12 = *a4;
    if ( v11 )
      LOWORD(v17[0]) = v11 + 1;
    a3 = (__int16 *)v17;
    v13 = 1;
    v18[v11] |= v12;
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
      v15 = *(_DWORD *)(v14 + 856);
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
