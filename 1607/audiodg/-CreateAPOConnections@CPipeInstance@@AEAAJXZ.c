/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000BBB0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000C0D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000C4E0 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x140017070 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?GetPrev@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140025264 (-GetPrev@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400252C4 (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025330 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this, unsigned int a2)
{
  CPipeInstance *v2; // r12
  CInPlaceBuffer *v3; // r14
  int v4; // r13d
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  BOOL v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rdi
  void **v11; // rcx
  __int64 (__fastcall *v12)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  volatile signed __int32 *v13; // rcx
  void (*v14)(void); // rax
  int v15; // edi
  void **v16; // rbx
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rax
  __int64 v19; // rax
  __int64 (__fastcall *v20)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  CProcessNode *v21; // rcx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v23; // rax
  const struct tWAVEFORMATEX *v24; // r15
  __int64 (__fastcall *v25)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  const WAVEFORMATEX *(__stdcall *v26)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v27; // rax
  void (*Release)(void); // rax
  void (*v29)(void); // rax
  CInPlaceBuffer *v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rcx
  CProcessNode *v34; // rcx
  __int64 (__fastcall *v35)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v36; // eax
  __int64 v38; // rcx
  __int64 v39; // rdi
  struct IAudioMediaType *v40; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v42[3]; // [rsp+30h] [rbp-48h] BYREF
  char v43[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v44; // [rsp+50h] [rbp-28h]
  int v45; // [rsp+58h] [rbp-20h]
  void *Block; // [rsp+60h] [rbp-18h] BYREF
  int v47; // [rsp+68h] [rbp-10h]
  _QWORD *v49; // [rsp+D0h] [rbp+58h] BYREF
  struct IAudioMediaType *v50; // [rsp+D8h] [rbp+60h] BYREF

  v42[1] = -2LL;
  v2 = this;
  v3 = 0LL;
  v41 = 0LL;
  v42[0] = 0LL;
  v4 = 0;
  if ( *((_DWORD *)this + 3) )
    v5 = (_QWORD *)*((_QWORD *)this + 9);
  else
    v5 = (_QWORD *)*((_QWORD *)this + 8);
  v49 = v5;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)v2 + 3) )
    {
      v6 = *(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetPrev(
                        CProcessNode::GetLeftFormat,
                        &v49);
      v5 = v49;
    }
    else
    {
      v6 = v5[2];
      v5 = (_QWORD *)*v5;
      v49 = v5;
    }
    if ( v5 )
      v7 = v5[2];
    else
      v7 = 0LL;
    v8 = 0;
    v40 = 0LL;
    v50 = 0LL;
    v9 = *(_QWORD *)(v6 + 24);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v6 + 32);
      if ( v10 )
      {
        if ( v7 && *(_DWORD *)(v9 + 40) == 2 && *(_DWORD *)(v10 + 40) == 2 )
        {
          if ( *(_DWORD *)(v6 + 16) )
          {
            if ( (*(_BYTE *)(v9 + 48) & 1) != 0 )
            {
              v38 = *(_QWORD *)(v7 + 24);
              if ( v38 )
              {
                if ( *(_DWORD *)(v38 + 40) == 2 )
                {
                  (*(void (__fastcall **)(_QWORD, struct IAudioMediaType **))(*(_QWORD *)v9 + 8LL))(
                    *(_QWORD *)(v6 + 24),
                    &v40);
                  v39 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40);
                  (*(void (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v9 + 16LL))(v9, &v50);
                  v8 = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v50->lpVtbl->GetAudioFormat)(v50)
                                 + 8) >= *(_DWORD *)(v39 + 8);
                }
              }
            }
          }
          else if ( (*(_BYTE *)(v10 + 48) & 1) != 0 )
          {
            v19 = *(_QWORD *)(v7 + 32);
            if ( v19 )
            {
              if ( *(_DWORD *)(v19 + 40) == 2 )
              {
                v20 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v10 + 8LL);
                v21 = *(CProcessNode **)(v6 + 32);
                if ( v20 == CProcessNode::GetLeftFormat )
                  CProcessNode::GetLeftFormat(v21, &v40);
                else
                  v20(v21, &v40);
                GetAudioFormat = v40->lpVtbl->GetAudioFormat;
                v23 = (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat
                    ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v40)
                    : (const struct tWAVEFORMATEX *)((__int64 (*)(void))GetAudioFormat)();
                v24 = v23;
                v25 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v10 + 16LL);
                if ( v25 == CProcessNode::GetRightFormat )
                  CProcessNode::GetRightFormat((CProcessNode *)v10, &v50);
                else
                  v25((CProcessNode *)v10, &v50);
                v26 = v50->lpVtbl->GetAudioFormat;
                v27 = (char *)v26 == (char *)CAudioMediaType::GetAudioFormat
                    ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v50)
                    : (const struct tWAVEFORMATEX *)((__int64 (*)(void))v26)();
                if ( v24->nAvgBytesPerSec >= v27->nAvgBytesPerSec )
                  v8 = 1;
              }
            }
          }
        }
      }
    }
    if ( v50 )
    {
      Release = (void (*)(void))v50->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v50);
      else
        Release();
    }
    if ( v40 )
    {
      v29 = (void (*)(void))v40->lpVtbl->Release;
      if ( (char *)v29 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v40);
      else
        v29();
    }
    if ( v8 )
    {
      if ( v3 )
      {
        v2 = this;
      }
      else
      {
        v15 = CConnectionInstance::CreateConnectionBuffer((CConnectionInstance *)v6, &v41, v42);
        if ( v15 < 0 )
          goto LABEL_110;
        v30 = (CInPlaceBuffer *)operator new(0x20uLL);
        v3 = v30;
        v42[2] = (unsigned __int64)v30;
        v31 = v41;
        v2 = this;
        if ( v30 )
        {
          v32 = *((_QWORD *)this + 29);
          *((_QWORD *)v30 + 3) = 0LL;
          *((_QWORD *)v30 + 1) = v31;
          *(_QWORD *)v30 = v42[0];
          *((_DWORD *)v30 + 4) = 1;
          if ( *((_QWORD *)v30 + 3) != v32 )
          {
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
            v33 = *((_QWORD *)v3 + 3);
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            *((_QWORD *)v3 + 3) = v32;
          }
        }
        else
        {
          v3 = 0LL;
        }
        if ( !v3 )
        {
          v15 = -2147024882;
          (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 29) + 48LL))(
            *((_QWORD *)this + 29),
            v31);
          goto LABEL_41;
        }
        v4 = 1;
      }
    }
    else
    {
      if ( v3 )
        v4 = 0;
      v2 = this;
    }
    if ( *(_DWORD *)v6 )
      break;
    v15 = 0;
