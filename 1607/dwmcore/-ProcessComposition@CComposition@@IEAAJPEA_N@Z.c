/*
 * XREFs of ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?NotifyInvalidDisplaySet@CComposition@@QEAAXXZ @ 0x180043700 (-NotifyInvalidDisplaySet@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8CFC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800A8F40 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x18010EAB4 (-ReleasePendingReferences@CManipulationManager@@QEAAXXZ.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x18011F740 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 *     ?WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ @ 0x18016B59C (-WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ.c)
 */

__int64 __fastcall CComposition::ProcessComposition(CComposition *this, bool *a2)
{
  __int64 v2; // r15
  bool *v3; // rsi
  RTL_SRWLOCK *v4; // r14
  char v5; // r13
  struct CCounterManager *v6; // rcx
  RTL_SRWLOCK *v7; // r12
  int v8; // eax
  int v9; // edi
  int v10; // eax
  char *v11; // rbx
  char *v12; // rbx
  __int64 v13; // rsi
  __int64 *v14; // rdx
  __int64 v15; // rax
  DWORD CurrentThreadId; // eax
  RTL_SRWLOCK *v17; // rcx
  CRenderTargetManager *v18; // rcx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  _QWORD *v22; // rbp
  unsigned int i; // esi
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ebx
  CManipulationManager *Ptr; // rcx
  _QWORD *v28; // rbp
  unsigned int j; // esi
  __int64 v30; // rax
  _QWORD *v31; // r13
  int v32; // ebx
  unsigned int k; // r12d
  __int64 v34; // rbp
  int v35; // eax
  int v36; // esi
  _QWORD *v37; // r13
  unsigned int v38; // r12d
  char v39; // r15
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rbp
  int Buffer; // eax
  int v45; // esi
  int v46; // eax
  CComposition *v47; // rsi
  _QWORD *v48; // rcx
  int v49; // eax
  PVOID v50; // rax
  _QWORD *v51; // rcx
  int v52; // eax
  unsigned int v53; // esi
  CD3DDeviceManager *v54; // rcx
  int v55; // eax
  int v56; // esi
  _QWORD *v57; // rsi
  __int64 v58; // rbp
  unsigned int v59; // eax
  __int64 v60; // rbx
  int v61; // eax
  unsigned int v63; // [rsp+20h] [rbp-58h]
  CComposition *v64; // [rsp+80h] [rbp+8h] BYREF
  HANDLE hEvent; // [rsp+88h] [rbp+10h] BYREF
  char v66; // [rsp+90h] [rbp+18h] BYREF
  int v67; // [rsp+98h] [rbp+20h] BYREF

  hEvent = a2;
  v64 = this;
  v2 = 0LL;
  v66 = 0;
  v3 = a2;
  v67 = 0;
  v4 = (RTL_SRWLOCK *)this;
  v5 = 0;
  v6 = CCounterManager::s_pGlobalPerFrameCounterManager;
  *a2 = 0;
  memset_0(v6, 0, 0x54uLL);
  v7 = v4 + 72;
  AcquireSRWLockExclusive(v4 + 73);
  LODWORD(v4[72].Ptr) = GetCurrentThreadId();
  v8 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 3))(v4);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v8, 0x38Cu);
    Ptr = (CManipulationManager *)v4[8].Ptr;
    if ( Ptr )
      CManipulationManager::ReleasePendingReferences(Ptr);
    CReadWriteLock::Leave((CReadWriteLock *)&v4[72]);
    CManipulationManager::WakeMTPostBatchIfNecessary();
  }
  else
  {
    v10 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, char *, int *))v4->Ptr + 4))(v4, &v66, &v67);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v10, 0x396u);
    if ( v67 == -2003304316 || v67 == -2003304442 || v67 == -2003304307 )
      v5 = 1;
    v11 = (char *)v4[8].Ptr;
    if ( v11 )
    {
      v12 = v11 + 208;
      while ( 1 )
      {
        v13 = 0LL;
        EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 24));
        v14 = *(__int64 **)v12;
        v15 = **(_QWORD **)v12;
        if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *(__int64 **)(v15 + 8) != v14 )
          __fastfail(3u);
        *(_QWORD *)v12 = v15;
        *(_QWORD *)(v15 + 8) = v12;
        if ( v14 != (__int64 *)v12 )
        {
          v13 = v14[2];
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
          --*((_DWORD *)v12 + 4);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 24));
        if ( !v13 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v3 = (bool *)hEvent;
    }
    CurrentThreadId = GetCurrentThreadId();
    v17 = v4 + 73;
    if ( CurrentThreadId == LODWORD(v7->Ptr) )
    {
      LODWORD(v7->Ptr) = 0;
      ReleaseSRWLockExclusive(v17);
    }
    else
    {
      ReleaseSRWLockShared(v17);
    }
    if ( dword_1801EFFE0 )
      SetEvent(::hEvent);
    if ( v9 == -2003304442 )
      goto LABEL_39;
    if ( v9 != -2003304307 && v9 < 0 )
    {
      v63 = 960;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v9, v63);
      goto LABEL_52;
    }
    if ( v5 )
    {
LABEL_39:
      CComposition::NotifyInvalidDisplaySet((CComposition *)v4);
      v22 = v4[4].Ptr;
      v9 = 0;
      for ( i = 0; i < *((_DWORD *)v22 + 12); ++i )
      {
        v24 = *(_QWORD *)(v22[3] + 8LL * i);
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v24 + 112) + 144LL))(v24 + 112);
        v26 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x91u);
        if ( !v9 || v9 >= 0 && v26 < 0 )
          v9 = v26;
      }
      if ( v9 < 0 )
      {
        v63 = 971;
        goto LABEL_27;
      }
    }
    else
    {
      v9 = v67;
      if ( v67 < 0 )
      {
        v63 = 980;
        goto LABEL_27;
      }
      if ( v66 )
      {
        v9 = 142213121;
      }
      else
      {
        v18 = (CRenderTargetManager *)v4[4].Ptr;
        *v3 = 0;
        v19 = CRenderTargetManager::Render(v18, v3);
        v20 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v19, 0x4D9u);
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v20, 0x3E4u);
        }
        v21 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 5))(v4);
        v9 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v21, 0x3EAu);
        }
        else
        {
          (*((void (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 6))(v4);
          v9 = v20;
        }
      }
    }
  }
