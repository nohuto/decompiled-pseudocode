/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800091AC
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180006E00 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009780 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  __int64 v2; // rsi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r14d
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  bool v7; // al
  unsigned __int64 v8; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  char *v10; // rdx
  errno_t v11; // eax
  __int64 i; // rdx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rdx
  ATL::CAtlException *v16; // [rsp+28h] [rbp-20h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v5 = (unsigned int)i;
      if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
        goto LABEL_35;
      v6 = (__int64)v3[1].DebugInfo + 32 * (unsigned int)i;
      if ( *(_DWORD *)(v6 + 8) != *(_DWORD *)(v2 + 8) )
        break;
      if ( *(_QWORD *)v6 && *(_QWORD *)v2 )
      {
        v7 = *(_QWORD *)v6 == *(_QWORD *)v2;
        goto LABEL_8;
      }
LABEL_9:
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      --*(_DWORD *)(v3[1].SpinCount + 4 * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      if ( !*(_DWORD *)(v3[1].SpinCount + 4 * i) )
      {
        ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
          &v3[1],
          (unsigned int)i);
        v8 = v5 + 1;
        if ( v5 + 1 < v5 || (DebugInfo = v3[2].DebugInfo, v8 > (unsigned __int64)DebugInfo) )
          ATL::AtlThrowImpl(-2147024809);
        v10 = (char *)DebugInfo - v8;
        if ( v10 )
        {
          v11 = memmove_s(
                  (void *const)(v3[1].SpinCount + 4 * v5),
                  4LL * (_QWORD)v10,
                  (const void *const)(v3[1].SpinCount + 4 * v8),
                  4LL * (_QWORD)v10);
          if ( v11 )
          {
            if ( v11 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v11 == 22 || v11 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v11 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
        }
        --v3[2].DebugInfo;
        goto LABEL_35;
      }
LABEL_27:
      ;
    }
    v7 = 0;
LABEL_8:
    if ( !v7 )
      goto LABEL_27;
    goto LABEL_9;
  }
  catch ( ATL::CAtlException *v16 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v16;
  }
LABEL_35:
  LeaveCriticalSection(v3);
  v13 = *(_QWORD *)(v2 + 24);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 16) - 24LL);
  if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14);
  return v4;
}
