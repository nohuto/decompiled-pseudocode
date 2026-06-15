/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000BD44
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18000FE10 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18000CD04 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18000D374 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Copy(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // r14
  volatile signed __int32 *v8; // r13
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-20h] BYREF

  v4 = CAudioEndpointId::Copy(this, a2);
  if ( v4 < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        v4 = CAppAudioSessionId::Copy(
               (CAudioSessionInstanceId *)((char *)this + 8),
               (const struct CAudioSessionInstanceId *)((char *)a2 + 8)),
        v4 < 0) )
  {
LABEL_13:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        25LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v4);
    }
    return (unsigned int)v4;
  }
  v4 = 0;
  try
  {
    v5 = *((_QWORD *)a2 + 9);
    v6 = (volatile signed __int32 *)(v5 - 24);
    v7 = (volatile signed __int32 *)(*((_QWORD *)this + 9) - 24LL);
    if ( (volatile signed __int32 *)(v5 - 24) != v7 )
    {
      if ( *((int *)v7 + 4) >= 0 && *(_QWORD *)v6 == *(_QWORD *)v7 )
      {
        v8 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v6);
        if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
        *((_QWORD *)this + 9) = v8 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 72, v5, *(unsigned int *)(v5 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _resetstkoflw();
    v4 = *(_DWORD *)v10;
    if ( *(int *)v10 < 0 )
      goto LABEL_13;
  }
  return (unsigned int)v4;
}
