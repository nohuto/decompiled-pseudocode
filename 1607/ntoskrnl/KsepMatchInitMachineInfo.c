/*
 * XREFs of KsepMatchInitMachineInfo @ 0x1407B76CC
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitCpuInfo @ 0x1407B7994 (KsepMatchInitCpuInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x1407B7A14 (KsepMatchInitAcpiOemInfo.c)
 */

__int64 KsepMatchInitMachineInfo()
{
  int matched; // ebx
  int v1; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rdx
  char v10; // al

  matched = KsepMatchInitAcpiOemInfo();
  if ( matched < 0 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = matched;
    KsepHistoryErrors[2 * v6] = 655516;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
    KsepLogError(0, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
  }
  v1 = KsepMatchInitCpuInfo();
  v2 = v1;
  if ( v1 < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = v1;
    v8 = KsepDebugFlag;
    KsepHistoryErrors[2 * v7] = 655522;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v2);
    KsepLogError(0, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v2);
  }
  v3 = KsepMatchInitBiosInfo();
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = v3;
    v10 = KsepDebugFlag;
    KsepHistoryErrors[2 * v9] = 655528;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v4);
    KsepLogError(0, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v4);
  }
  KsepMatchMachineInfo = (__int64)&qword_140341160;
  qword_1403078E8 = (__int64)&qword_1403413B0;
  qword_1403078F0 = (__int64)&qword_1403413E8;
  qword_1403078F8 = (__int64)&qword_140341430;
  return 0LL;
}
