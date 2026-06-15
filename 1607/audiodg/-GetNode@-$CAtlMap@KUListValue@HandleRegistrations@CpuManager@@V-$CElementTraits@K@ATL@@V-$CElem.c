/*
 * XREFs of ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140027040
 * Callers:
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140028010 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x1400281D0 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x1400289E4 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
        __int64 a1,
        unsigned int a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 v6; // rdx
  __int64 result; // rax

  *a4 = a2;
  *a3 = a2 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v6 = 0LL;
  *a5 = 0LL;
  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !result )
    return 0LL;
  while ( *(_DWORD *)(result + 32) != *a4 || *(_DWORD *)result != a2 )
  {
    v6 = result;
    result = *(_QWORD *)(result + 24);
    if ( !result )
      return 0LL;
  }
  *a5 = v6;
  return result;
}
