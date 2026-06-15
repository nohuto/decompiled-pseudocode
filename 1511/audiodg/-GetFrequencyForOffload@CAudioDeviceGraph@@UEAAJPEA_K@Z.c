/*
 * XREFs of ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x1400325B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFrequencyForOffload(CAudioDeviceGraph *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  _QWORD *v8; // rcx
  unsigned __int16 v9; // dx
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rdi
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v5 = -2005139437;
    goto LABEL_21;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v6 + 16) + 32LL))(
         **(_QWORD **)(*(_QWORD *)(v6 + 16) + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v13);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v13)(
           v13,
           &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
           &v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v12 + 24LL))(v12, a2);
      if ( v5 >= 0 )
      {
        v5 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Fu,
            (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
            *a2);
        }
      }
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v9 = 30;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v9 = 29;
LABEL_10:
      WPP_SF_D(v8[2], v9, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v7);
    }
  }
LABEL_21:
  LeaveCriticalSection(v2);
  if ( v5 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v5);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
  {
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL);
    if ( v10 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v13);
    else
      v10((volatile signed __int32 *)v13);
  }
  return (unsigned int)v5;
}
