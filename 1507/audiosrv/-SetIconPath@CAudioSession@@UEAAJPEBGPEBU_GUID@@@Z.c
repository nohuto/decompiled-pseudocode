/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18007BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800674A4 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, char *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // r14
  unsigned __int16 **v5; // rdi
  int v6; // esi
  int **v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  int *v12; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v14[9])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  v5 = this;
  v6 = 0;
  v7 = (int **)(this + 31);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 31,
                       (__int64)a2) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 34));
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2, v8, v9, -2LL);
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
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 34));
    if ( v6 < 0 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xFu,
          (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          v6);
      }
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      v14[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionIconPathChanged::`vftable';
      v14[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v5;
      v14[2] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v5[31];
      v14[3] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v5 + 59), v14);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
