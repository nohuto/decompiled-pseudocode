/*
 * XREFs of ?IsUsingResource@CAudioStream@@UEAAH_K@Z @ 0x180082370
 * Callers:
 *     <none>
 * Callees:
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::IsUsingResource(CAudioStream *this, __int64 a2)
{
  volatile int *v4; // rdx
  int SAProvider; // edi
  unsigned int v6; // esi
  __int64 (__fastcall *v7)(__int64, volatile int *); // rdi
  __int64 (__fastcall *v9)(__int64, volatile int *); // rsi
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  if ( g_UseNewGraphBuilder )
    return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 160LL))(
             *((_QWORD *)this + 8),
             a2);
  v11 = 0LL;
  SAProvider = GetSAProvider((__int64)&v11);
  if ( SAProvider < 0
    || (v10 = 0,
        SAProvider = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v11 + 48LL))(
                       v11,
                       *((_QWORD *)this + 6),
                       a2,
                       &v10),
        SAProvider < 0) )
  {
    if ( v11 )
    {
      v9 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 16LL);
      if ( v9 == ATL::CComObject<CSaProvider>::Release )
        ATL::CComObject<CSaProvider>::Release(v11, v4);
      else
        ((void (__fastcall *)(__int64))v9)(v11);
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x10u,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        SAProvider);
    }
    return 0LL;
  }
  else
  {
    v6 = v10;
    if ( v11 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 16LL);
      if ( v7 == ATL::CComObject<CSaProvider>::Release )
        ATL::CComObject<CSaProvider>::Release(v11, v4);
      else
        ((void (__fastcall *)(__int64))v7)(v11);
    }
    return v6;
  }
}
