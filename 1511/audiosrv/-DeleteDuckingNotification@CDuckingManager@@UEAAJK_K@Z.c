/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002B6F0
 * Callers:
 *     AUDIOSESSIONMANAGER_rundown @ 0x18003A250 (AUDIOSESSIONMANAGER_rundown.c)
 *     AudioSessionManagerDeleteVolumeDuckNotification @ 0x18003A4B0 (AudioSessionManagerDeleteVolumeDuckNotification.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180032844 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@XZ @ 0x1800328A0 (--0CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800328D0 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18003294C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180034310 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_dx @ 0x1800A3DE8 (WPP_SF_dx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  CDuckingNotification *v9; // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v13; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+60h] [rbp-28h] BYREF

  CDuckingNotification::CDuckingNotification((CDuckingNotification *)v14);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dx(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, a3);
  }
  v8 = CDuckingNotification::Init((CDuckingNotification *)v14, a2, 0LL, a3);
  if ( v8 < 0 )
    goto LABEL_11;
  try
  {
    v9 = CDuckingNotification::CDuckingNotification(
           (CDuckingNotification *)v15,
           (const struct CDuckingNotification *)v14);
    v8 = CLockedList<CDuckingNotification,1,0>::RemoveInterface(this + 2, v9);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v11 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _resetstkoflw();
    v8 = *(_DWORD *)v11;
  }
  if ( v8 < 0 )
  {
LABEL_11:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        33LL,
        &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        (unsigned int)v8);
    }
  }
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v14);
  return (unsigned int)v8;
}
