/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009044
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000751C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007808 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180007A40 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007B98 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180007060 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x1800096D8 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180009D68 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A428 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  LPCRITICAL_SECTION v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned int i; // ebx
  unsigned int j; // ebx
  char *v6; // rsi
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rcx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-70h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-68h] BYREF
  void *Block; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+58h] [rbp-40h] BYREF
  int v18; // [rsp+60h] [rbp-38h]
  _BYTE v19[8]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]
  unsigned __int64 v24; // [rsp+B8h] [rbp+20h]

  v2 = lpCriticalSection;
  Block = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v3 = 0LL;
  v24 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(
        &Block,
        (char *)v2[1].DebugInfo + 32 * i);
      v24 = ++v3;
    }
    catch ( ATL::CAtlException *v11 )
    {
      if ( *(_DWORD *)v11 == -1073741571 )
        _resetstkoflw();
      v2 = lpCriticalSection;
      v3 = v24;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  for ( j = 0; j < v3; ++j )
  {
    try
    {
      if ( j >= v14 )
        ATL::AtlThrowImpl(-2147024809);
      v6 = (char *)Block + 32 * j;
      v17 = *(_QWORD *)v6;
      v18 = *((_DWORD *)v6 + 2);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        v19,
        v6 + 16);
      v9 = *((_QWORD *)v6 + 3);
      v20 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      CGenerateDuckingNotification::Invoke(a2, &v17, v7, v8);
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        _resetstkoflw();
      v3 = v24;
      continue;
    }
  }
  if ( Block )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(Block, v14);
    free(Block);
  }
  return 0LL;
}
