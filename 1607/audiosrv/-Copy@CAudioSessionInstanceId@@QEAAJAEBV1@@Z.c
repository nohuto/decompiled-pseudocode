/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x1800118AC
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180005F0C (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18002A314 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CAudioSessionInstanceId::Copy(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  int v4; // ebx
  ATL::CAtlException *v6; // [rsp+28h] [rbp-10h] BYREF
  int v7; // [rsp+40h] [rbp+8h]

  v4 = CAudioEndpointId::Copy(this, a2);
  if ( v4 < 0 )
    goto LABEL_6;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  v4 = CAppAudioSessionId::Copy(
         (CAudioSessionInstanceId *)((char *)this + 8),
         (const struct CAudioSessionInstanceId *)((char *)a2 + 8));
  if ( v4 < 0 )
    goto LABEL_6;
  v4 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=((char *)this + 72);
  }
  catch ( ATL::CAtlException *v6 )
  {
    __eh34_catch_handler_absent(0, 0, CAudioSessionInstanceId::Copy_::_1_::catch_0);
    v4 = v7;
    if ( v7 < 0 )
LABEL_6:
      AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Copy", 0x395u, v4);
  }
  return (unsigned int)v4;
}
