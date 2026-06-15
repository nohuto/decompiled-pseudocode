/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000FFE0
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000C020 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B990 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000BE10 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D620 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140013340 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::Cleanup(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rcx
  _QWORD **v3; // rbx
  struct IAudioProcessor *v4; // rax
  bool v5; // zf
  _QWORD *v6; // rbp
  _QWORD *v7; // rsi
  struct IAudioProcessor *v8; // rcx
  void *(__fastcall ***v9)(CAPOProcessNode *__hidden, unsigned int); // r14
  struct IAudioProcessor *v10; // rax
  void *(__fastcall *v11)(CAPOProcessNode *__hidden, unsigned int); // rbx
  void *(__fastcall **v12)(CAPOProcessNode *__hidden, unsigned int); // rdi
  void *(__fastcall *v13)(CAPOProcessNode *__hidden, unsigned int); // rsi
  volatile signed __int32 *v14; // rbx
  unsigned int (__fastcall *v15)(CAudioMediaType *__hidden); // rdi
  volatile signed __int32 *v16; // rbx
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rdi
  __int64 v18; // rsi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  while ( this[10] )
  {
    v2 = this[8];
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (_QWORD **)*((_QWORD *)v2 + 2);
    v4 = *(struct IAudioProcessor **)v2;
    this[8] = *(struct IAudioProcessor **)v2;
    if ( v4 )
      *((_QWORD *)v4 + 1) = 0LL;
    else
      this[9] = 0LL;
    *(_QWORD *)v2 = this[12];
    this[12] = v2;
    v5 = this[10] == (struct IAudioProcessor *)1;
    this[10] = (struct IAudioProcessor *)((char *)this[10] - 1);
    if ( v5 )
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64)(this + 8));
    if ( v3 )
    {
      if ( v3[1] && *(_DWORD *)v3 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v3[6] + 64LL))(v3[6], v3[1]);
        v3[1] = 0LL;
      }
      v6 = v3[7];
      if ( v6 )
      {
        v5 = (*((_DWORD *)v6 + 4))-- == 1;
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v6[3] + 48LL))(v6[3], v6[1]);
          v18 = v6[3];
          if ( v18 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 16LL))(v6[3]);
          operator delete(v6);
        }
        v3[7] = 0LL;
      }
      v7 = v3[6];
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v3[6]);
      operator delete(v3);
    }
  }
  while ( this[4] )
  {
    v8 = this[2];
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = (void *(__fastcall ***)(CAPOProcessNode *__hidden, unsigned int))*((_QWORD *)v8 + 2);
    v10 = *(struct IAudioProcessor **)v8;
    this[2] = *(struct IAudioProcessor **)v8;
    if ( v10 )
      *((_QWORD *)v10 + 1) = 0LL;
    else
      this[3] = 0LL;
    *(_QWORD *)v8 = this[6];
    this[6] = v8;
    v5 = this[4] == (struct IAudioProcessor *)1;
    this[4] = (struct IAudioProcessor *)((char *)this[4] - 1);
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)(this + 2));
    if ( *((_DWORD *)v9 + 10) == 2 )
      (*(void (__fastcall **)(struct IAudioProcessor *, void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(*(_QWORD *)this[29] + 32LL))(
        this[29],
        v9[4][5]);
    v11 = **v9;
    if ( v11 == CAPOProcessNode::`scalar deleting destructor' )
    {
      *v9 = (void *(__fastcall **)(CAPOProcessNode *__hidden, unsigned int))&CAPOProcessNode::`vftable';
      v12 = v9[4];
      if ( v12 )
      {
        v13 = v12[5];
        if ( v13 )
          (*(void (__fastcall **)(void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(*(_QWORD *)v13 + 16LL))(v12[5]);
        operator delete(v12);
      }
      v9[4] = 0LL;
      *v9 = (void *(__fastcall **)(CAPOProcessNode *__hidden, unsigned int))&CProcessNode::`vftable';
      v14 = (volatile signed __int32 *)v9[2];
      if ( v14 )
      {
        v15 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v14 + 16LL);
        if ( v15 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v14 = &CAudioMediaType::`vftable';
            operator delete[](*((void **)v14 + 2));
            *((_QWORD *)v14 + 2) = 0LL;
            operator delete((void *)v14);
          }
        }
        else
        {
          v15((CAudioMediaType *)v9[2]);
        }
      }
      v16 = (volatile signed __int32 *)v9[1];
      if ( v16 )
      {
        v17 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v16 + 16LL);
        if ( v17 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v16 = &CAudioMediaType::`vftable';
            operator delete[](*((void **)v16 + 2));
            *((_QWORD *)v16 + 2) = 0LL;
            operator delete((void *)v16);
          }
        }
        else
        {
          v17((CAudioMediaType *)v9[1]);
        }
      }
      operator delete(v9);
    }
    else if ( v11 == CStreamProcessNode::`scalar deleting destructor' )
    {
      CStreamProcessNode::`scalar deleting destructor'((CStreamProcessNode *)v9, 1u);
    }
    else
    {
      v11((CAPOProcessNode *)v9, 1u);
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
  }
}
