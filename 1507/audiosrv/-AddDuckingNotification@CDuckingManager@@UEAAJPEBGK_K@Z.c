/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18000E5C0
 * Callers:
 *     AudioSessionManagerAddVolumeDuckNotification @ 0x1800323A0 (AudioSessionManagerAddVolumeDuckNotification.c)
 * Callees:
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005FD4 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180007BE8 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@XZ @ 0x180007C44 (--0CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x180007C6C (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180007CE8 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_Sdx @ 0x1800A6924 (WPP_SF_Sdx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 a4)
{
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // ebx
  const struct CDuckingNotification *v12; // rax
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v16; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+60h] [rbp-38h] BYREF

  CDuckingNotification::CDuckingNotification((CDuckingNotification *)v17);
  v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Sdx(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v8, v9, (_DWORD)a2, a3, a4, -2LL);
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( this[7].LockCount == 1 )
  {
    v11 = -2147467260;
LABEL_12:
    if ( (struct _GUID *)v10 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v10 + 28) & 0x8000000) != 0
      && *(_BYTE *)(v10 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v10 + 16), 31LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, (unsigned int)v11);
    }
    goto LABEL_9;
  }
  v11 = CDuckingNotification::Init((CDuckingNotification *)v17, a3, a2, a4);
  if ( v11 < 0 )
    goto LABEL_11;
  try
  {
    v12 = CDuckingNotification::CDuckingNotification(
            (CDuckingNotification *)v18,
            (const struct CDuckingNotification *)v17);
    v11 = CLockedList<CDuckingNotification,1,0>::AddInterface(this + 2, v12);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v14 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _resetstkoflw();
    v11 = *(_DWORD *)v14;
  }
  if ( v11 < 0 )
  {
LABEL_11:
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_12;
  }
LABEL_9:
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v17);
  return (unsigned int)v11;
}