LABEL_52:
  if ( *(_BYTE *)hEvent )
    return (unsigned int)v9;
  v28 = v4[5].Ptr;
  for ( j = 0; j < *((_DWORD *)v28 + 92); ++j )
  {
    v30 = v28[43];
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v30 + 8LL * j), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *((_DWORD *)v28 + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize(v28 + 43, 8LL);
  v31 = v4[5].Ptr;
  v32 = 0;
  for ( k = 0; k < *((_DWORD *)v31 + 84); ++k )
  {
    v34 = *(_QWORD *)(v31[39] + 8LL * k);
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34);
    v36 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x2C2u);
    if ( !v32 || v32 >= 0 && v36 < 0 )
      v32 = v36;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
  }
  *((_DWORD *)v31 + 84) = 0;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x5C1u);
  }
  else
  {
    v37 = v4[4].Ptr;
    v38 = 0;
    LOBYTE(hEvent) = 0;
    if ( *((_DWORD *)v37 + 12) )
    {
      v39 = (char)hEvent;
      do
      {
        v40 = *(_QWORD *)(v37[3] + 8LL * v38);
        v41 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 48LL))(v40, 38LL) == 0;
        v42 = v37[3];
        if ( v41 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v42 + 8LL * v38) + 48LL))(
                 *(_QWORD *)(v42 + 8LL * v38),
                 55LL) )
          {
            v43 = *(_QWORD *)(v37[3] + 8LL * v38);
            if ( (*(_BYTE *)(v43 + 512) & 3) != 0 )
            {
              if ( *(_QWORD *)(v43 + 528)
                || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)v43),
                    v45 = Buffer,
                    Buffer >= 0) )
              {
                v46 = CIndirectSwapchainRenderTarget::Present((CIndirectSwapchainRenderTarget *)(v43 + 112), 0, 0);
                v45 = v46;
                if ( v46 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x10Du);
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0x109u);
              }
              if ( v45 == 142213130 )
                v39 = 1;
            }
          }
        }
        else
        {
          *(_BYTE *)(*(_QWORD *)(v42 + 8LL * v38) + 760LL) = 0;
        }
        ++v38;
      }
      while ( v38 < *((_DWORD *)v37 + 12) );
      v4 = (RTL_SRWLOCK *)v64;
      v41 = v39 == 0;
      v2 = 0LL;
      if ( !v41 )
        SetEvent(*(HANDLE *)(*((_QWORD *)v64 + 64) + 96LL));
    }
    v47 = (CComposition *)v4[44].Ptr;
    if ( v47 )
    {
      v48 = v4[63].Ptr;
      hEvent = v4[44].Ptr;
      v32 = 0;
      v49 = NtDCompositionConfirmFrame(*v48, &hEvent);
      if ( v49 < 0 )
      {
        v32 = v49 | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49 | 0x10000000, 0x8Eu);
      }
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x5CFu);
        goto LABEL_98;
      }
      v50 = v4[43].Ptr;
      if ( v50 )
        *(_QWORD *)(*(_QWORD *)v50 + 8LL) = 0LL;
      v51 = v4[63].Ptr;
      v64 = v47;
      v32 = 0;
      v52 = NtDCompositionDiscardFrame(*v51, &v64);
      if ( v52 < 0 )
      {
        v32 = v52 | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v52 | 0x10000000, 0xA2u);
      }
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x5E1u);
        goto LABEL_98;
      }
    }
    if ( LODWORD(v4[92].Ptr) )
    {
      v53 = 0;
      do
        UnmapViewOfFile(*((LPCVOID *)v4[89].Ptr + v53++));
      while ( v53 < LODWORD(v4[92].Ptr) );
      LODWORD(v4[92].Ptr) = 0;
      DynArrayImpl<0>::ShrinkToSize(&v4[89], 8LL);
    }
  }
