/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180008C44
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180008D10 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180006F9C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18002C87C (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // rdi
  int Instance; // ebx
  _QWORD *v8; // r10
  struct CHostedAppInteractivity *v9; // rcx
  unsigned __int16 *v10; // rax
  int v11; // r9d
  int v12; // edx
  void **v13; // rcx
  __int64 v15; // r8
  struct CHostedAppInteractivity *v16[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+60h] [rbp+8h]

  v16[1] = (struct CHostedAppInteractivity *)-2LL;
  v4 = a4;
  Instance = 0;
  v16[0] = 0LL;
  v8 = *(_QWORD **)this;
  while ( v8 )
  {
    v9 = (struct CHostedAppInteractivity *)v8[2];
    v8 = (_QWORD *)*v8;
    v16[0] = v9;
    if ( *((_DWORD *)v9 + 2) == a3 )
    {
      v10 = *(unsigned __int16 **)v9;
      do
      {
        v11 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v10 - *(_QWORD *)v9);
        v12 = *v10 - v11;
        if ( v12 )
          break;
        ++v10;
      }
      while ( v11 );
      if ( !v12 )
        goto LABEL_8;
    }
  }
  Instance = CHostedAppInteractivity::CreateInstance(a2, a3, v16);
  if ( Instance < 0 )
    goto LABEL_16;
  Instance = 0;
  try
  {
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (__int64 *)this,
      (__int64 *)v16,
      v15);
  }
  catch ( ATL::CAtlException *v17 )
  {
    __eh34_catch_handler_absent(0, 0, CPickerHostContext::GetHostedAppInteractivity_::_1_::catch_0);
    Instance = v18;
    if ( v18 < 0 )
    {
LABEL_16:
      v13 = (void **)v16[0];
      goto LABEL_9;
    }
    v4 = a4;
  }
  v9 = v16[0];
LABEL_8:
  *v4 = v9;
  v13 = 0LL;
LABEL_9:
  if ( v13 )
    CHostedAppInteractivity::`scalar deleting destructor'(v13);
  if ( Instance < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
      (unsigned int)Instance);
  }
  return (unsigned int)Instance;
}
