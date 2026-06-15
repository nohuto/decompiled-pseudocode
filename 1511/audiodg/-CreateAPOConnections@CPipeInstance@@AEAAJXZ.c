/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000DD10
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x140010C70 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140010D70 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140011350 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140017868 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x140017A80 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ?GetPrev@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140026490 (-GetPrev@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnections(struct IUnknown **this)
{
  CPipeInstance *v1; // r13
  CInPlaceBuffer *v2; // r12
  struct IUnknown *v3; // r15
  struct IUnknown *v4; // rdx
  struct IUnknownVtbl *lpVtbl; // rdi
  struct IUnknownVtbl *v6; // rax
  BOOL v7; // esi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r13
  CProcessNode *AddRef; // rsi
  int v10; // eax
  void **v11; // rbx
  __int64 (__fastcall *v12)(CProcessNode *__hidden, struct IAudioMediaType **); // rsi
  volatile signed __int32 *v13; // rbx
  unsigned int (__fastcall *v14)(CAudioMediaType *__hidden); // rsi
  int v15; // esi
  void **v16; // rbx
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rdi
  ULONG (__stdcall *v19)(IUnknown *); // rax
  __int64 (__fastcall *v20)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // r14
  const struct tWAVEFORMATEX *v22; // rax
  const struct tWAVEFORMATEX *v23; // r14
  __int64 (__fastcall *v24)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  const WAVEFORMATEX *(__stdcall *v25)(IAudioMediaType *); // rsi
  const struct tWAVEFORMATEX *v26; // rax
  ULONG (__stdcall *Release)(IAudioMediaType *); // r14
  ULONG (__stdcall *v28)(IAudioMediaType *); // r14
  ULONG (__stdcall *v29)(IUnknown *); // rbx
  __int64 (__fastcall *v30)(CProcessNode *__hidden, struct IAudioMediaType **); // rsi
  int v31; // eax
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // r14
  struct IUnknown **v34; // rcx
  HRESULT (__stdcall *v35)(IUnknown *, const IID *const, void **); // rcx
  __int64 v36; // r14
  struct IAudioMediaType *v37; // [rsp+20h] [rbp-49h] BYREF
  struct IAudioMediaType *v38; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-31h] BYREF
  char v41[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-21h]
  int v43; // [rsp+50h] [rbp-19h]
  void *Block; // [rsp+58h] [rbp-11h] BYREF
  int v45; // [rsp+60h] [rbp-9h]
  __int64 v46; // [rsp+68h] [rbp-1h]
  unsigned __int64 *v47; // [rsp+70h] [rbp+7h]
  int v49; // [rsp+E0h] [rbp+77h]
  struct IUnknown *v50; // [rsp+E8h] [rbp+7Fh] BYREF

  v46 = -2LL;
  v1 = (CPipeInstance *)this;
  v2 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v49 = 0;
  if ( *((_DWORD *)this + 3) )
    v3 = this[9];
  else
    v3 = this[8];
  v50 = v3;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    v4 = (struct IUnknown *)CProcessNode::GetLeftFormat;
    if ( *((_DWORD *)v1 + 3) )
    {
      lpVtbl = *(struct IUnknownVtbl **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetPrev(
                                          CAudioMediaType::Release,
                                          &v50);
      v3 = v50;
      v4 = (struct IUnknown *)CProcessNode::GetLeftFormat;
    }
    else
    {
      lpVtbl = v3[2].lpVtbl;
      v3 = (struct IUnknown *)v3->lpVtbl;
      v50 = v3;
    }
    if ( v3 )
      v6 = v3[2].lpVtbl;
    else
      v6 = 0LL;
    v7 = 0;
    v38 = 0LL;
    v37 = 0LL;
    QueryInterface = lpVtbl[1].QueryInterface;
    if ( QueryInterface )
    {
      AddRef = (CProcessNode *)lpVtbl[1].AddRef;
      if ( !AddRef || !v6 || *((_DWORD *)QueryInterface + 10) != 2 || *((_DWORD *)AddRef + 10) != 2 )
        goto LABEL_15;
      if ( LODWORD(lpVtbl->Release) )
      {
        if ( (*((_BYTE *)QueryInterface + 48) & 1) == 0 )
          goto LABEL_15;
        v35 = v6[1].QueryInterface;
        if ( v35 )
        {
          if ( *((_DWORD *)v35 + 10) != 2 )
            goto LABEL_15;
          (*(void (__fastcall **)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), struct IAudioMediaType **))(*(_QWORD *)QueryInterface + 8LL))(
            lpVtbl[1].QueryInterface,
            &v38);
          v36 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v38->lpVtbl->GetAudioFormat)(v38);
          (*(void (__fastcall **)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), struct IAudioMediaType **))(*(_QWORD *)QueryInterface + 16LL))(
            QueryInterface,
            &v37);
          v7 = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37) + 8) >= *(_DWORD *)(v36 + 8);
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        if ( (*((_BYTE *)AddRef + 48) & 1) == 0 )
          goto LABEL_15;
        v19 = v6[1].AddRef;
        if ( !v19 || *((_DWORD *)v19 + 10) != 2 )
          goto LABEL_15;
        v20 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)AddRef + 8LL);
        if ( v20 == CProcessNode::GetLeftFormat )
          CProcessNode::GetLeftFormat((CProcessNode *)lpVtbl[1].AddRef, &v38);
        else
          v20((CProcessNode *)lpVtbl[1].AddRef, &v38);
        GetAudioFormat = v38->lpVtbl->GetAudioFormat;
        v22 = (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat
            ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v38)
            : (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v38);
        v23 = v22;
        v24 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)AddRef + 16LL);
        if ( v24 == CProcessNode::GetRightFormat )
          CProcessNode::GetRightFormat(AddRef, &v37);
        else
          v24(AddRef, &v37);
        v25 = v37->lpVtbl->GetAudioFormat;
        v26 = (char *)v25 == (char *)CAudioMediaType::GetAudioFormat
            ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v37)
            : (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v25)(v37);
        if ( v23->nAvgBytesPerSec < v26->nAvgBytesPerSec )
        {
LABEL_15:
          v7 = 0;
          goto LABEL_16;
        }
        v7 = 1;
      }
    }
