/*
 * XREFs of ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012BAC
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E530 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140012A64 (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002EE88 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@_N@Z @ 0x140034290 (-ConnectToSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@_N@Z.c)
 */

int __fastcall CStreamGroup::ConnectPipesToDeviceGraph(CStreamGroup *this, struct ISaDeviceInternal *a2)
{
  const struct CPipeInstance **v2; // r15
  int result; // eax
  struct CPipeInstance *v6; // rbx
  _QWORD *v7; // rcx
  CStreamInstanceNew **Next; // rax
  const struct CPipeInstance *v9; // rbx
  CStreamInstanceNew *v10; // rdi
  __int64 StreamGroupLatency; // rax
  __int64 (__fastcall *v12)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *); // rdi
  char v13; // cl
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

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
    v6 = (struct CPipeInstance *)*((_QWORD *)this + 11);
    if ( v6 )
    {
      if ( *v2 )
      {
        result = CPipeInstance::ConnectToRightPipe(*((CPipeInstance **)this + 11), *v2);
        if ( result < 0 )
          goto LABEL_16;
        v6 = (struct CPipeInstance *)*((_QWORD *)this + 11);
        v12 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *))(*(_QWORD *)a2 + 40LL);
      }
      else
      {
        v12 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *))(*(_QWORD *)a2 + 24LL);
        if ( v12 == CSystemAudioDeviceSharedNew::AddPipeToMixSplitConnection )
        {
          result = CSystemAudioDeviceSharedNew::AddPipeToMixSplitConnection(a2, *((struct CPipeInstance **)this + 11));
          goto LABEL_13;
        }
      }
      result = v12(a2, v6);
LABEL_13:
      if ( result >= 0 )
      {
        v13 = 1;
LABEL_15:
        *((_BYTE *)this + 264) = v13;
        goto LABEL_5;
      }
LABEL_16:
      v13 = 0;
      goto LABEL_15;
    }
  }
LABEL_5:
  v7 = (_QWORD *)*((_QWORD *)this + 12);
  v14 = v7;
  if ( result >= 0 )
  {
    while ( v7 )
    {
      Next = (CStreamInstanceNew **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                      (__int64)v7,
                                      &v14);
      v9 = *v2;
      v10 = *Next;
      StreamGroupLatency = CStreamGroup::GetStreamGroupLatency(this);
      result = CStreamInstanceNew::ConnectToSaDevice(v10, a2, v9, StreamGroupLatency);
      if ( result < 0 )
        break;
      v7 = v14;
    }
  }
  return result;
}
