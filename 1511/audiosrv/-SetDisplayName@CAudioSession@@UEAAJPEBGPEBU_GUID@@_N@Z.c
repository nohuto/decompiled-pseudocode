/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x180076C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x180065A6C (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::SetDisplayName(
        CAudioSession *this,
        unsigned __int16 *a2,
        const struct _GUID *a3,
        char a4)
{
  const struct _GUID *v5; // r14
  CAudioSession *v7; // rdi
  int v8; // esi
  __int64 *v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  int *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v15[9])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  v7 = this;
  v8 = 0;
  if ( a4 )
    *((_BYTE *)this + 368) = 1;
  v9 = (__int64 *)((char *)this + 384);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       (unsigned __int16 **)this + 48,
                       (__int64)a2)
    && (a4 || !*((_BYTE *)v7 + 368)) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 416));
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9, a2, v10, v11);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v13 = (int *)v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _resetstkoflw();
      v7 = this;
      v5 = a3;
      v8 = *v13;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 416));
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          v8);
      }
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
      v15[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionDisplayNameChanged::`vftable';
      v15[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v7;
      v15[2] = *((void (__fastcall ***)(_QWORD, volatile signed __int32 **))v7 + 48);
      v15[3] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v7 + 624), v15);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
