/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180012110
 * Callers:
 *     AudioServerInitialize @ 0x18000CF80 (AudioServerInitialize.c)
 * Callees:
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800124C0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180028F54 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800642E4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800717A4 (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  _QWORD *v1; // r14
  int v3; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  volatile int *v6; // rdx
  _DWORD *v7; // rbx
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v11; // rax
  struct ATL::CStringData *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v13; // rax
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v15; // rax
  struct ATL::CStringData *(__fastcall *v16)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v17; // rax
  struct ATL::CStringData *(__fastcall *v18)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v19; // rax
  struct ATL::CStringData *(__fastcall *v20)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v21; // rax
  _QWORD v22[11]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v24; // [rsp+70h] [rbp+18h]

  v22[4] = -2LL;
  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  try
  {
    ProcessHeap = GetProcessHeap();
    v5 = HeapAlloc(ProcessHeap, 0, 0x160uLL);
    v7 = v5;
    if ( v5 )
    {
      v5[2] = 0;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 3) = 0LL;
      *((_QWORD *)v5 + 4) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_BYTE *)v5 + 56) = 0;
      v5[16] = 0;
      v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v8 == ATL::CAtlStringMgr::GetNilString )
        NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        NilString = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 9) = (char *)NilString + 24;
      v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v10 == ATL::CAtlStringMgr::GetNilString )
        v11 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v11 = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 10) = (char *)v11 + 24;
      v12 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v12 == ATL::CAtlStringMgr::GetNilString )
        v13 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v13 = v12((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 11) = (char *)v13 + 24;
      v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v14 == ATL::CAtlStringMgr::GetNilString )
        v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 14) = (char *)v15 + 24;
      *((GUID *)v7 + 6) = GUID_00000000_0000_0000_0000_000000000000;
      v7[30] = 0;
      v7[33] = -1;
      v7[32] = 0;
      v7[34] = 0;
      v16 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v16 == ATL::CAtlStringMgr::GetNilString )
        v17 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v17 = v16((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 18) = (char *)v17 + 24;
      *((_QWORD *)v7 + 19) = 0LL;
      *((_QWORD *)v7 + 20) = 0LL;
      *((_QWORD *)v7 + 21) = 0LL;
      *((_QWORD *)v7 + 22) = 0LL;
      *((_QWORD *)v7 + 23) = 0LL;
      *((_QWORD *)v7 + 24) = 0LL;
      v7[50] = 0;
      *((_BYTE *)v7 + 204) = 0;
      *((_QWORD *)v7 + 26) = 0LL;
      v18 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v18 == ATL::CAtlStringMgr::GetNilString )
        v19 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v19 = v18((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 27) = (char *)v19 + 24;
      v20 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v20 == ATL::CAtlStringMgr::GetNilString )
        v21 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v21 = v20((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v7 + 28) = (char *)v21 + 24;
      ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(v7 + 58));
      v7[70] = 0;
      *(GUID *)(v7 + 78) = GUID_00000000_0000_0000_0000_000000000000;
      v7[82] = 0;
      *((_QWORD *)v7 + 42) = 0LL;
      *((_QWORD *)v7 + 43) = 0LL;
      *((_QWORD *)v7 + 36) = 0LL;
      v7[71] = 0;
      *(_QWORD *)v7 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v24 = v7;
  }
  catch ( ... )
  {
    v6 = (volatile int *)v22;
    v1 = a1;
    v3 = -2147024882;
    v7 = v24;
  }
  if ( v7 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 2), v6);
    v3 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 4));
    if ( v3 >= 0 )
    {
      *((_BYTE *)v7 + 56) = 1;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, v7);
      }
      v3 = 0;
    }
    CVADServer::InternalFinalConstructRelease((CVADServer *)v7);
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 168LL))(v7, 1LL);
      v7 = 0LL;
    }
  }
  *v1 = v7;
  return (unsigned int)v3;
}
