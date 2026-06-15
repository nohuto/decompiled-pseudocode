/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002B7C0
 * Callers:
 *     AudioSessionManagerAddVolumeDuckNotification @ 0x18003A340 (AudioSessionManagerAddVolumeDuckNotification.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180032844 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@XZ @ 0x1800328A0 (--0CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800328D0 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18003294C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800343C8 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Sdx @ 0x1800A3C64 (WPP_SF_Sdx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  int v8; // edx
  int v9; // r8d
  TraceLoggingHProvider v10; // rcx
  int v11; // ebx
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v15; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-38h] BYREF

  CDuckingNotification::CDuckingNotification((CDuckingNotification *)v16);
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdx(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, (_DWORD)a2, a3, a4, -2LL);
    v10 = WPP_GLOBAL_Control;
  }
  if ( this[7].LockCount == 1 )
  {
    v11 = -2147467260;
LABEL_12:
    if ( v10 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v10 + 7) & 0x8000000) != 0
      && *((_BYTE *)v10 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v10 + 2), 31LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, (unsigned int)v11);
    }
    goto LABEL_9;
  }
  v11 = CDuckingNotification::Init((CDuckingNotification *)v16, a3, a2, a4);
  if ( v11 < 0 )
    goto LABEL_11;
  try
  {
    CDuckingNotification::CDuckingNotification((CDuckingNotification *)v17, (const struct CDuckingNotification *)v16);
    v11 = CLockedList<CDuckingNotification,1,0>::AddInterface(this + 2);
  }
  catch ( ATL::CAtlException *v15 )
  {
    v13 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _resetstkoflw();
    v11 = *(_DWORD *)v13;
  }
  if ( v11 < 0 )
  {
LABEL_11:
    v10 = WPP_GLOBAL_Control;
    goto LABEL_12;
  }
LABEL_9:
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v16);
  return (unsigned int)v11;
}