LABEL_16:
    if ( v37 )
    {
      Release = v37->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v37);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, struct IUnknown *))Release)(v37, v4);
    }
    if ( v38 )
    {
      v28 = v38->lpVtbl->Release;
      if ( (char *)v28 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v38);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, struct IUnknown *))v28)(v38, v4);
    }
    if ( v7 )
    {
      if ( v2 )
      {
        v1 = (CPipeInstance *)this;
LABEL_20:
        v10 = v49;
        goto LABEL_21;
      }
      v15 = CConnectionInstance::CreateConnectionBuffer((CConnectionInstance *)lpVtbl, &v40, &v39);
      if ( v15 < 0 )
        goto LABEL_109;
      v32 = (unsigned __int64 *)operator new(0x20uLL);
      v2 = (CInPlaceBuffer *)v32;
      v47 = v32;
      v33 = v40;
      v1 = (CPipeInstance *)this;
      if ( v32 )
      {
        v4 = this[29];
        v34 = (struct IUnknown **)(v32 + 3);
        v32[3] = 0LL;
        v32[1] = v33;
        *v32 = v39;
        v10 = 1;
        *((_DWORD *)v2 + 4) = 1;
        if ( *v34 == v4 )
        {
LABEL_80:
          if ( !v2 )
          {
            v15 = -2147024882;
            ((void (__fastcall *)(struct IUnknown *, unsigned __int64))this[29]->lpVtbl[2].QueryInterface)(
              this[29],
              v33);
            goto LABEL_43;
          }
          v49 = 1;
          goto LABEL_21;
        }
        ATL::AtlComPtrAssign(v34, v4);
      }
      else
      {
        v2 = 0LL;
      }
      v10 = 1;
      goto LABEL_80;
    }
    v1 = (CPipeInstance *)this;
    if ( !v2 )
      goto LABEL_20;
    v10 = 0;
    v49 = 0;
LABEL_21:
    if ( LODWORD(lpVtbl->QueryInterface) )
      break;
    v15 = 0;
LABEL_39:
    if ( !v10 && v2 )
    {
      CInPlaceBuffer::Release(v2);
      v2 = 0LL;
    }
    if ( !v3 )
      goto LABEL_43;
  }
  v43 = (int)lpVtbl[1].Release;
  v45 = 1094927443;
  Block = 0LL;
  if ( v2 )
    v42 = *(_QWORD *)v2;
  else
    v42 = 0LL;
  v11 = (void **)lpVtbl[1].QueryInterface;
  if ( v11 )
  {
    v12 = (__int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **))*((_QWORD *)*v11 + 2);
    if ( v12 == CProcessNode::GetRightFormat )
    {
      Block = v11[2];
      v13 = (volatile signed __int32 *)v11[2];
      if ( v13 )
      {
        v14 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v13 + 8LL);
        if ( v14 == CAudioMediaType::AddRef )
        {
          _InterlockedIncrement(v13 + 2);
          v3 = v50;
        }
        else
        {
          ((void (__fastcall *)(volatile signed __int32 *, struct IUnknown *))v14)(v13, v4);
        }
      }
LABEL_29:
      v15 = (*(__int64 (__fastcall **)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), char *, ULONG (__stdcall **)(IUnknown *)))(*(_QWORD *)lpVtbl[2].QueryInterface + 56LL))(
              lpVtbl[2].QueryInterface,
              v41,
              &lpVtbl->AddRef);
      if ( v15 >= 0 && v2 )
      {
        lpVtbl[2].AddRef = (ULONG (__stdcall *)(IUnknown *))v2;
        ++*((_DWORD *)v2 + 4);
      }
    }
    else
    {
      v15 = v12((CProcessNode *)lpVtbl[1].QueryInterface, (struct IAudioMediaType **)&Block);
      if ( v15 >= 0 )
        goto LABEL_29;
    }
  }
  else
  {
    v29 = lpVtbl[1].AddRef;
    if ( !v29 )
      goto LABEL_29;
    v30 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v29 + 8LL);
    v31 = v30 == CProcessNode::GetLeftFormat
        ? CProcessNode::GetLeftFormat((CProcessNode *)lpVtbl[1].AddRef, (struct IAudioMediaType **)&Block)
        : v30((CProcessNode *)lpVtbl[1].AddRef, (struct IAudioMediaType **)&Block);
    v15 = v31;
    if ( v31 >= 0 )
      goto LABEL_29;
  }
  v16 = (void **)Block;
  if ( Block )
  {
    v17 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v17 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v16 )
      {
        *v16 = &CAudioMediaType::`vftable';
        operator delete[](v16[2]);
        v16[2] = 0LL;
        operator delete(v16);
      }
      v3 = v50;
    }
    else
    {
      v17((CAudioMediaType *)Block);
    }
    Block = 0LL;
  }
  if ( v15 >= 0 )
  {
    v10 = v49;
    goto LABEL_39;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      (unsigned int)v15);
  }
LABEL_43:
  if ( v2 )
    CInPlaceBuffer::Release(v2);
  if ( v15 < 0 )
  {
LABEL_109:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        46LL,
        &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
        (unsigned int)v15);
    }
  }
  return (unsigned int)v15;
}
