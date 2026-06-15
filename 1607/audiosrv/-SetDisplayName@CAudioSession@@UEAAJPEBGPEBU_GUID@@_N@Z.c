/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18005F2D0
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
__int64 __fastcall CAudioSession::SetDisplayName(CAudioSession *this, char *a2, const struct _GUID *a3, char a4)
{
  const struct _GUID *v5; // rsi
  CAudioSession *v7; // rbx
  int v8; // edi
  _QWORD *v9; // r12
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  void **v13; // [rsp+30h] [rbp-48h] BYREF
  CAudioSession *v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  const struct _GUID *v16; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+98h] [rbp+20h]

  v5 = a3;
  v7 = this;
  v8 = 0;
  if ( a4 )
    *((_BYTE *)this + 368) = 1;
  v9 = (_QWORD *)((char *)this + 384);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       (unsigned __int16 **)this + 48,
                       (__int64)a2)
    && (a4 || !*((_BYTE *)v7 + 368)) )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)((char *)v7 + 416));
    v8 = 0;
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9, a2);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v11 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v19 = *(_DWORD *)v11;
      v7 = this;
      v5 = a3;
      v8 = v19;
    }
    if ( (_BYTE)v14 )
      ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v13);
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 310, v8);
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
      v13 = &CAudioSessionDisplayNameChanged::`vftable';
      v14 = v7;
      v15 = *((_QWORD *)v7 + 48);
      v16 = v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)v7 + 624),
        (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&v13);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
