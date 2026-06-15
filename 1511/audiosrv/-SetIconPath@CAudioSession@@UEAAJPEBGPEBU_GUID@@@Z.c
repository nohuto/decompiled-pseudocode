/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180076E10
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x180065A6C (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, unsigned __int16 *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // r14
  unsigned __int16 **v5; // rdi
  int v6; // esi
  __int64 *v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  int *v12; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v14[9])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  v5 = this;
  v6 = 0;
  v7 = (__int64 *)(this + 49);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 49,
                       (__int64)a2) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 52));
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2, v8, v9);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v12 = (int *)v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v12;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 52));
    if ( v6 < 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xFu,
          (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          v6);
      }
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      v14[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionIconPathChanged::`vftable';
      v14[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v5;
      v14[2] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v5[49];
      v14[3] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v5 + 78), v14);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
