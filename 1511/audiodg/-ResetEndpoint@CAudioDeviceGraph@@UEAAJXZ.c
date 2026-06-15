/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140032D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  int v3; // esi
  __int64 v4; // rax
  int v5; // eax
  _QWORD *v6; // rcx
  unsigned __int16 v7; // dx
  __int64 (__fastcall *v8)(volatile signed __int32 *); // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v3 = -2005139437;
    goto LABEL_21;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v4 )
    ATL::AtlThrowImpl(-2147467259);
  v5 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v4 + 16) + 32LL))(
         **(_QWORD **)(*(_QWORD *)(v4 + 16) + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v11);
  v3 = v5;
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v11)(
           v11,
           &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
           &v10);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      if ( v3 >= 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
      }
    }
    else
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v7 = 34;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v7 = 33;
LABEL_10:
      WPP_SF_D(v6[2], v7, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v5);
    }
  }
LABEL_21:
  LeaveCriticalSection(v1);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v3);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
  {
    v8 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL);
    if ( v8 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v11);
    else
      v8((volatile signed __int32 *)v11);
  }
  return (unsigned int)v3;
}
