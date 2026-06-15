/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x14000B620
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140002EC0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006120 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400250A4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140008F20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D310 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400102E0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140010430 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CPipeInstance::~CPipeInstance(LPVOID *this)
{
  LPVOID *v2; // rcx
  _QWORD **v3; // rbx
  _QWORD *v4; // rax
  bool v5; // zf
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  LPVOID *v8; // rcx
  void *(__fastcall ***v9)(CAPOProcessNode *__hidden, unsigned int); // rdi
  _QWORD *v10; // rax
  void *(__fastcall *v11)(CAPOProcessNode *__hidden, unsigned int); // rax
  void *(__fastcall **v12)(CAPOProcessNode *__hidden, unsigned int); // rsi
  void *(__fastcall *v13)(CAPOProcessNode *__hidden, unsigned int); // rcx
  volatile signed __int32 *v14; // rsi
  unsigned int (__fastcall *v15)(CAudioMediaType *__hidden); // rax
  volatile signed __int32 *v16; // rsi
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rax
  LPVOID v18; // rcx
  LPVOID v19; // rcx
  LPVOID v20; // rcx
  LPVOID v21; // rcx
  __int64 v22; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections((CPipeInstance *)this);
  while ( this[10] )
  {
    v2 = (LPVOID *)this[8];
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (_QWORD **)v2[2];
    v4 = *v2;
    this[8] = *v2;
    if ( v4 )
      v4[1] = 0LL;
    else
      this[9] = 0LL;
    *v2 = this[12];
    this[12] = v2;
    v5 = this[10] == (LPVOID)1;
    this[10] = (char *)this[10] - 1;
    if ( v5 )
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(this + 8);
    if ( v3 )
    {
      if ( v3[1] && *(_DWORD *)v3 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3[6] + 64LL))(v3[6]);
        v3[1] = 0LL;
      }
      v6 = v3[7];
      if ( v6 )
      {
        v5 = (*((_DWORD *)v6 + 4))-- == 1;
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v6[3] + 48LL))(v6[3], v6[1]);
          v22 = v6[3];
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          operator delete(v6);
        }
        v3[7] = 0LL;
      }
      v7 = v3[6];
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      operator delete(v3);
    }
  }
  while ( this[4] )
  {
    v8 = (LPVOID *)this[2];
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = (void *(__fastcall ***)(CAPOProcessNode *__hidden, unsigned int))v8[2];
    v10 = *v8;
    this[2] = *v8;
    if ( v10 )
      v10[1] = 0LL;
    else
      this[3] = 0LL;
    *v8 = this[6];
    this[6] = v8;
    v5 = this[4] == (LPVOID)1;
    this[4] = (char *)this[4] - 1;
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(this + 2);
    if ( *((_DWORD *)v9 + 10) == 2 )
      (*(void (__fastcall **)(LPVOID, void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(*(_QWORD *)this[29] + 32LL))(
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
          (*(void (__fastcall **)(void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(*(_QWORD *)v13 + 16LL))(v13);
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
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids);
  }
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(this + 30);
  v18 = this[29];
  if ( v18 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v18 + 16LL))(v18);
  CoTaskMemFree(this[23]);
  this[23] = 0LL;
  v19 = this[22];
  if ( v19 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = this[21];
  if ( v20 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = this[18];
  if ( v21 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(this + 8);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(this + 2);
}
