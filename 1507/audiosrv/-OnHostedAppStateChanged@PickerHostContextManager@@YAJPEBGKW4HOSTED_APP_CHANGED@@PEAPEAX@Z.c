/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180008B24
 * Callers:
 *     s_pbmReportHostedAppStateChange @ 0x180008AC0 (s_pbmReportHostedAppStateChange.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x180005B9C (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x1800089B4 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180008D10 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180008DD4 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        PickerHostContextManager **a4)
{
  PickerHostContextManager **v4; // rsi
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  struct CPickerHostContext *v8; // rdx
  CPickerHostContext *v9; // rdi
  int v10; // edi
  CPickerHostContext *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rax
  ATL::CAtlException *v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-88h] BYREF
  int v19; // [rsp+20h] [rbp-68h]
  CPickerHostContext *v20[2]; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v21; // [rsp+38h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  char v23; // [rsp+48h] [rbp-40h]

  v20[1] = (CPickerHostContext *)-2LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  lpCriticalSection = &PickerHostContextManager::s_csPickerHostContextList;
  v23 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v9 = *v4;
  if ( *v4 && (unsigned int)PickerHostContextManager::IsValidPickerHostContext(*v4, v8) )
    goto LABEL_3;
  v12 = (CPickerHostContext *)operator new(0x30uLL);
  v9 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_DWORD *)v12 + 10) = 10;
    v20[0] = v12;
  }
  else
  {
    v9 = 0LL;
    v20[0] = 0LL;
  }
  if ( v9 )
  {
    try
    {
      v15 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
              v13,
              (__int64 *)v20,
              v14,
              PickerHostContextManager::s_PickerHostContextList);
      if ( PickerHostContextManager::s_PickerHostContextList )
        *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v15;
      else
        qword_1800E75B8 = (__int64)v15;
      PickerHostContextManager::s_PickerHostContextList = (__int64)v15;
    }
    catch ( ATL::CAtlException *v21 )
    {
      v17 = &v18;
      v16 = v21;
      if ( *(_DWORD *)v21 == -1073741571 )
        _resetstkoflw();
      v19 = *(_DWORD *)v16;
      v10 = v19;
      if ( v19 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v20[0], (unsigned int)v17);
LABEL_4:
        if ( v10 >= 0 )
          goto LABEL_5;
        goto LABEL_22;
      }
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v7 = a1;
      v9 = v20[0];
    }
    *v4 = v9;
LABEL_3:
    v10 = CPickerHostContext::AddHostedAppInteractivityNotification(v9, v7, v6, v5);
    goto LABEL_4;
  }
  v10 = -2147024882;
LABEL_22:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
      (unsigned int)v10);
  }
LABEL_5:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v10;
}
