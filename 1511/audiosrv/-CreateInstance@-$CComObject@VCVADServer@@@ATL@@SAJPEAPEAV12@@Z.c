/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180017B70
 * Callers:
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 * Callees:
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180038F7C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  _QWORD *v1; // r12
  int v2; // r15d
  HANDLE ProcessHeap; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *v9; // rax
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *v11; // rax
  struct ATL::CStringData *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *v13; // rax
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *v15; // rax
  struct ATL::CStringData *(__fastcall *v16)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *v17; // rax
  struct ATL::CStringData *(__fastcall *v18)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *v19; // rax
  _DWORD *v22; // [rsp+80h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v2 = -2147024882;
  try
  {
    ProcessHeap = GetProcessHeap();
    v4 = HeapAlloc(ProcessHeap, 0, 0x148uLL);
    v5 = v4;
    if ( v4 )
    {
      v4[2] = 0;
      memset_0(v4 + 4, 0, 0x28uLL);
      *((_BYTE *)v5 + 56) = 0;
      v5[16] = 0;
      v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v6 == ATL::CAtlStringMgr::GetNilString )
        NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        NilString = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 9) = (char *)NilString + 24;
      v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v8 == ATL::CAtlStringMgr::GetNilString )
        v9 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v9 = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 10) = (char *)v9 + 24;
      v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v10 == ATL::CAtlStringMgr::GetNilString )
        v11 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v11 = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 11) = (char *)v11 + 24;
      v12 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v12 == ATL::CAtlStringMgr::GetNilString )
        v13 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v13 = v12((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 14) = (char *)v13 + 24;
      *((GUID *)v5 + 6) = GUID_00000000_0000_0000_0000_000000000000;
      v5[30] = 0;
      v5[33] = -1;
      v5[32] = 0;
      v5[34] = 0;
      v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v14 == ATL::CAtlStringMgr::GetNilString )
        v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 18) = (char *)v15 + 24;
      *((_QWORD *)v5 + 19) = 0LL;
      *((_QWORD *)v5 + 20) = 0LL;
      *((_QWORD *)v5 + 21) = 0LL;
      *((_QWORD *)v5 + 22) = 0LL;
      *((_QWORD *)v5 + 23) = 0LL;
      *((_QWORD *)v5 + 24) = 0LL;
      v5[50] = 0;
      *((_BYTE *)v5 + 204) = 0;
      *((_QWORD *)v5 + 26) = 0LL;
      v16 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v16 == ATL::CAtlStringMgr::GetNilString )
        v17 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v17 = v16((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 27) = (char *)v17 + 24;
      v18 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v18 == ATL::CAtlStringMgr::GetNilString )
        v19 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v19 = v18((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 28) = (char *)v19 + 24;
      ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(v5 + 58));
      v5[70] = 0;
      *((GUID *)v5 + 19) = GUID_00000000_0000_0000_0000_000000000000;
      v5[80] = 0;
      *((_QWORD *)v5 + 36) = 0LL;
      v5[71] = 0;
      *(_QWORD *)v5 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v5 = 0LL;
    }
    v22 = v5;
  }
  catch ( ... )
  {
    v1 = a1;
    v2 = -2147024882;
    v5 = v22;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v2 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v5 + 4));
    if ( v2 >= 0 )
    {
      *((_BYTE *)v5 + 56) = 1;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v5);
      }
      v2 = 0;
    }
    _InterlockedDecrement(v5 + 2);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 168LL))(v5, 1LL);
      v5 = 0LL;
    }
  }
  *v1 = v5;
  return (unsigned int)v2;
}