LABEL_38:
    if ( !v4 && v3 )
    {
      if ( (*((_DWORD *)v3 + 4))-- == 1 )
        CInPlaceBuffer::`scalar deleting destructor'(v3, a2);
      v3 = 0LL;
    }
    if ( !v5 )
      goto LABEL_41;
  }
  v45 = *(_DWORD *)(v6 + 40);
  v47 = 1094927443;
  Block = 0LL;
  if ( v3 )
    v44 = *(_QWORD *)v3;
  else
    v44 = 0LL;
  v11 = *(void ***)(v6 + 24);
  if ( v11 )
  {
    v12 = (__int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **))*((_QWORD *)*v11 + 2);
    if ( v12 == CProcessNode::GetRightFormat )
    {
      Block = v11[2];
      v13 = (volatile signed __int32 *)v11[2];
      if ( v13 )
      {
        v14 = *(void (**)(void))(*(_QWORD *)v13 + 8LL);
        if ( (char *)v14 == (char *)CAudioMediaType::AddRef )
        {
          _InterlockedIncrement(v13 + 2);
          v5 = v49;
        }
        else
        {
          v14();
        }
      }
    }
    else
    {
      v15 = v12((CProcessNode *)v11, (struct IAudioMediaType **)&Block);
      if ( v15 < 0 )
        goto LABEL_32;
    }
  }
  else
  {
    v34 = *(CProcessNode **)(v6 + 32);
    if ( v34 )
    {
      v35 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v34 + 8LL);
      v36 = v35 == CProcessNode::GetLeftFormat
          ? CProcessNode::GetLeftFormat(v34, (struct IAudioMediaType **)&Block)
          : v35(v34, (struct IAudioMediaType **)&Block);
      v15 = v36;
      if ( v36 < 0 )
        goto LABEL_32;
    }
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v6 + 48) + 56LL))(
          *(_QWORD *)(v6 + 48),
          v43,
          v6 + 8);
  if ( v15 >= 0 && v3 )
  {
    *(_QWORD *)(v6 + 56) = v3;
    ++*((_DWORD *)v3 + 4);
  }
LABEL_32:
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
      v5 = v49;
    }
    else
    {
      v17((CAudioMediaType *)Block);
    }
    Block = 0LL;
  }
  if ( v15 >= 0 )
    goto LABEL_38;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_1ca138749e453a9e5342dd7aa161b4a4_Traceguids,
      (unsigned int)v15);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v15);
LABEL_41:
  if ( v3 )
    CInPlaceBuffer::Release(v3);
  if ( v15 < 0 )
  {
LABEL_110:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40LL,
        &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        (unsigned int)v15);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnections", 0x959u, v15);
  }
  return (unsigned int)v15;
}
