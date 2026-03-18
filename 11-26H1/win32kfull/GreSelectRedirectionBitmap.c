/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1400151B0
 * Callers:
 *     InvalidateDCE @ 0x14001386C (InvalidateDCE.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     UpdateRedirectedDCE @ 0x14012EAA0 (UpdateRedirectedDCE.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1402A427C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400D3508 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1401F66A8 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(Gre::Base *a1, HSURF a2)
{
  unsigned int v2; // esi
  Gre::Base *v5; // rdi
  __int64 v6; // r15
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  DC *v11; // rcx
  __int64 v12; // rbx
  DC *v13; // r8
  unsigned int v14; // edx
  DC *v15; // rcx
  int v16; // eax
  DC *v17; // rcx
  int v18; // r8d
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  SFMALTLOGICALSURFACEREF *v22; // rcx
  Gre::Base *v23; // rcx
  __int64 v24; // rax
  Gre::Base *v25; // rcx
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  Gre::Base *v29; // rcx
  __int64 v30; // rdx
  struct Gre::Base::SESSION_GLOBALS *v31; // rax
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  __int64 v33; // r8
  Gre::Base *v34; // rcx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  Gre::Base *v36; // rcx
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  __int64 v38; // r8
  Gre::Base *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  int v41; // eax
  struct Gre::Base::SESSION_GLOBALS *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  Gre::Base *v45; // rcx
  struct Gre::Base::SESSION_GLOBALS *v46; // rax
  __int64 v47; // r8
  Gre::Base *v48; // rcx
  struct Gre::Base::SESSION_GLOBALS *v49; // rax
  Gre::Base *v50; // rcx
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  HSURF v52; // rdx
  Gre::Base **v53; // rax
  int v54; // r8d
  DC *v55; // rcx
  DC *v56; // rcx
  __int128 v57; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v58; // [rsp+38h] [rbp-D0h]
  __int64 v59; // [rsp+48h] [rbp-C0h]
  DC *v60; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h]
  struct Gre::Base::SESSION_GLOBALS *v62; // [rsp+68h] [rbp-A0h]
  _BYTE v63[40]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v64[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-50h]
  _OWORD v66[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-28h]
  _BYTE v68[32]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v69; // [rsp+108h] [rbp+0h]

  v2 = 0;
  v5 = a1;
  v6 = 0LL;
  while ( 1 )
  {
    if ( !v5 )
      return 1LL;
    v60 = 0LL;
    LODWORD(v61) = 0;
    v7 = Gre::Base::Globals(a1);
    memset(v63, 0, sizeof(v63));
    v62 = v7;
    v60 = 0LL;
    LODWORD(v61) = 0;
    PushThreadGuardedObject(
      &v63[8],
      &v60,
      UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    LOBYTE(v8) = 1;
    v9 = HmgShareLock(v62, v5, v8, 1LL);
    v60 = (DC *)v9;
    v11 = (DC *)v9;
    if ( !v9 )
      goto LABEL_22;
    v12 = *(_QWORD *)(v9 + 48);
    if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
    {
      v52 = *(HSURF *)(v9 + 504);
      if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
      {
        if ( !v52 )
          v52 = **(HSURF **)(v9 + 496);
        SURFREF::SURFREF((SURFREF *)v68, v52);
        if ( !v69 )
          goto LABEL_56;
        if ( a2 )
        {
          SURFREF::SURFREF((SURFREF *)&v57, a2);
          if ( v59 )
          {
            if ( v69 != v59 )
            {
              v56 = v60;
              if ( (*((_DWORD *)v60 + 9) & 0x40000) == 0 )
              {
                SURFREF::vKeepIt((SURFREF *)v68);
                v56 = v60;
              }
              *((_DWORD *)v56 + 9) |= 0x40000u;
              *((_QWORD *)v60 + 268) = a2;
            }
            v2 = 1;
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)&v57);
LABEL_56:
          v22 = (SFMALTLOGICALSURFACEREF *)v68;
          goto LABEL_21;
        }
        v55 = v60;
        if ( (*((_DWORD *)v60 + 9) & 0x40000) == 0 )
        {
          SURFREF::vKeepIt((SURFREF *)v68);
          v55 = v60;
        }
        *((_DWORD *)v55 + 9) |= 0x40000u;
        *((_QWORD *)v60 + 268) = 0LL;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v68);
      }
      else
      {
        *(_DWORD *)(v9 + 36) |= 0x40000u;
        *((_QWORD *)v60 + 268) = a2;
      }
      DCOBJA::~DCOBJA((DCOBJA *)&v60);
      return 1LL;
    }
    if ( a2 && a1 == v5 )
      break;
LABEL_6:
    if ( (*((_DWORD *)v11 + 9) & 0x4000) != 0 )
    {
      v43 = *((_QWORD *)v11 + 62);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v43 + 32);
        v57 = 0LL;
        v58 = 0LL;
        PushThreadGuardedObject(
          &v57,
          &v57,
          UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
        v46 = Gre::Base::Globals(v45);
        LOBYTE(v47) = 5;
        v59 = HmgShareLock(v46, v44, v47, 0LL);
        if ( v59 )
        {
          v49 = Gre::Base::Globals(v48);
          DEC_SHARE_REF_CNT(v49, v59);
          if ( v59 )
          {
            v51 = Gre::Base::Globals(v50);
            DEC_SHARE_REF_CNT(v51, v59);
          }
        }
        PopThreadGuardedObject(&v57);
        v11 = v60;
      }
    }
    if ( a2 )
    {
      v57 = 0LL;
      v58 = 0LL;
      PushThreadGuardedObject(
        &v57,
        &v57,
        UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
      v37 = Gre::Base::Globals(v36);
      LOBYTE(v38) = 5;
      v59 = HmgShareLock(v37, a2, v38, 0LL);
      if ( v59 )
      {
        v40 = Gre::Base::Globals(v39);
        INC_SHARE_REF_CNT(v40, v59);
      }
      *((_DWORD *)v60 + 9) |= 0x4000u;
      v41 = *(_DWORD *)(v6 + 112);
      if ( (v41 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v41 | 0x800;
      if ( v59 )
      {
        v42 = Gre::Base::Globals(v39);
        DEC_SHARE_REF_CNT(v42, v59);
      }
      PopThreadGuardedObject(&v57);
    }
    else
    {
      v6 = *(_QWORD *)(v12 + 2544);
      *((_DWORD *)v11 + 9) &= ~0x4000u;
    }
    v13 = v60;
    v14 = *((_DWORD *)v60 + 9) | 0x8000;
    if ( (*(_DWORD *)(v6 + 112) & 0x200) == 0 )
      v14 = *((_DWORD *)v60 + 9) & 0xFFFF7FFF;
    *((_DWORD *)v60 + 9) = v14;
    v15 = v60;
    *((_QWORD *)v60 + 62) = v6;
    if ( (*(_DWORD *)(v6 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v15,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 660), (__m128)*(unsigned int *)(v6 + 664)).m128_u64[0],
        v13,
        v10);
    }
    else
    {
      v16 = *((_DWORD *)v15 + 130);
      if ( (v16 & 1) != 0 )
      {
        *((_DWORD *)v15 + 9) |= 0x10u;
        *(_QWORD *)((char *)v15 + 524) = 0LL;
        *((_DWORD *)v15 + 130) = v16 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v15 + 532) = 0LL;
        if ( (unsigned int)DC::bDpiScaleTransform(v15) )
          v18 = 0;
        DC::SetCachedDpiScaleValue(v17, v18);
      }
    }
    v19 = *(Gre::Base **)(v6 + 56);
    *((_QWORD *)v60 + 64) = v19;
    *((_DWORD *)v60 + 79) |= 0xFu;
    if ( *((int *)v60 + 26) > 1 )
      v5 = (Gre::Base *)*((_QWORD *)v60 + 14);
    else
      v5 = 0LL;
    v20 = Gre::Base::Globals(v19);
    DEC_SHARE_REF_CNT(v20, v60);
    v60 = 0LL;
    PopThreadGuardedObject(&v63[8]);
  }
  memset(v64, 0, sizeof(v64));
  PushThreadGuardedObject(
    v64,
    v64,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v24 = *(_QWORD *)(v12 + 24);
  v65 = 0LL;
  if ( v12 != v24 && v24 && (*(_DWORD *)(v24 + 40) & 0x20000) != 0 )
  {
    memset(v66, 0, sizeof(v66));
    PushThreadGuardedObject(
      v66,
      v66,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v26 = Gre::Base::Globals(v25);
    LOBYTE(v27) = 5;
    v28 = HmgShareLock(v26, a2, v27, 0LL);
    v67 = v28;
    v30 = v28;
    if ( v28 && (*(_DWORD *)(v28 + 116) & 1) != 0 )
    {
      v53 = *(Gre::Base ***)(v28 + 40);
      v29 = *v53;
      v54 = *((_DWORD *)v53 + 4);
      while ( *((_QWORD *)v29 + 6) != v12 )
      {
        v29 = *(Gre::Base **)v29;
        if ( !--v54 )
          goto LABEL_29;
      }
      v29 = *(Gre::Base **)(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 8LL) + 8LL * *((unsigned int *)v29 + 4));
      a2 = (HSURF)*((_QWORD *)v29 + 1);
    }
LABEL_29:
    if ( v30 )
    {
      v31 = Gre::Base::Globals(v29);
      DEC_SHARE_REF_CNT(v31, v67);
    }
    PopThreadGuardedObject(v66);
  }
  v32 = Gre::Base::Globals(v23);
  LOBYTE(v33) = 5;
  v65 = HmgShareLock(v32, a2, v33, 0LL);
  v6 = v65;
  if ( v65 )
  {
    v35 = Gre::Base::Globals(v34);
    DEC_SHARE_REF_CNT(v35, v65);
    PopThreadGuardedObject(v64);
    v11 = v60;
    goto LABEL_6;
  }
  v22 = (SFMALTLOGICALSURFACEREF *)v64;
LABEL_21:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF(v22);
LABEL_22:
  DCOBJA::~DCOBJA((DCOBJA *)&v60);
  return v2;
}
