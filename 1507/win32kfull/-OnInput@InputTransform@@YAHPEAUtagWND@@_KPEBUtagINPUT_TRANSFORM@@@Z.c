/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F072C
 * Callers:
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022F904 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     MagpRemoveTransformOutputMagFac @ 0x1C0008BD4 (MagpRemoveTransformOutputMagFac.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0227BB0 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0227EFC (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0227FAC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 */

__int64 __fastcall InputTransform::OnInput(
        InputTransform *this,
        struct tagWND *a2,
        __int64 a3,
        const struct tagINPUT_TRANSFORM *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v9; // rax
  CompositionInputObject *v10; // rcx
  unsigned __int64 *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-78h] BYREF
  float v15[16]; // [rsp+30h] [rbp-68h] BYREF

  v14[0] = a2;
  v6 = 0;
  if ( (unsigned int)IsDwmInputThread(this, a2, a3, a4) || gptiCurrent == gptiManipulationThread )
  {
    v9 = *((_QWORD *)this + 42);
    if ( v9 )
    {
      v10 = *(CompositionInputObject **)(v9 + 96);
      if ( v10 )
      {
        if ( (int)CompositionInputObject::QueryTransform(v10, (struct tagINPUT_TRANSFORM *)v15) >= 0 )
        {
          MagpRemoveTransformOutputMagFac(v15);
          InputTransform::StoreTransform(this, (struct tagWND *)v15, (const struct tagINPUT_TRANSFORM *)v14, v11);
        }
      }
    }
  }
  v7 = *((_QWORD *)this + 42);
  if ( !v7 )
  {
    EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v14, *((struct _EX_PUSH_LOCK **)this + 42));
  ClearStaleEntries((struct tagINPUTTRANSFORMLIST *)v7, (unsigned __int64)a2);
  if ( (*(_DWORD *)(v7 + 88) & 1) == 0 )
    goto LABEL_15;
  v12 = Win32AllocPoolZInit(88LL, 2020176725LL);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 16) = a2;
    *(_OWORD *)(v12 + 24) = *(_OWORD *)(v7 + 24);
    *(_OWORD *)(v12 + 40) = *(_OWORD *)(v7 + 40);
    *(_OWORD *)(v12 + 56) = *(_OWORD *)(v7 + 56);
    *(_OWORD *)(v12 + 72) = *(_OWORD *)(v7 + 72);
    v13 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)v12 = v13;
    *(_QWORD *)(v12 + 8) = v7 + 8;
    if ( *(_QWORD *)(v13 + 8) != v7 + 8 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(v7 + 8) = v12;
    *(_DWORD *)(v7 + 88) &= ~1u;
LABEL_15:
    EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 1LL);
    v6 = 1;
    goto LABEL_16;
  }
  EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
LABEL_16:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v14);
  return v6;
}
