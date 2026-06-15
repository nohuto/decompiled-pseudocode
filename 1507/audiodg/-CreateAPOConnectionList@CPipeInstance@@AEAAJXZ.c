/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140006800
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006148 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140009C2C (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x14000A6E0 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14000A7A8 (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140012F30 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140026124 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@@Z @ 0x1400306E0 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rbx
  CConnectionInstance *v3; // rcx
  __int64 v4; // r12
  __int64 v5; // r13
  struct CConnectionInstance *v6; // r12
  __int64 v7; // rax
  struct CConnectionInstance *v8; // rsi
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r15
  CConnectionInstance *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  _QWORD *v18; // r14
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rsi
  CConnectionInstance *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct ATL::CAtlPlex *v27; // r8
  int v28; // edx
  _QWORD *v29; // rcx
  int i; // edx
  void *v31; // rsi
  int v32; // eax
  struct IUnknown *v33; // rdx
  __int64 v34; // r15
  struct CConnectionInstance *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  char *v38; // r14
  __int64 v39; // r15
  CConnectionInstance *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct CConnectionInstance *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  void *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _BYTE v49[32]; // [rsp+0h] [rbp-A8h] BYREF
  int pExceptionObject; // [rsp+40h] [rbp-68h] BYREF
  int v51; // [rsp+44h] [rbp-64h] BYREF
  int v52; // [rsp+48h] [rbp-60h] BYREF
  int v53; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int64 v54; // [rsp+50h] [rbp-58h]
  long *v55; // [rsp+58h] [rbp-50h] BYREF
  ATL::CAtlException *v56; // [rsp+60h] [rbp-48h] BYREF
  int v57; // [rsp+B0h] [rbp+8h]
  CConnectionInstance *v58; // [rsp+B8h] [rbp+10h] BYREF
  struct CConnectionInstance *v59; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+C8h] [rbp+20h]

  v54 = -2LL;
  v2 = 0LL;
  v60 = 0LL;
  v3 = 0LL;
  v58 = 0LL;
  v57 = 0;
  try
  {
    v4 = *((_QWORD *)this + 3);
    if ( !v4 )
      ATL::AtlThrowImpl(-2147467259);
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(struct CConnectionInstance **)(v4 + 16);
    v7 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      if ( !*((_DWORD *)this + 30) || *(_DWORD *)(v7 + 204) )
      {
        v42 = *(_QWORD *)(v7 + 64);
        if ( !v42 )
          ATL::AtlThrowImpl(-2147467259);
        v43 = *(struct CConnectionInstance **)(v42 + 16);
      }
      else
      {
        v59 = 0LL;
        CPipeInstance::GetAPONodeAndConnection(
          (CPipeInstance *)v7,
          &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
          0LL,
          &v59);
        v43 = v59;
        if ( !v59 )
        {
          v59 = 0LL;
          CPipeInstance::GetAPONodeAndConnection(
            *(CPipeInstance **)this,
            &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
            0LL,
            &v59);
          v43 = v59;
          if ( !v59 )
          {
            v48 = *(_QWORD *)(*(_QWORD *)this + 64LL);
            if ( !v48 )
              ATL::AtlThrowImpl(-2147467259);
            v43 = *(struct CConnectionInstance **)(v48 + 16);
          }
        }
      }
      v44 = *((_QWORD *)v43 + 1);
      v46 = operator new(0x40uLL);
      if ( v46 )
        v47 = CConnectionInstance::CConnectionInstance(v46, v45, *((_QWORD *)this + 29), v44, *((_DWORD *)v6 + 6), v6);
      else
        v47 = 0LL;
      v58 = (CConnectionInstance *)v47;
      if ( !v47 )
      {
        pExceptionObject = -2147024882;
        throw (long *)&pExceptionObject;
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead((char *)this + 64, &v58);
      goto LABEL_20;
    }
    if ( *((_DWORD *)this + 2) )
    {
      v31 = operator new(0x40uLL);
      if ( v31 )
      {
        v32 = *((_DWORD *)v6 + 6);
        v33 = (struct IUnknown *)*((_QWORD *)this + 29);
        *((_QWORD *)v31 + 6) = 0LL;
        *(_QWORD *)v31 = 0LL;
        *((_QWORD *)v31 + 1) = -1LL;
        *((_DWORD *)v31 + 4) = v32;
        *((_QWORD *)v31 + 3) = v6;
        *((_QWORD *)v31 + 4) = 0LL;
        *((_DWORD *)v31 + 10) = 0;
        *((_QWORD *)v31 + 7) = 0LL;
        if ( *((struct IUnknown **)v31 + 6) != v33 )
          ATL::AtlComPtrAssign((struct IUnknown **)v31 + 6, v33);
      }
      else
      {
        v31 = 0LL;
      }
      v58 = (CConnectionInstance *)v31;
      if ( !v31 )
      {
        v51 = -2147024882;
        throw (long *)&v51;
      }
      v34 = *((_QWORD *)this + 8);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
      v35 = (struct CConnectionInstance *)*((_QWORD *)this + 12);
      v59 = v35;
      v36 = *(_QWORD *)v35;
      if ( v35 )
        *((_QWORD *)v35 + 2) = v31;
      *((_QWORD *)this + 12) = v36;
      *((_QWORD *)v35 + 1) = 0LL;
      *(_QWORD *)v35 = v34;
      ++*((_QWORD *)this + 10);
      v37 = *((_QWORD *)this + 8);
      if ( v37 )
        *(_QWORD *)(v37 + 8) = v35;
      else
        *((_QWORD *)this + 9) = v35;
      *((_QWORD *)this + 8) = v35;
      v38 = (char *)this + 240;
      v39 = *((_QWORD *)this + 30);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 240);
      v40 = (CConnectionInstance *)*((_QWORD *)this + 34);
      v58 = v40;
      v41 = *(_QWORD *)v40;
      if ( v40 )
        *((_QWORD *)v40 + 2) = v31;
      *((_QWORD *)this + 34) = v41;
      *((_QWORD *)v40 + 1) = 0LL;
      *(_QWORD *)v40 = v39;
      ++*((_QWORD *)this + 32);
      if ( *(_QWORD *)v38 )
        *(_QWORD *)(*(_QWORD *)v38 + 8LL) = v40;
      else
        *((_QWORD *)this + 31) = v40;
      *(_QWORD *)v38 = v40;
      goto LABEL_20;
    }
    while ( v5 )
    {
      v8 = *(struct CConnectionInstance **)(v5 + 16);
      v5 = *(_QWORD *)(v5 + 8);
      v59 = v8;
      v9 = operator new(0x40uLL);
      if ( v9 )
      {
        v10 = *((_DWORD *)v8 + 6);
        v11 = *((_QWORD *)this + 29);
        v9[6] = 0LL;
        *v9 = 1LL;
        v9[1] = 0LL;
        *((_DWORD *)v9 + 4) = v10;
        v9[3] = v8;
        v9[4] = v6;
        *((_DWORD *)v9 + 10) = 0;
        v9[7] = 0LL;
        if ( v9[6] != v11 )
        {
          if ( v11 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
            v8 = v59;
          }
          v12 = v9[6];
          if ( v12 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(v9[6]);
            v8 = v59;
          }
          v9[6] = v11;
        }
      }
      else
      {
        v9 = 0LL;
      }
      v58 = (CConnectionInstance *)v9;
      if ( !v9 )
      {
        v52 = -2147024882;
        throw (long *)&v52;
      }
      v13 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v27 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v27 )
          ATL::AtlThrowImpl(-2147024882);
        v28 = *((_DWORD *)this + 26);
        v29 = (_QWORD *)((char *)v27 + 16 * (v28 - 1) + 8 * (unsigned int)(v28 - 1) + 8);
        for ( i = v28 - 1; i >= 0; --i )
        {
          *v29 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v29;
          v29 -= 3;
        }
      }
      v14 = (CConnectionInstance *)*((_QWORD *)this + 12);
      v58 = v14;
      v15 = *(_QWORD *)v14;
      if ( v14 )
        *((_QWORD *)v14 + 2) = v9;
      *((_QWORD *)this + 12) = v15;
      *((_QWORD *)v14 + 1) = 0LL;
      *(_QWORD *)v14 = v13;
      ++*((_QWORD *)this + 10);
      v16 = *((_QWORD *)this + 8);
      if ( v16 )
        *(_QWORD *)(v16 + 8) = v14;
      else
        *((_QWORD *)this + 9) = v14;
      *((_QWORD *)this + 8) = v14;
      v6 = v8;
