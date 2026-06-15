/*
 * XREFs of ?CreateInstance@?$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002DF24
 * Callers:
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180009E44 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCSaProvider@@@ATL@@QEAA@PEAX@Z @ 0x18002E268 (--0-$CComObject@VCSaProvider@@@ATL@@QEAA@PEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x18008B41C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CSaProvider>::CreateInstance(__int64 *a1)
{
  __int64 *v1; // r15
  int v3; // r14d
  LPVOID v4; // rax
  __int64 v5; // rdi
  signed __int32 v6; // eax
  __int64 v8; // [rsp+70h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  try
  {
    v4 = operator new(0x98uLL);
    if ( v4 )
      v5 = ATL::CComObject<CSaProvider>::CComObject<CSaProvider>(v4);
    else
      v5 = 0LL;
    v8 = v5;
  }
  catch ( ... )
  {
    v1 = a1;
    v3 = -2147024882;
    v5 = v8;
  }
  if ( v5 )
  {
    do
      v6 = *(_DWORD *)(v5 + 8);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) );
    v3 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v5 + 16));
    if ( v3 >= 0 )
    {
      *(_BYTE *)(v5 + 56) = 1;
      v3 = 0;
    }
    CVADServer::InternalFinalConstructRelease((CVADServer *)v5);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, 1LL);
      v5 = 0LL;
    }
  }
  *v1 = v5;
  return (unsigned int)v3;
}
