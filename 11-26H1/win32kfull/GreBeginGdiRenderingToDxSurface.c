/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1400A6308
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1400A62F0 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bReset@DC@@QEAAHXZ @ 0x1400A8378 (-bReset@DC@@QEAAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(Gre::Base *a1, unsigned int a2, __int64 a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // esi
  Gre::Base *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbx
  HDC v15; // rdx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64); // rax
  unsigned int v19; // eax
  _OWORD v20[2]; // [rsp+28h] [rbp-69h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h]
  DC *v22[14]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+108h] [rbp+77h] BYREF

  if ( !a3 || (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) >= 0 )
  {
    v6 = Gre::Base::Globals(a1);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v23, v6);
    memset(v20, 0, sizeof(v20));
    PushThreadGuardedObject(
      v20,
      v20,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v8 = Gre::Base::Globals(v7);
    LOBYTE(v9) = 5;
    v10 = 0;
    v21 = HmgShareLock(v8, a1, v9, 0LL);
    if ( v21 && ((unsigned int)a1 & 0x800000) == 0 && (unsigned int)GreGetObjectOwner(a1, 5LL) )
    {
      v12 = v21;
      if ( !v21 )
      {
LABEL_14:
        PopThreadGuardedObject(v20);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v23);
        return v10;
      }
      v13 = v21 + 24;
      v14 = *(_QWORD *)(v21 + 48);
      if ( (*(_DWORD *)(v21 + 116) & 8) != 0 || *(_QWORD *)(v21 + 224) )
      {
        v15 = *(HDC *)(v21 + 160);
        *(_WORD *)(v21 + 102) &= ~0x200u;
        if ( v15 )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v22, v15);
          if ( v22[0] )
            v10 = DC::bReset(v22[0]);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v22);
          if ( v10 )
          {
            v11 = (Gre::Base *)*(unsigned int *)(v12 + 116);
            if ( ((unsigned __int8)v11 & 8) != 0 )
            {
              v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 3472);
              v10 = 0;
              if ( v18 )
              {
                v19 = v18(v13 & -(__int64)(v12 != 0), a2, a3);
                *(_DWORD *)(v12 + 116) |= 0x200u;
                v10 = v19;
              }
            }
          }
        }
      }
    }
    if ( v21 )
    {
      v16 = Gre::Base::Globals(v11);
      DEC_SHARE_REF_CNT(v16, v21);
    }
    goto LABEL_14;
  }
  return 0LL;
}
