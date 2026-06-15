/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x1400321B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Dg @ 0x1400330F4 (WPP_SF_Dg.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm0_4
  __int64 (__fastcall *v15)(volatile signed __int32 *); // rdi
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v19 = 0LL;
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
  v9 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v8 + 16) + 32LL))(
         **(_QWORD **)(*(_QWORD *)(v8 + 16) + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v17);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v17)(
           v17,
           &GUID_88db6d4d_9bf4_43e4_93ef_3a623060a0b4,
           &v19);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 32LL))(v19, &v18);
      if ( v7 >= 0 )
      {
        v7 = 0;
        *a2 = v18;
        v14 = *((float *)this + 26);
        *a3 = v14;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Dg(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, *a2, v14);
        }
      }
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v11 = 22;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v11 = 21;
LABEL_13:
      WPP_SF_D(v10[2], v11, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v9);
    }
  }
LABEL_24:
  LeaveCriticalSection(v3);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v7);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 )
  {
    v15 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL);
    if ( v15 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v17);
    else
      v15((volatile signed __int32 *)v17);
  }
  return (unsigned int)v7;
}
