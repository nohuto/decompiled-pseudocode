/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C109C (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     MagpRemoveTransformOutputMagFac @ 0x1C000DC28 (MagpRemoveTransformOutputMagFac.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01D08B4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0223FF4 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0224398 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
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
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned __int64 *v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v18[64]; // [rsp+30h] [rbp-68h] BYREF

  v17[0] = a2;
  v6 = 0;
  if ( (unsigned int)IsDwmInputThread(this, a2) || gptiCurrent == gptiManipulationThread )
  {
    v9 = *((_QWORD *)this + 42);
    if ( v9 )
    {
      v10 = *(CompositionInputObject **)(v9 + 96);
      if ( v10 )
      {
        if ( (int)CompositionInputObject::QueryTransform(v10, (struct tagINPUT_TRANSFORM *)v18) >= 0 )
        {
          MagpRemoveTransformOutputMagFac((__int64)v18, v11, v12);
          InputTransform::StoreTransform(this, (struct tagWND *)v18, (const struct tagINPUT_TRANSFORM *)v17, v13);
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
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v17, *((struct _EX_PUSH_LOCK **)this + 42));
  ClearStaleEntries((struct tagINPUTTRANSFORMLIST *)v7, (unsigned __int64)a2);
  if ( (*(_DWORD *)(v7 + 88) & 1) == 0 )
    goto LABEL_15;
  v14 = Win32AllocPoolZInit(88LL, 2020176725LL);
  if ( v14 )
  {
    *(_QWORD *)(v14 + 16) = a2;
    v15 = (__int64 *)(v7 + 8);
    *(_OWORD *)(v14 + 24) = *(_OWORD *)(v7 + 24);
    *(_OWORD *)(v14 + 40) = *(_OWORD *)(v7 + 40);
    *(_OWORD *)(v14 + 56) = *(_OWORD *)(v7 + 56);
    *(_OWORD *)(v14 + 72) = *(_OWORD *)(v7 + 72);
    v16 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v16 + 8) != v7 + 8 )
      __fastfail(3u);
    *(_QWORD *)v14 = v16;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)(v16 + 8) = v14;
    *v15 = v14;
    *(_DWORD *)(v7 + 88) &= ~1u;
LABEL_15:
    EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 1LL);
    v6 = 1;
    goto LABEL_16;
  }
  EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
LABEL_16:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
  return v6;
}
