/*
 * XREFs of ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005FD4
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18000E5C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x1800059C4 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180005A28 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x180005B0C (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x180005E68 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180007BE8 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        const struct CDuckingNotification *a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // edi
  __int64 i; // r8
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v9; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+18h]
  unsigned __int64 v13; // [rsp+78h] [rbp+20h]

  v2 = lpCriticalSection;
  v3 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL;
        (unsigned __int64)(unsigned int)i < *(_QWORD *)&v2[1].LockCount
     && !operator==((__int64 *)v2[1].DebugInfo + 4 * (unsigned int)i, (__int64)a2);
        i = (unsigned int)(i + 1) )
  {
    ;
  }
  if ( (unsigned int)i == *(_QWORD *)&v2[1].LockCount )
  {
    try
    {
      v13 = ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(&v2[1].DebugInfo, a2);
    }
    catch ( ATL::CAtlException *v8 )
    {
      v6 = v8;
      if ( *(_DWORD *)v8 == -1073741571 )
        _resetstkoflw();
      v3 = *(_DWORD *)v6;
      if ( *(int *)v6 < 0 )
      {
        v2 = lpCriticalSection;
        goto LABEL_6;
      }
      v2 = lpCriticalSection;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _resetstkoflw();
      v12 = *(_DWORD *)v7;
      v3 = *(_DWORD *)v7;
      v2 = lpCriticalSection;
      if ( v12 < 0 )
        ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
          &lpCriticalSection[1].DebugInfo,
          v13);
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v2[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v2[1].SpinCount + 4 * i);
  }
LABEL_6:
  LeaveCriticalSection(v2);
  CDuckingNotification::~CDuckingNotification(a2);
  return v3;
}
