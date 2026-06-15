/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x1400086A0 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140005C20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000A640 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x14000C0F0 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x14000C2B0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::Cleanup(CPipeInstance *this)
{
  __int64 *v2; // rcx
  _QWORD **v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  _QWORD *v6; // rbp
  _QWORD *v7; // rsi
  __int64 *v8; // rcx
  void *(__fastcall ***v9)(CAPOProcessNode *__hidden, unsigned int); // r14
  __int64 v10; // rax
  void *(__fastcall *v11)(CAPOProcessNode *__hidden, unsigned int); // rbx
  void *(__fastcall **v12)(CAPOProcessNode *__hidden, unsigned int); // rdi
  void *(__fastcall *v13)(CAPOProcessNode *__hidden, unsigned int); // rsi
  volatile signed __int32 *v14; // rbx
  unsigned int (__fastcall *v15)(CAudioMediaType *__hidden); // rdi
  void *(__fastcall **v16)(CAPOProcessNode *__hidden, unsigned int); // rbx
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rdi
  __int64 v18; // rsi

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      54LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      this,
      -2LL);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  while ( *((_QWORD *)this + 10) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 8);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (_QWORD **)v2[2];
    v4 = *v2;
    *((_QWORD *)this + 8) = *v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      *((_QWORD *)this + 9) = 0LL;
    *v2 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v2;
    v5 = (*((_QWORD *)this + 10))-- == 1LL;
    if ( v5 )
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((char *)this + 64);
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
  while ( *((_QWORD *)this + 4) )
  {
    v8 = (__int64 *)*((_QWORD *)this + 2);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = (void *(__fastcall ***)(CAPOProcessNode *__hidden, unsigned int))v8[2];
    v10 = *v8;
    *((_QWORD *)this + 2) = *v8;
    if ( v10 )
      *(_QWORD *)(v10 + 8) = 0LL;
    else
      *((_QWORD *)this + 3) = 0LL;
    *v8 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v8;
    v5 = (*((_QWORD *)this + 4))-- == 1LL;
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((char *)this + 16);
    if ( *((_DWORD *)v9 + 10) == 2 )
      (*(void (__fastcall **)(_QWORD, void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(**((_QWORD **)this + 29) + 32LL))(
        *((_QWORD *)this + 29),
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
      v16 = v9[1];
      if ( v16 )
      {
        v17 = (unsigned int (__fastcall *)(CAudioMediaType *__hidden))*((_QWORD *)*v16 + 2);
        if ( v17 == CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v9[1]);
        else
          v17((CAudioMediaType *)v9[1]);
      }
      operator delete(v9);
    }
    else if ( v11 == CDeviceProcessNode::`vector deleting destructor' )
    {
      CDeviceProcessNode::`vector deleting destructor'((CDeviceProcessNode *)v9, 1u);
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
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 55LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
  }
}
