/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180028AB4
 * Callers:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017DA0 (-DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180028C50 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdi
  unsigned int i; // edx
  ULONG_PTR *p_SpinCount; // r14
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF

  v2 = lpCriticalSection;
  v3 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0; ; ++i )
    {
      v4 = i;
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        break;
      if ( *((_DWORD *)&v2[1].DebugInfo->Type + i) == a2 )
      {
        p_SpinCount = &v2[1].SpinCount;
        if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v2[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        --*(_DWORD *)(*p_SpinCount + 4LL * i);
        if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v2[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        if ( !*(_DWORD *)(*p_SpinCount + 4LL * i) )
        {
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v2[1], i);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v2[1].SpinCount, v4);
          goto LABEL_14;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v8 )
  {
    v2 = lpCriticalSection;
    v3 = *(_DWORD *)v8;
  }
LABEL_14:
  LeaveCriticalSection(v2);
  return v3;
}
