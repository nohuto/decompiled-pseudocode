/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18005F450
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x18005A828 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, char *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // rsi
  unsigned __int16 **v5; // rdi
  int v6; // ebx
  _QWORD *v7; // r15
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-50h] BYREF
  void **v12; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 **v13; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-38h]
  const struct _GUID *v15; // [rsp+48h] [rbp-30h]

  v3 = a3;
  v5 = this;
  v6 = 0;
  v7 = this + 49;
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 49,
                       (__int64)a2) )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)(v5 + 52));
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = (int *)v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v10;
    }
    if ( (_BYTE)v13 )
      ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v12);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 434, v6);
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      v12 = &CAudioSessionIconPathChanged::`vftable';
      v13 = v5;
      v14 = v5[49];
      v15 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)(v5 + 78),
        (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&v12);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
