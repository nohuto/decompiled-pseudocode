/*
 * XREFs of ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800053CC
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180004998 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180028EE0 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18002BC04 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?GetKeyAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@H@Z @ 0x18002ECA8 (-GetKeyAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CProcess::HasDuckedStream(CProcess *this)
{
  unsigned int v2; // r13d
  unsigned int v3; // r14d
  char *v4; // rbx
  _DWORD *v5; // r12
  unsigned int v6; // r15d
  __int64 v8; // [rsp+60h] [rbp+8h]

  v2 = 0;
  if ( (unsigned int)CProcess::SubjectToStreamClassPolicyGains((CProcess *)((char *)this + 16)) )
  {
    v3 = 0;
    if ( *((int *)this + 68) > 0 )
    {
      v4 = (char *)this + 256;
      do
      {
        v5 = *(_DWORD **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                           v4,
                           v3);
        v6 = 0;
        v8 = *(_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetKeyAt(
                          v4,
                          v3);
        while ( !*v5
             || !(*(unsigned int (__fastcall **)(char *, _QWORD, __int64, _QWORD, _DWORD, bool))(*((_QWORD *)g_StreamClassPolicyManager
                                                                                                 + 2)
                                                                                               + 24LL))(
                   (char *)g_StreamClassPolicyManager + 16,
                   *((unsigned int *)this + 43),
                   v8,
                   v6,
                   0,
                   *(_DWORD *)(*((_QWORD *)this + 28) + 112LL) != 0) )
        {
          ++v6;
          ++v5;
          if ( v6 >= 0x15 )
            goto LABEL_7;
        }
        v2 = 1;
LABEL_7:
        ++v3;
        v4 = (char *)this + 256;
      }
      while ( (signed int)v3 < *((_DWORD *)this + 68) );
    }
  }
  return v2;
}
