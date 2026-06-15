/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180034310
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002B6F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180032844 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180034670 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180034B00 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x18003523C (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CDuckingNotification *this)
{
  CDuckingNotification *v2; // r14
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // esi
  PRTL_CRITICAL_SECTION_DEBUG v5; // rdi
  int v6; // r8d
  ULONG_PTR *p_SpinCount; // r15
  unsigned int i; // r8d
  ATL::CAtlException *v10; // [rsp+28h] [rbp-30h] BYREF

  v2 = this;
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
      if ( (unsigned __int8)operator==((char *)v3[1].DebugInfo + 32 * i, v2) )
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
            &v3[1],
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
    v2 = this;
    v4 = *(_DWORD *)v10;
  }
LABEL_14:
  LeaveCriticalSection(v3);
  CDuckingNotification::~CDuckingNotification(v2);
  return v4;
}
