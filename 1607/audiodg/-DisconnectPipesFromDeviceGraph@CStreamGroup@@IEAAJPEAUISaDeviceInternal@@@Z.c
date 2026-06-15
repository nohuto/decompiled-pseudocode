/*
 * XREFs of ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001E14
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002000 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140002110 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140002EC0 (--1CStreamGroup@@QEAA@XZ.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005710 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::DisconnectPipesFromDeviceGraph(CStreamGroup *this, struct ISaDeviceInternal *a2)
{
  _QWORD *v2; // rax
  int v3; // edi
  CStreamGroup *v5; // rsi
  struct CPipeInstance *v6; // rdx
  int (*v7)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rax
  int v8; // eax
  _QWORD *Next; // rax
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 12);
  v3 = 0;
  v11 = v2;
  v5 = this;
  while ( v2 )
  {
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v11);
    this = (CStreamGroup *)*Next;
    if ( *(_BYTE *)(*Next + 17LL) )
      v3 = CStreamInstance::DisconnectFromSaDevice((struct CPipeInstance **)this, a2);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v2 = v11;
  }
  v6 = (struct CPipeInstance *)*((_QWORD *)v5 + 11);
  if ( v6 && *((_BYTE *)v5 + 264) )
  {
    v7 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
    if ( v7 == CSystemAudioDeviceSharedBase::RemovePipe )
      v8 = CSystemAudioDeviceSharedBase::RemovePipe(a2, v6);
    else
      v8 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *))v7)(a2);
    v3 = v8;
    *((_BYTE *)v5 + 264) = v8 < 0;
  }
  if ( v3 >= 0 )
  {
    if ( *((_QWORD *)v5 + 34) && *((_BYTE *)v5 + 296) )
      v3 = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *))(*(_QWORD *)a2 + 48LL))(a2);
    else
      v3 = 0;
    *((_BYTE *)v5 + 296) = v3 < 0;
  }
  return (unsigned int)v3;
}
