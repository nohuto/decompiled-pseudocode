/*
 * XREFs of ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x14002F930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ii @ 0x14002B318 (WPP_SF_ii.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetPositionForOffload(
        CAudioDeviceGraph *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // ebx
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned __int16 v12; // dx
  void (*v13)(void); // rax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v15 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v7 = -2005139437;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v8 )
    ATL::AtlThrowImpl(-2147467259);
  v9 = **(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v8 + 16) + 32LL);
  v10 = (**v9)(v9, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v16);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v10 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v16)(
            v16,
            &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
            &v15);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v15 + 32LL))(
             v15,
             a2,
             a3);
      if ( v7 >= 0 )
      {
        v7 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_ii(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Bu,
            (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
            *a2,
            *a3);
        }
      }
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v12 = 26;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v12 = 25;
LABEL_10:
      WPP_SF_D(v11[2], v12, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, v10);
    }
  }
LABEL_21:
  LeaveCriticalSection(v3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetPositionForOffload", 453, v7);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
  {
    v13 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v13 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((int *)v16);
    else
      v13();
  }
  return (unsigned int)v7;
}