LABEL_98:
  v54 = (CD3DDeviceManager *)v4[65].Ptr;
  if ( !v54 )
    goto LABEL_105;
  v55 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v54 + 3) + 96LL))(*((_QWORD **)v54 + 3), 0LL);
  v56 = v55;
  if ( v55 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x5EDu);
  if ( !v32 )
  {
LABEL_104:
    v32 = v56;
LABEL_105:
    if ( v32 >= 0 )
      goto LABEL_107;
    goto LABEL_106;
  }
  if ( v32 >= 0 )
  {
    if ( v56 >= 0 )
      goto LABEL_105;
    goto LABEL_104;
  }
LABEL_106:
  MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v32, 0x413u);
LABEL_107:
  if ( !v9 || v9 >= 0 && v32 < 0 )
    v9 = v32;
  v57 = v4[4].Ptr;
  LOBYTE(v54) = LODWORD(v4[138].Ptr) == 3;
  v58 = *(_QWORD *)(v57[2] + 352LL);
  if ( LODWORD(v4[138].Ptr) == 3 )
  {
    v59 = *((_DWORD *)v57 + 12);
    if ( v59 )
    {
      v60 = v59;
      do
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v2 + v57[3]) + 112LL) + 80LL))(
          *(_QWORD *)(v2 + v57[3]) + 112LL,
          v58,
          0LL);
        v2 += 8LL;
        --v60;
      }
      while ( v60 );
    }
  }
  v61 = CD3DDeviceManager::HandleAdvanceFrame(v54, v58, 0);
  if ( v61 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x4EFu);
  return (unsigned int)v9;
}
