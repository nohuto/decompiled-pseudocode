/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x1400062E0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006148 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140008CF0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400092D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x140009B20 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1400189E0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ?GetPrev@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x14002630C (-GetPrev@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x14002633C (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x1400263C8 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this)
{
  CPipeInstance *v1; // rax
  unsigned __int64 *v2; // r12
  _QWORD *v3; // r15
  __int64 (__fastcall *v4)(CProcessNode *__hidden, struct IAudioMediaType **); // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  BOOL v7; // esi
  __int64 v8; // r13
  CProcessNode *v9; // rsi
  int v10; // r13d
  void **v11; // rbx
  __int64 (__fastcall *v12)(CProcessNode *__hidden, struct IAudioMediaType **); // rsi
  volatile signed __int32 *v13; // rbx
  unsigned int (__fastcall *v14)(CAudioMediaType *__hidden); // rsi
  int v15; // esi
  void **v16; // rbx
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // r14
  const struct tWAVEFORMATEX *v21; // rax
  const struct tWAVEFORMATEX *v22; // r14
  __int64 (__fastcall *v23)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  const WAVEFORMATEX *(__stdcall *v24)(IAudioMediaType *); // rsi
  const struct tWAVEFORMATEX *v25; // rax
  ULONG (__stdcall *Release)(IAudioMediaType *); // r14
  ULONG (__stdcall *v27)(IAudioMediaType *); // r14
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // r13
  CPipeInstance *v31; // rcx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(CProcessNode *__hidden, struct IAudioMediaType **); // rsi
  int v36; // eax
  __int64 v38; // rcx
  __int64 v39; // r14
  struct IAudioMediaType *v40; // [rsp+20h] [rbp-49h] BYREF
  struct IAudioMediaType *v41; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-31h] BYREF
  char v44[8]; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-21h]
  int v46; // [rsp+50h] [rbp-19h]
  void *Block; // [rsp+58h] [rbp-11h] BYREF
  int v48; // [rsp+60h] [rbp-9h]
  __int64 v49; // [rsp+68h] [rbp-1h]
  unsigned __int64 *v50; // [rsp+70h] [rbp+7h]
  int v52; // [rsp+E0h] [rbp+77h]
  _QWORD *v53; // [rsp+E8h] [rbp+7Fh] BYREF

  v49 = -2LL;
  v1 = this;
  v2 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v52 = 0;
  if ( *((_DWORD *)this + 3) )
    v3 = (_QWORD *)*((_QWORD *)this + 9);
  else
    v3 = (_QWORD *)*((_QWORD *)this + 8);
  v53 = v3;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    v4 = CProcessNode::GetLeftFormat;
    if ( *((_DWORD *)v1 + 3) )
    {
      v5 = *(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetPrev(
                        CAudioMediaType::Release,
                        &v53);
      v3 = v53;
      v4 = CProcessNode::GetLeftFormat;
    }
    else
    {
      v5 = v3[2];
      v3 = (_QWORD *)*v3;
      v53 = v3;
    }
    if ( v3 )
      v6 = v3[2];
    else
      v6 = 0LL;
    v7 = 0;
    v41 = 0LL;
    v40 = 0LL;
    v8 = *(_QWORD *)(v5 + 24);
    if ( v8 )
    {
      v9 = *(CProcessNode **)(v5 + 32);
      if ( !v9 || !v6 || *(_DWORD *)(v8 + 40) != 2 || *((_DWORD *)v9 + 10) != 2 )
        goto LABEL_15;
      if ( *(_DWORD *)(v5 + 16) )
      {
        if ( (*(_BYTE *)(v8 + 48) & 1) == 0 )
          goto LABEL_15;
        v38 = *(_QWORD *)(v6 + 24);
        if ( v38 )
        {
          if ( *(_DWORD *)(v38 + 40) != 2 )
            goto LABEL_15;
          (*(void (__fastcall **)(_QWORD, struct IAudioMediaType **))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v5 + 24), &v41);
          v39 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41);
          (*(void (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v8 + 16LL))(v8, &v40);
          v7 = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40) + 8) >= *(_DWORD *)(v39 + 8);
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        if ( (*((_BYTE *)v9 + 48) & 1) == 0 )
          goto LABEL_15;
        v18 = *(_QWORD *)(v6 + 32);
        if ( !v18 || *(_DWORD *)(v18 + 40) != 2 )
          goto LABEL_15;
        v19 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v9 + 8LL);
        if ( v19 == CProcessNode::GetLeftFormat )
          CProcessNode::GetLeftFormat(*(CProcessNode **)(v5 + 32), &v41);
        else
          v19(*(CProcessNode **)(v5 + 32), &v41);
        GetAudioFormat = v41->lpVtbl->GetAudioFormat;
        v21 = (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat
            ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v41)
            : (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v41);
        v22 = v21;
        v23 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v9 + 16LL);
        if ( v23 == CProcessNode::GetRightFormat )
          CProcessNode::GetRightFormat(v9, &v40);
        else
          v23(v9, &v40);
        v24 = v40->lpVtbl->GetAudioFormat;
        v25 = (char *)v24 == (char *)CAudioMediaType::GetAudioFormat
            ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v40)
            : (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v24)(v40);
        if ( v22->nAvgBytesPerSec < v25->nAvgBytesPerSec )
        {
LABEL_15:
          v7 = 0;
          goto LABEL_16;
        }
        v7 = 1;
      }
    }
