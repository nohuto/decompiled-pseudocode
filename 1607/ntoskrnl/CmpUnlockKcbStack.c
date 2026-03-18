/*
 * XREFs of CmpUnlockKcbStack @ 0x140404820
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000B338 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140403F54 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAEB8 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401B5334 (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x1404375A0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // di
  __int64 v3; // rbx
  bool v4; // bp
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  __int64 v7; // rtt

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i < 2 )
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    else
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (i - 2));
    v4 = (*(_DWORD *)(v3 + 4) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(v3 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v3 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 48));
    _m_prefetchw((const void *)(v3 + 40));
    v5 = *(_QWORD *)(v3 + 40);
    v6 = v5 - 16;
    if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v6 = 0LL;
    if ( (v5 & 2) != 0
      || (v7 = *(_QWORD *)(v3 + 40), v7 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 40), v6, v5)) )
    {
      ExfReleasePushLock((_QWORD *)(v3 + 40));
    }
    KeAbPostRelease(v3 + 40);
    if ( (*(_DWORD *)(v3 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v3, *(_DWORD *)(v3 + 60));
    if ( v4 && (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)v3);
  }
}
