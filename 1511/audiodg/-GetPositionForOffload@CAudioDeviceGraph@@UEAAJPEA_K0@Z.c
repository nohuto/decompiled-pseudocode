/*
 * XREFs of ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x140032880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ii @ 0x14002C79C (WPP_SF_ii.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetPositionForOffload(
        CAudioDeviceGraph *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned __int16 v11; // dx
  __int64 (__fastcall *v12)(volatile signed __int32 *); // rdi
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  void *v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v14 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v7 = -2005139437;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v8 )
    ATL::AtlThrowImpl(-2147467259);
  v9 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v8 + 16) + 32LL))(
         **(_QWORD **)(*(_QWORD *)(v8 + 16) + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v15);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v15)(
           v15,
           &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
           &v14);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v14 + 32LL))(
             v14,
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
            (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
            *a2,
            *a3);
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
        v11 = 26;
        goto LABEL_10;
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
      v11 = 25;
LABEL_10:
      WPP_SF_D(v10[2], v11, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v9);
    }
  }
LABEL_21:
  LeaveCriticalSection(v3);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v7);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
  {
    v12 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL);
    if ( v12 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v15);
    else
      v12((volatile signed __int32 *)v15);
  }
  return (unsigned int)v7;
}
