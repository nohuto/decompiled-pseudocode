/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14002F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Dg @ 0x14003018C (WPP_SF_Dg.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v7; // ebx
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // r8
  float v15; // xmm0_4
  void (*v16)(void); // rax
  void *v18; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v20 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v7 = -2005139437;
    goto LABEL_24;
  }
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
    goto LABEL_24;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v8 )
    ATL::AtlThrowImpl(-2147467259);
  v9 = **(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v8 + 16) + 32LL);
  v10 = (**v9)(v9, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v18);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v10 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v18)(
            v18,
            &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
            &v20);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 32LL))(v20, &v19);
      if ( v7 >= 0 )
      {
        v7 = 0;
        *a2 = v19;
        v15 = *((float *)this + 26);
        *a3 = v15;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Dg(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, *a2, v15);
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
        v12 = 22;
        goto LABEL_13;
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
      v12 = 21;
LABEL_13:
      WPP_SF_D(v11[2], v12, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, v10);
    }
  }
LABEL_24:
  LeaveCriticalSection(v3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetEndpointBufferSize", 370, v7);
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v18 )
  {
    v16 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
    if ( (char *)v16 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((int *)v18);
    else
      v16();
  }
  return (unsigned int)v7;
}
