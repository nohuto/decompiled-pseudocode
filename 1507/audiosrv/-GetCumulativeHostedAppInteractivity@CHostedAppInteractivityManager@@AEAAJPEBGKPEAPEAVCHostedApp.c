/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18002D6AC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180006F9C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18002C87C (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // rdi
  int Instance; // ebx
  __int64 v8; // r8
  void **v9; // rcx
  unsigned __int16 *v11; // rax
  int v12; // r9d
  int v13; // edx
  struct CHostedAppInteractivity *v14[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v15; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+60h] [rbp+8h] BYREF
  struct CHostedAppInteractivity **v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  v14[1] = (struct CHostedAppInteractivity *)-2LL;
  v4 = a4;
  Instance = 0;
  v14[0] = 0LL;
  v16 = (_QWORD *)qword_1800E8458;
  if ( qword_1800E8458 )
  {
    while ( 1 )
    {
      this = (CHostedAppInteractivityManager *)*ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                                                  (__int64)this,
                                                  &v16);
      v14[0] = this;
      if ( *((_DWORD *)this + 2) == a3 )
      {
        v11 = *(unsigned __int16 **)this;
        do
        {
          v12 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v11 - *(_QWORD *)this);
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        if ( !v13 )
          break;
      }
      if ( !v16 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    Instance = CHostedAppInteractivity::CreateInstance(a2, a3, v14);
    if ( Instance < 0 )
      goto LABEL_19;
    Instance = 0;
    try
    {
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        &qword_1800E8458,
        (__int64 *)v14,
        v8);
    }
    catch ( ATL::CAtlException *v15 )
    {
      __eh34_catch_handler_absent(
        0,
        0,
        CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity_::_1_::catch_0);
      Instance = (int)v16;
      if ( (int)v16 < 0 )
      {
LABEL_19:
        v9 = (void **)v14[0];
        goto LABEL_6;
      }
      v4 = v17;
    }
    this = v14[0];
  }
  *v4 = this;
  v9 = 0LL;
LABEL_6:
  if ( v9 )
    CHostedAppInteractivity::`scalar deleting destructor'(v9);
  if ( Instance < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      17LL,
      &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
      (unsigned int)Instance);
  }
  return (unsigned int)Instance;
}
