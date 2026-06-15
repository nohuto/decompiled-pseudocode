/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000F854
 * Callers:
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x180014F08 (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAI@Z @ 0x18002EC30 (-InternalSetAtIndex@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800328D0 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18003EAF8 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800752E4 (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

volatile signed __int32 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(volatile signed __int32 *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, _QWORD, __int64); // rsi
  struct ATL::IAtlStringMgr *(__fastcall *v3)(ATL::CAtlStringMgr *__hidden); // rbx
  volatile signed __int32 *v4; // rbx
  __int64 v6; // rax
  rsize_t v7; // r9

  v1 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))a1;
  v3 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**(_QWORD **)a1 + 32LL);
  if ( v3 != ATL::CAtlStringMgr::Clone )
    v1 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))v3(*(ATL::CAtlStringMgr **)a1);
  if ( *((int *)a1 + 4) >= 0 && v1 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))a1 )
  {
    v4 = a1;
    _InterlockedIncrement(a1 + 4);
  }
  else
  {
    v6 = (**v1)(v1, *((unsigned int *)a1 + 2), 2LL);
    v4 = (volatile signed __int32 *)v6;
    if ( !v6 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v6 + 8) = *((_DWORD *)a1 + 2);
    v7 = 2LL * (*((_DWORD *)a1 + 2) + 1);
    memcpy_s((void *const)(v6 + 24), v7, (const void *const)(a1 + 6), v7);
  }
  return v4;
}
