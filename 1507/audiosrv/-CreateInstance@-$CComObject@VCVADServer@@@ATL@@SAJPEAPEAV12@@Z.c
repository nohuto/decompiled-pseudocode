/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180009CE0
 * Callers:
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180009E44 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x180016DF0 (--0CVADServer@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x18008B41C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(CVADServer **a1)
{
  CVADServer **v1; // r15
  int v3; // r14d
  HANDLE ProcessHeap; // rax
  CVADServer *v5; // rax
  CVADServer *v6; // rsi
  signed __int32 v7; // eax
  CVADServer *v9; // [rsp+70h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  try
  {
    ProcessHeap = GetProcessHeap();
    v5 = (CVADServer *)HeapAlloc(ProcessHeap, 0, 0x158uLL);
    v6 = v5;
    if ( v5 )
    {
      CVADServer::CVADServer(v5);
      *(_QWORD *)v6 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v6 = 0LL;
    }
    v9 = v6;
  }
  catch ( ... )
  {
    v1 = a1;
    v3 = -2147024882;
    v6 = v9;
  }
  if ( v6 )
  {
    do
      v7 = *((_DWORD *)v6 + 2);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 2, v7 + 1, v7) );
    v3 = ATL::CComCriticalSection::Init((CVADServer *)((char *)v6 + 16));
    if ( v3 >= 0 )
    {
      *((_BYTE *)v6 + 56) = 1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          16LL,
          &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
          v6);
      }
      v3 = 0;
    }
    CVADServer::InternalFinalConstructRelease(v6);
    if ( v3 )
    {
      (*(void (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)v6 + 136LL))(v6, 1LL);
      v6 = 0LL;
    }
  }
  *v1 = v6;
  return (unsigned int)v3;
}
