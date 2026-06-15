/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005F1C
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000E4F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x1800059C4 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180005A28 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180005E20 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180007BE8 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CDuckingNotification *a2)
{
  CDuckingNotification *v2; // r14
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // esi
  PRTL_CRITICAL_SECTION_DEBUG v5; // rdi
  int v6; // r8d
  ULONG_PTR *p_SpinCount; // r15
  unsigned int i; // r8d
  ATL::CAtlException *v10; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0; ; i = v6 + 1 )
    {
      v5 = (PRTL_CRITICAL_SECTION_DEBUG)i;
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        break;
      if ( operator==((__int64 *)v3[1].DebugInfo + 4 * i, (__int64)v2) )
      {
        p_SpinCount = &v3[1].SpinCount;
        if ( v5 >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        --*(_DWORD *)(*p_SpinCount + 4LL * (_QWORD)v5);
        if ( v5 >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        if ( !*(_DWORD *)(*p_SpinCount + 4LL * (_QWORD)v5) )
        {
          ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
            &v3[1].DebugInfo,
            (unsigned int)v5);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, (unsigned int)v5);
          goto LABEL_14;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v10 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v10;
  }
LABEL_14:
  LeaveCriticalSection(v3);
  CDuckingNotification::~CDuckingNotification(v2);
  return v4;
}
