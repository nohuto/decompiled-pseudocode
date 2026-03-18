/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1400A6500
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1400A5A40 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ebx
  Gre::Base *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // edx
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, __int64); // rax
  _OWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v22, v8);
  memset(v20, 0, sizeof(v20));
  PushThreadGuardedObject(
    v20,
    v20,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v10 = Gre::Base::Globals(v9);
  LOBYTE(v11) = 5;
  v12 = 0;
  v21 = HmgShareLock(v10, a1, v11, 0LL);
  if ( v21 && ((unsigned int)a1 & 0x800000) == 0 && (unsigned int)GreGetObjectOwner(a1, 5LL) )
  {
    v13 = (Gre::Base *)v21;
    if ( !v21 )
      goto LABEL_12;
    v14 = v21 + 24;
    v15 = *(_QWORD *)(v21 + 48);
    v16 = *(_DWORD *)(v21 + 116) & 8;
    if ( v16 || *(_QWORD *)(v21 + 224) )
    {
      v12 = 1;
      *(_WORD *)(v21 + 102) |= 0x200u;
      if ( v16 )
      {
        v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v15 + 3480);
        v12 = 0;
        if ( v19 )
          v12 = v19(v14 & -(__int64)(v13 != 0LL), v6, a4, a3);
      }
    }
  }
  if ( v21 )
  {
    v17 = Gre::Base::Globals(v13);
    DEC_SHARE_REF_CNT(v17, v21);
  }
LABEL_12:
  PopThreadGuardedObject(v20);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v22);
  return v12;
}
