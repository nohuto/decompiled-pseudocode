/*
 * XREFs of ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140003860 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0 (--1CStreamGroup@@QEAA@XZ.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140002438 (-DisconnectFromSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005B60 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::DisconnectPipesFromDeviceGraph(CStreamGroup *this, struct ISaDeviceInternal *a2)
{
  __int64 v2; // rax
  CStreamGroup *v4; // rdi
  int v5; // ebx
  int (*v6)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rbx
  int v7; // eax
  __int64 Next; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 12);
  v10 = v2;
  v4 = this;
  v5 = 0;
  while ( v2 )
  {
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(this, &v10);
    this = *(CStreamGroup **)Next;
    if ( *(_BYTE *)(*(_QWORD *)Next + 17LL) )
      v5 = CStreamInstance::DisconnectFromSaDevice((struct CPipeInstance **)this, a2);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v2 = v10;
  }
  if ( *((_QWORD *)v4 + 11) && *((_BYTE *)v4 + 264) )
  {
    v6 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
    if ( v6 == CSystemAudioDeviceSharedBase::RemovePipe )
      v7 = CSystemAudioDeviceSharedBase::RemovePipe(a2, *((struct CPipeInstance **)v4 + 11));
    else
      v7 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, _QWORD))v6)(a2, *((_QWORD *)v4 + 11));
    v5 = v7;
    *((_BYTE *)v4 + 264) = v7 < 0;
  }
  if ( v5 >= 0 )
    return (unsigned int)CFormatConverterPipe::DisconnectFromSaDevice((CStreamGroup *)((char *)v4 + 272), a2);
  return (unsigned int)v5;
}
