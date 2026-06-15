/*
 * XREFs of ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012AF8
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140011830 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E4A0 (-RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140034354 (-DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 */

__int64 __fastcall CStreamGroup::DisconnectPipesFromDeviceGraph(CStreamGroup *this, struct ISaDeviceInternal *a2)
{
  _QWORD *v2; // rax
  int v3; // ebx
  CStreamGroup *v5; // rsi
  __int64 (__fastcall *v7)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *); // rbx
  int v8; // eax
  _QWORD *Next; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 12);
  v3 = 0;
  v10 = v2;
  v5 = this;
  while ( v2 )
  {
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v10);
    this = (CStreamGroup *)*Next;
    if ( *(_BYTE *)(*Next + 17LL) )
      v3 = CStreamInstanceNew::DisconnectFromSaDevice(this, a2);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v2 = v10;
  }
  if ( *((_QWORD *)v5 + 11) && *((_BYTE *)v5 + 264) )
  {
    v7 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
    if ( v7 == CSystemAudioDeviceSharedNew::RemovePipe )
      v8 = CSystemAudioDeviceSharedNew::RemovePipe(a2, *((struct CPipeInstance **)v5 + 11));
    else
      v8 = v7(a2, *((struct CPipeInstance **)v5 + 11));
    v3 = v8;
    *((_BYTE *)v5 + 264) = v8 < 0;
  }
  if ( v3 >= 0 )
  {
    if ( *((_QWORD *)v5 + 34) && *((_BYTE *)v5 + 296) )
      v3 = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *, _QWORD))(*(_QWORD *)a2 + 48LL))(
             a2,
             *((_QWORD *)v5 + 34));
    else
      v3 = 0;
    *((_BYTE *)v5 + 296) = v3 < 0;
  }
  return (unsigned int)v3;
}
