/*
 * XREFs of ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140003760
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003430 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x14000362C (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005C20 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002F704 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@_N@Z @ 0x1400344E4 (-ConnectToSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@_N@Z.c)
 */

int __fastcall CStreamGroup::ConnectPipesToDeviceGraph(CStreamGroup *this, struct ISaDeviceInternal *a2)
{
  const struct CPipeInstance **v2; // r15
  int result; // eax
  __int64 v6; // rbx
  int (*v7)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rdi
  char v8; // cl
  __int64 v9; // rcx
  CStreamInstance **Next; // rax
  const struct CPipeInstance *v11; // rbx
  CStreamInstance *v12; // rdi
  __int64 StreamGroupLatency; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (const struct CPipeInstance **)((char *)this + 272);
  if ( *((_QWORD *)this + 34) )
    result = CFormatConverterPipe::ConnectToSaDevice(
               (CStreamGroup *)((char *)this + 272),
               a2,
               *((_DWORD *)this + 60) == 2);
  else
    result = 0;
  if ( result >= 0 )
  {
    v6 = *((_QWORD *)this + 11);
    if ( v6 )
    {
      if ( *v2 )
      {
        result = CPipeInstance::ConnectToRightPipe(*((CPipeInstance **)this + 11), *v2);
        if ( result < 0 )
          goto LABEL_16;
        v6 = *((_QWORD *)this + 11);
        v7 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 40LL);
      }
      else
      {
        v7 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 24LL);
        if ( v7 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
        {
          result = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, *((struct CPipeInstance **)this + 11));
          goto LABEL_8;
        }
      }
      result = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, __int64))v7)(a2, v6);
LABEL_8:
      if ( result >= 0 )
      {
        v8 = 1;
LABEL_10:
        *((_BYTE *)this + 264) = v8;
        goto LABEL_11;
      }
LABEL_16:
      v8 = 0;
      goto LABEL_10;
    }
  }
LABEL_11:
  v9 = *((_QWORD *)this + 12);
  v14 = v9;
  if ( result >= 0 )
  {
    while ( v9 )
    {
      Next = (CStreamInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v9, &v14);
      v11 = *v2;
      v12 = *Next;
      StreamGroupLatency = CStreamGroup::GetStreamGroupLatency(this);
      result = CStreamInstance::ConnectToSaDevice(v12, a2, v11, StreamGroupLatency);
      if ( result < 0 )
        break;
      v9 = v14;
    }
  }
  return result;
}
