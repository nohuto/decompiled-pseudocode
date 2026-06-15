/*
 * XREFs of ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800090C0
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180007050 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x180009460 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009504 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?GrowBuffer@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@AEAA_N_K@Z @ 0x1800097B4 (-GrowBuffer@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@AEAA_N_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::AddInterface(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // esi
  __int64 i; // rdx
  __int64 v6; // rcx
  bool v7; // al
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r15
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdx
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v16; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  EnterCriticalSection(a1);
  for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)&v3[1].LockCount; i = (unsigned int)(i + 1) )
  {
    v6 = (__int64)v3[1].DebugInfo + 32 * (unsigned int)i;
    if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)(v2 + 8) )
    {
      if ( !*(_QWORD *)v6 || !*(_QWORD *)v2 )
        break;
      v7 = *(_QWORD *)v6 == *(_QWORD *)v2;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
      break;
  }
  if ( (unsigned int)i == *(_QWORD *)&v3[1].LockCount )
  {
    try
    {
      v20 = ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(&v3[1], v2);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v4 = *(_DWORD *)v13;
      if ( *(int *)v13 < 0 )
      {
        v3 = a1;
        v2 = a2;
        goto LABEL_27;
      }
      v3 = a1;
      v2 = a2;
    }
    v4 = 0;
    try
    {
      DebugInfo = v3[2].DebugInfo;
      if ( (unsigned __int64)DebugInfo >= *(_QWORD *)&v3[2].LockCount
        && !(unsigned __int8)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::GrowBuffer(
                               &v3[1].SpinCount,
                               (char *)&DebugInfo->Type + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      v9 = (_DWORD *)(v3[1].SpinCount + 4LL * (_QWORD)DebugInfo);
      if ( v9 )
        *v9 = 1;
      ++v3[2].DebugInfo;
    }
    catch ( ATL::CAtlException *v16 )
    {
      v14 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v19 = *(_DWORD *)v14;
      v4 = *(_DWORD *)v14;
      v3 = a1;
      if ( v19 < 0 )
        ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(&a1[1], v20);
      v2 = a2;
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v3[1].SpinCount + 4 * i);
  }
LABEL_27:
  LeaveCriticalSection(v3);
  v10 = *(_QWORD *)(v2 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 16) - 24LL);
  if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
  return v4;
}
