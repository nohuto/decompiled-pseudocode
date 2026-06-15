/*
 * XREFs of ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180012330
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x180012E90 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A38CC (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18000B04C (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18000DB50 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?GetKeyAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@H@Z @ 0x1800309E8 (-GetKeyAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CProcess::SimulateStreamStateChange(CProcess *this, int a2, int *a3)
{
  int v3; // esi
  int v4; // r12d
  int *v5; // rax
  int v6; // edi
  char *v8; // rbx
  unsigned int *v9; // r15
  unsigned int v10; // r14d
  const unsigned __int16 *v11; // rsi
  unsigned int i; // r13d
  __int64 (__fastcall *v13)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *); // rdi
  int v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h]
  int *v16; // [rsp+A0h] [rbp+18h]
  int v17; // [rsp+A8h] [rbp+20h]

  v16 = a3;
  v15 = a2;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v17 = 0;
  if ( *((int *)this + 68) > 0 )
  {
    v8 = (char *)this + 256;
    do
    {
      v9 = *(unsigned int **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                               (__int64)v8,
                               v3);
      v10 = 0;
      v11 = *(const unsigned __int16 **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetKeyAt(
                                          v8,
                                          (unsigned int)v3);
      do
      {
        for ( i = 0; i < *v9; v6 = v15 )
        {
          v14 = 0;
          if ( v6 )
          {
            (**((void (__fastcall ***)(char *, _QWORD, const unsigned __int16 *, _QWORD, _DWORD, int *))g_StreamClassPolicyManager
              + 2))(
              (char *)g_StreamClassPolicyManager + 16,
              *((unsigned int *)this + 43),
              v11,
              v10,
              0,
              &v14);
          }
          else
          {
            v13 = *(__int64 (__fastcall **)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *))(*((_QWORD *)g_StreamClassPolicyManager + 2) + 8LL);
            if ( v13 == CStreamClassPolicyManager::UpdatePolicyForOutgoingStream )
              CStreamClassPolicyManager::UpdatePolicyForOutgoingStream(
                (struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16),
                *((_DWORD *)this + 43),
                v11,
                v10,
                eRender,
                &v14);
            else
              v13(
                (struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16),
                *((_DWORD *)this + 43),
                v11,
                v10,
                eRender,
                &v14);
          }
          v4 |= v14;
          ++i;
        }
        ++v10;
        ++v9;
      }
      while ( v10 < 0x15 );
      v8 = (char *)this + 256;
      v3 = v17 + 1;
      v17 = v3;
    }
    while ( v3 < *((_DWORD *)this + 68) );
    v5 = v16;
  }
  *v5 = v4;
}
