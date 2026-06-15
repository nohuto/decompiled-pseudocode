/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x18007F23C
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x180067A18 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003266C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18003273C (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180036C70 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800474B4 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CPolicyConfig::~CPolicyConfig(CPolicyConfig *this)
{
  CPolicyConfig *v1; // rdi
  _QWORD *v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  CAudioSessionStore *v6; // rsi
  __int64 v7; // rax
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+58h] [rbp+10h]
  __int64 v12; // [rsp+60h] [rbp+18h]
  CAudioSessionStore *v13; // [rsp+68h] [rbp+20h]

  v1 = this;
  *(_QWORD *)this = &CPolicyConfig::`vftable'{for `IPolicyConfig'};
  *((_QWORD *)this + 1) = &CPolicyConfig::`vftable'{for `CRefCountedObject'};
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  while ( 1 )
  {
    v2 = (_QWORD *)*((_QWORD *)v1 + 3);
    if ( !v2 )
      break;
    *((_QWORD *)v1 + 3) = v2[3];
    operator delete(v2);
  }
  v3 = *((_QWORD *)v1 + 11);
  while ( 2 )
  {
    v12 = v3;
    if ( v3 )
    {
      try
      {
        v4 = (__int64 *)((char *)v1 + 72);
        v5 = (__int64 *)*((_QWORD *)v1 + 9);
        if ( !v5 )
          ATL::AtlThrowImpl(-2147467259);
        v6 = (CAudioSessionStore *)v5[2];
        v7 = *v5;
        *v4 = *v5;
        if ( v7 )
          *(_QWORD *)(v7 + 8) = 0LL;
        else
          *((_QWORD *)v1 + 10) = 0LL;
        ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(
          (__int64)v4,
          v5);
        v13 = v6;
      }
      catch ( ATL::CAtlException *v9 )
      {
        v8 = v9;
        if ( *(_DWORD *)v9 == -1073741571 )
          _resetstkoflw();
        v11 = *(_DWORD *)v8;
        v1 = this;
        v3 = v12;
        if ( v11 >= 0 )
        {
          v6 = v13;
          goto LABEL_15;
        }
LABEL_17:
        --v3;
        continue;
      }
LABEL_15:
      if ( v6 )
        CAudioSessionStore::Release(v6);
      goto LABEL_17;
    }
    break;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 32));
  `eh vector destructor iterator'(
    (char *)v1 + 376,
    (struct _GUID *)0x48,
    3,
    (void (__fastcall *)(char *))ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>);
  `eh vector destructor iterator'(
    (char *)v1 + 160,
    (struct _GUID *)0x48,
    3,
    (void (__fastcall *)(char *))ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)v1 + 3);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64 *)v1 + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 32));
  *((_QWORD *)v1 + 1) = &CRefCountedObject::`vftable';
}
