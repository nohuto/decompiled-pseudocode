/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140009AB0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140001D10 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x14000D3B0 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019552 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x1400250CC (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@@Z @ 0x14002E468 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edx
  _QWORD *v17; // rdi
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct ATL::CAtlPlex *v26; // r8
  int v27; // edx
  _QWORD *v28; // rcx
  int i; // edx
  __int64 v30; // rax
  struct CConnectionInstance *v31; // rax
  __int64 v32; // r14
  void *v33; // rdi
  int v34; // eax
  struct IUnknown *v35; // rdx
  __int64 v36; // r12
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  void *v40; // rdi
  int v41; // eax
  struct IUnknown *v42; // rdx
  __int64 v43; // r12
  struct CConnectionInstance *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  char *v47; // r14
  __int64 v48; // r12
  __int64 *v49; // rax
  __int64 v50; // rcx
  int pExceptionObject; // [rsp+20h] [rbp-68h] BYREF
  int v52; // [rsp+24h] [rbp-64h] BYREF
  int v53; // [rsp+28h] [rbp-60h] BYREF
  int v54; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v55; // [rsp+30h] [rbp-58h]
  long *v56; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v57; // [rsp+40h] [rbp-48h] BYREF
  int v58; // [rsp+90h] [rbp+8h]
  struct CConnectionInstance *v59; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+A8h] [rbp+20h]

  v55 = -2LL;
  v2 = 0LL;
  v60 = 0LL;
  v58 = 0;
  try
  {
    v3 = *((_QWORD *)this + 3);
    if ( !v3 )
      ATL::AtlThrowImpl(-2147467259);
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
    v6 = *(_QWORD *)this;
    if ( !*(_QWORD *)this )
    {
      if ( *((_DWORD *)this + 2) )
      {
        v40 = operator new(0x40uLL);
        if ( v40 )
        {
          v41 = *(_DWORD *)(v5 + 24);
          v42 = (struct IUnknown *)*((_QWORD *)this + 29);
          *((_QWORD *)v40 + 6) = 0LL;
          *(_QWORD *)v40 = 0LL;
          *((_QWORD *)v40 + 1) = -1LL;
          *((_DWORD *)v40 + 4) = v41;
          *((_QWORD *)v40 + 3) = v5;
          *((_QWORD *)v40 + 4) = 0LL;
          *((_DWORD *)v40 + 10) = 0;
          *((_QWORD *)v40 + 7) = 0LL;
          if ( *((struct IUnknown **)v40 + 6) != v42 )
            ATL::AtlComPtrAssign((struct IUnknown **)v40 + 6, v42);
        }
        else
        {
          v40 = 0LL;
        }
        if ( !v40 )
        {
          v52 = -2147024882;
          throw (long *)&v52;
        }
        v43 = *((_QWORD *)this + 8);
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
        v44 = (struct CConnectionInstance *)*((_QWORD *)this + 12);
        v59 = v44;
        v45 = *(_QWORD *)v44;
        if ( v44 )
          *((_QWORD *)v44 + 2) = v40;
        *((_QWORD *)this + 12) = v45;
        *((_QWORD *)v44 + 1) = 0LL;
        *(_QWORD *)v44 = v43;
        ++*((_QWORD *)this + 10);
        v46 = *((_QWORD *)this + 8);
        if ( v46 )
          *(_QWORD *)(v46 + 8) = v44;
        else
          *((_QWORD *)this + 9) = v44;
        *((_QWORD *)this + 8) = v44;
        v47 = (char *)this + 240;
        v48 = *((_QWORD *)this + 30);
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 240);
        v49 = (__int64 *)*((_QWORD *)this + 34);
        v50 = *v49;
        if ( v49 )
          v49[2] = (__int64)v40;
        *((_QWORD *)this + 34) = v50;
        v49[1] = 0LL;
        *v49 = v48;
        ++*((_QWORD *)this + 32);
        if ( *(_QWORD *)v47 )
          *(_QWORD *)(*(_QWORD *)v47 + 8LL) = v49;
        else
          *((_QWORD *)this + 31) = v49;
        *(_QWORD *)v47 = v49;
      }
LABEL_5:
      while ( v4 )
      {
        v7 = *(_QWORD *)(v4 + 16);
        v4 = *(_QWORD *)(v4 + 8);
        v8 = operator new(0x40uLL);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v7 + 24);
          v10 = *((_QWORD *)this + 29);
          v8[6] = 0LL;
          *v8 = 1LL;
          v8[1] = 0LL;
          *((_DWORD *)v8 + 4) = v9;
          v8[3] = v7;
          v8[4] = v5;
          *((_DWORD *)v8 + 10) = 0;
          v8[7] = 0LL;
          if ( v8[6] != v10 )
          {
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
            v11 = v8[6];
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            v8[6] = v10;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( !v8 )
        {
          v53 = -2147024882;
          throw (long *)&v53;
        }
        v12 = *((_QWORD *)this + 8);
        if ( !*((_QWORD *)this + 12) )
        {
          v26 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
          if ( !v26 )
            ATL::AtlThrowImpl(-2147024882);
          v27 = *((_DWORD *)this + 26);
          v28 = (_QWORD *)((char *)v26 + 16 * (v27 - 1) + 8 * (unsigned int)(v27 - 1) + 8);
          for ( i = v27 - 1; i >= 0; --i )
          {
            *v28 = *((_QWORD *)this + 12);
            *((_QWORD *)this + 12) = v28;
            v28 -= 3;
          }
        }
        v13 = (__int64 *)*((_QWORD *)this + 12);
        v14 = *v13;
        if ( v13 )
          v13[2] = (__int64)v8;
        *((_QWORD *)this + 12) = v14;
        v13[1] = 0LL;
        *v13 = v12;
        ++*((_QWORD *)this + 10);
        v15 = *((_QWORD *)this + 8);
        if ( v15 )
          *(_QWORD *)(v15 + 8) = v13;
        else
          *((_QWORD *)this + 9) = v13;
        *((_QWORD *)this + 8) = v13;
        v5 = v7;
      }
      v16 = *((_DWORD *)this + 28);
      if ( ((v16 - 1) & 0xFFFFFFFC) == 0 && v16 != 2 )
      {
        v17 = operator new(0x40uLL);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v5 + 24);
          v19 = *((_QWORD *)this + 29);
          v17[6] = 0LL;
          *v17 = 1LL;
          v17[1] = 0LL;
          *((_DWORD *)v17 + 4) = v18;
          v17[3] = 0LL;
          v17[4] = v5;
          *((_DWORD *)v17 + 10) = 0;
          v17[7] = 0LL;
          if ( v17[6] != v19 )
          {
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
            v20 = v17[6];
            if ( v20 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            v17[6] = v19;
          }
        }
        else
        {
          v17 = 0LL;
        }
        if ( !v17 )
        {
          v54 = -2147024882;
          throw (long *)&v54;
        }
        v21 = *((_QWORD *)this + 8);
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
        v22 = (__int64 *)*((_QWORD *)this + 12);
        v23 = *v22;
        if ( v22 )
          v22[2] = (__int64)v17;
        *((_QWORD *)this + 12) = v23;
        v22[1] = 0LL;
        *v22 = v21;
        ++*((_QWORD *)this + 10);
        v24 = *((_QWORD *)this + 8);
        if ( v24 )
          *(_QWORD *)(v24 + 8) = v22;
        else
          *((_QWORD *)this + 9) = v22;
        *((_QWORD *)this + 8) = v22;
      }
      goto LABEL_96;
    }
    if ( !*((_DWORD *)this + 30) || *(_DWORD *)(v6 + 204) )
    {
      v30 = *(_QWORD *)(v6 + 64);
      if ( !v30 )
        ATL::AtlThrowImpl(-2147467259);
    }
    else
    {
      v59 = 0LL;
      CPipeInstance::GetAPONodeAndConnection((CPipeInstance *)v6, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, 0LL, &v59);
      v31 = v59;
      if ( v59 )
        goto LABEL_46;
      v59 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)this,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        0LL,
        &v59);
      v31 = v59;
      if ( v59 )
        goto LABEL_46;
      v30 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( !v30 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v31 = *(struct CConnectionInstance **)(v30 + 16);
LABEL_46:
    v32 = *((_QWORD *)v31 + 1);
    v33 = operator new(0x40uLL);
    if ( v33 )
    {
      v34 = *(_DWORD *)(v5 + 24);
      v35 = (struct IUnknown *)*((_QWORD *)this + 29);
      *((_QWORD *)v33 + 6) = 0LL;
      *(_QWORD *)v33 = 0LL;
      *((_QWORD *)v33 + 1) = v32;
      *((_DWORD *)v33 + 4) = v34;
      *((_QWORD *)v33 + 3) = v5;
      *((_QWORD *)v33 + 4) = 0LL;
      *((_DWORD *)v33 + 10) = 0;
      *((_QWORD *)v33 + 7) = 0LL;
      if ( *((struct IUnknown **)v33 + 6) != v35 )
        ATL::AtlComPtrAssign((struct IUnknown **)v33 + 6, v35);
    }
    else
    {
      v33 = 0LL;
    }
    if ( !v33 )
    {
      pExceptionObject = -2147024882;
      throw (long *)&pExceptionObject;
    }
    v36 = *((_QWORD *)this + 8);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
    v37 = (__int64 *)*((_QWORD *)this + 12);
    v38 = *v37;
    if ( v37 )
      v37[2] = (__int64)v33;
    *((_QWORD *)this + 12) = v38;
    v37[1] = 0LL;
    *v37 = v36;
    ++*((_QWORD *)this + 10);
    v39 = *((_QWORD *)this + 8);
    if ( v39 )
      *(_QWORD *)(v39 + 8) = v37;
    else
      *((_QWORD *)this + 9) = v37;
    *((_QWORD *)this + 8) = v37;
    goto LABEL_5;
  }
  catch ( ATL::CAtlException *v57 )
  {
    v58 = *(_DWORD *)v57;
    v2 = v60;
  }
  catch ( long *v56 )
  {
    v58 = *(_DWORD *)v56;
    v2 = v60;
  }
LABEL_96:
  if ( v58 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        (unsigned int)v58);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnectionList", 0x8CCu, v58);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v58;
}
