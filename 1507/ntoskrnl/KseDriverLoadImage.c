/*
 * XREFs of KseDriverLoadImage @ 0x1405786C4
 * Callers:
 *     MiFinalizeDriverImage @ 0x140576DFC (MiFinalizeDriverImage.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x14020C348 (KsepEvntLogShimsApplied.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x1405788F8 (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x14069CA0C (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int ShimsForDriver; // ebx
  __int64 v4; // rcx
  unsigned __int16 v5[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h]
  int v7; // [rsp+40h] [rbp-10h] BYREF
  __int64 v8; // [rsp+48h] [rbp-8h]
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0;
  v10 = 0LL;
  *(_DWORD *)v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return 3221225659LL;
  if ( dword_140353C94 == 2 && (KseEngine & 1) == 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(v5, a1 + 88);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepStringDuplicateUnicode(&v7, a1 + 72);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepGetShimsForDriver(
                           (__int64)v5,
                           (int)&v7,
                           *(_QWORD *)(a1 + 48),
                           *(unsigned int *)(a1 + 64),
                           &v10,
                           &v9);
        if ( ShimsForDriver >= 0 )
        {
          ShimsForDriver = KsepApplyShimsToDriver(a1, v5, v10, v9);
          if ( ShimsForDriver >= 0 )
            KsepEvntLogShimsApplied(v5, v10, v9);
        }
      }
    }
    if ( !ShimsForDriver )
    {
      dword_140353C98 |= 0x800u;
      qword_140353CE8 = *(_QWORD *)(a1 + 48);
    }
    if ( (int)(ShimsForDriver + 0x80000000) < 0 || ShimsForDriver == -1073741275 )
    {
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458946LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v9, v6);
      KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v9, v6);
    }
    else if ( v6 )
    {
      v4 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140332304[2 * v4] = ShimsForDriver;
      KsepHistoryErrors[2 * v4] = 458941;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          4LL,
          "KSE: shimming failed for driver [%ws] - [0x%x] but we let the load succeed ...\n",
          v6,
          (unsigned int)ShimsForDriver);
      KsepLogError(
        4,
        "KSE: shimming failed for driver [%ws] - [0x%x] but we let the load succeed ...\n",
        v6,
        (unsigned int)ShimsForDriver);
    }
  }
  KsepStringFree(v5);
  KsepStringFree(&v7);
  return 0LL;
}