LABEL_16:
    if ( v40 )
    {
      Release = v40->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v40);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))Release)(
          v40,
          v4);
    }
    if ( v41 )
    {
      v27 = v41->lpVtbl->Release;
      if ( (char *)v27 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v41);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))v27)(
          v41,
          v4);
    }
    if ( v7 )
    {
      if ( v2 )
      {
        v10 = v52;
      }
      else
      {
        v15 = CConnectionInstance::CreateConnectionBuffer((CConnectionInstance *)v5, &v43, &v42);
        if ( v15 < 0 )
          goto LABEL_114;
        v29 = (unsigned __int64 *)operator new(0x20uLL);
        v2 = v29;
        v50 = v29;
        v30 = v43;
        v31 = this;
        if ( v29 )
        {
          v32 = *((_QWORD *)this + 29);
          v29[3] = 0LL;
          v29[1] = v30;
          *v29 = v42;
          *((_DWORD *)v29 + 4) = 1;
          if ( v29[3] != v32 )
          {
            if ( v32 )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 8LL))(v32);
              v31 = this;
            }
            v33 = v2[3];
            if ( v33 )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v33 + 16LL))(v2[3]);
              v31 = this;
            }
            v2[3] = v32;
          }
        }
        else
        {
          v2 = 0LL;
        }
        if ( !v2 )
        {
          v15 = -2147024882;
          (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)v31 + 29) + 48LL))(
            *((_QWORD *)v31 + 29),
            v30);
          goto LABEL_64;
        }
        v10 = 1;
        v52 = 1;
      }
    }
    else
    {
      v10 = v52;
      if ( v2 )
        v10 = 0;
      v52 = v10;
    }
    if ( !*(_DWORD *)v5 )
    {
      v15 = 0;
      goto LABEL_39;
    }
    v46 = *(_DWORD *)(v5 + 40);
    v48 = 1094927443;
    Block = 0LL;
    v45 = v2 ? *v2 : 0LL;
    v11 = *(void ***)(v5 + 24);
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
            v3 = v53;
          }
          else
          {
            ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))v14)(
              v13,
              v4);
          }
        }
      }
      else
      {
        v15 = v12(*(CProcessNode **)(v5 + 24), (struct IAudioMediaType **)&Block);
        if ( v15 < 0 )
          goto LABEL_33;
      }
    }
    else
    {
      v34 = *(_QWORD *)(v5 + 32);
      if ( v34 )
      {
        v35 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v34 + 8LL);
        v36 = v35 == CProcessNode::GetLeftFormat
            ? CProcessNode::GetLeftFormat(*(CProcessNode **)(v5 + 32), (struct IAudioMediaType **)&Block)
            : v35(*(CProcessNode **)(v5 + 32), (struct IAudioMediaType **)&Block);
        v15 = v36;
        if ( v36 < 0 )
          goto LABEL_33;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v5 + 48) + 56LL))(
            *(_QWORD *)(v5 + 48),
            v44,
            v5 + 8);
    if ( v15 >= 0 && v2 )
    {
      *(_QWORD *)(v5 + 56) = v2;
      ++*((_DWORD *)v2 + 4);
    }
LABEL_33:
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
        v3 = v53;
      }
      else
      {
        v17((CAudioMediaType *)Block);
      }
      Block = 0LL;
    }
    if ( v15 < 0 )
      break;
LABEL_39:
    if ( !v10 && v2 )
    {
      if ( (*((_DWORD *)v2 + 4))-- == 1 )
        CInPlaceBuffer::`scalar deleting destructor'((CInPlaceBuffer *)v2, (unsigned int)v4);
      v2 = 0LL;
    }
    if ( !v3 )
      goto LABEL_64;
    v1 = this;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      10LL,
      &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      (unsigned int)v15);
  }
LABEL_64:
  if ( v2 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v2);
  if ( v15 < 0 )
  {
LABEL_114:
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        46LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v15);
    }
  }
  return (unsigned int)v15;
}
