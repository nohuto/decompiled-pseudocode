/*
 * XREFs of ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001EC8
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140002110 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140001D84 (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400057C0 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002DE50 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CStreamGroup::ConnectPipesToDeviceGraph(CStreamGroup *this, struct ISaDeviceInternal *a2)
{
  __int64 v4; // rcx
  const struct CPipeInstance *v5; // rdx
  struct CPipeInstance *v6; // rdx
  int (*v7)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rax
  int v8; // eax
  char v9; // al
  _QWORD *v10; // rax
  CStreamInstance **Next; // rax
  const struct CPipeInstance *v12; // rbx
  CStreamInstance *v13; // rdi
  __int64 StreamGroupLatency; // rax
  int v15; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  _QWORD *v21; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 34) )
  {
    v17 = *(_QWORD *)a2;
    v18 = *((_QWORD *)this + 34);
    if ( *((_DWORD *)this + 60) == 2 )
      v19 = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *, __int64))(v17 + 32))(a2, v18);
    else
      v19 = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *, __int64))(v17 + 24))(a2, v18);
    v4 = v19;
    *((_BYTE *)this + 296) = (v19 & 0x80000000) == 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( (int)v4 < 0 || !*((_QWORD *)this + 11) )
    goto LABEL_11;
  v5 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
  if ( v5 )
  {
    v20 = CPipeInstance::ConnectToRightPipe(*((CPipeInstance **)this + 11), v5);
    v4 = (unsigned int)v20;
    if ( v20 < 0 )
      goto LABEL_16;
    v6 = (struct CPipeInstance *)*((_QWORD *)this + 11);
    v7 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 40LL);
  }
  else
  {
    v6 = (struct CPipeInstance *)*((_QWORD *)this + 11);
    v7 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 24LL);
    if ( v7 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
    {
      v8 = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, v6);
      goto LABEL_8;
    }
  }
  v8 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, struct CPipeInstance *))v7)(a2, v6);
LABEL_8:
  v4 = (unsigned int)v8;
  if ( v8 < 0 )
  {
LABEL_16:
    v9 = 0;
    goto LABEL_10;
  }
  v9 = 1;
LABEL_10:
  *((_BYTE *)this + 264) = v9;
LABEL_11:
  v10 = (_QWORD *)*((_QWORD *)this + 12);
  v21 = v10;
  if ( (int)v4 >= 0 )
  {
    while ( v10 )
    {
      Next = (CStreamInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v21);
      v12 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
      v13 = *Next;
      StreamGroupLatency = CStreamGroup::GetStreamGroupLatency(this);
      v15 = CStreamInstance::ConnectToSaDevice(v13, a2, v12, StreamGroupLatency);
      v4 = (unsigned int)v15;
      if ( v15 < 0 )
        break;
      v10 = v21;
    }
  }
  return (unsigned int)v4;
}