LABEL_20:
      v3 = 0LL;
      v58 = 0LL;
    }
    LODWORD(v17) = *((_DWORD *)this + 28);
    if ( (((_DWORD)v17 - 1) & 0xFFFFFFFC) == 0 && (_DWORD)v17 != 2 )
    {
      v18 = operator new(0x40uLL);
      if ( v18 )
      {
        v19 = *((_DWORD *)v6 + 6);
        v20 = *((_QWORD *)this + 29);
        v18[6] = 0LL;
        *v18 = 1LL;
        v18[1] = 0LL;
        *((_DWORD *)v18 + 4) = v19;
        v18[3] = 0LL;
        v18[4] = v6;
        *((_DWORD *)v18 + 10) = 0;
        v18[7] = 0LL;
        if ( v18[6] != v20 )
        {
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          v21 = v18[6];
          if ( v21 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 16LL))(v18[6]);
          v18[6] = v20;
        }
      }
      else
      {
        v18 = 0LL;
      }
      v58 = (CConnectionInstance *)v18;
      if ( !v18 )
      {
        v53 = -2147024882;
        throw (long *)&v53;
      }
      v22 = *((_QWORD *)this + 8);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
      v23 = (CConnectionInstance *)*((_QWORD *)this + 12);
      v58 = v23;
      v24 = *(_QWORD *)v23;
      if ( v23 )
        *((_QWORD *)v23 + 2) = v18;
      *((_QWORD *)this + 12) = v24;
      *((_QWORD *)v23 + 1) = 0LL;
      *(_QWORD *)v23 = v22;
      ++*((_QWORD *)this + 10);
      v25 = *((_QWORD *)this + 8);
      if ( v25 )
        *(_QWORD *)(v25 + 8) = v23;
      else
        *((_QWORD *)this + 9) = v23;
      *((_QWORD *)this + 8) = v23;
      v3 = 0LL;
      v58 = 0LL;
    }
  }
  catch ( ATL::CAtlException *v56 )
  {
    v17 = v49;
    v57 = *(_DWORD *)v56;
    v3 = v58;
    v2 = v60;
  }
  catch ( long *v55 )
  {
    v17 = v49;
    v57 = *(_DWORD *)v55;
    v3 = v58;
    v2 = v60;
  }
  if ( v57 < 0 )
  {
    if ( v3 )
      CConnectionInstance::`scalar deleting destructor'(v3, (unsigned int)v17);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        45LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v57);
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v57;
}
