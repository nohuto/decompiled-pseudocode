/*
 * XREFs of CmpUnlockKcbStack @ 0x1404036E0
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000AEB8 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140402E14 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAF6C (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401B5218 (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
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
