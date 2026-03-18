/*
 * XREFs of GreGetDxSharedSurface @ 0x14001D3F4
 * Callers:
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x14001B3E0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14001E5B0 (NtUserHwndQueryRedirectionInfo.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     ?GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z @ 0x140245790 (-GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$06@@YAXXZ @ 0x14001D800 (--$GrepReleaseLockValidate@$06@@YAXXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x14001D8AC (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14001D930 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(
        Gre::Base *a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int64 *a6)
{
  unsigned int v10; // esi
  Gre::Base *v11; // rcx
  HSEMAPHORE v12; // r12
  Gre::Base *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rsi
  struct Gre::Base::SESSION_GLOBALS *v17; // rbp
  struct W32_PUSH_LOCK *v18; // rdi
  _QWORD *v19; // rax
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rsi
  struct W32_PUSH_LOCK *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // r14
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // r8
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v42; // rbp
  _QWORD Buffer[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = -1071775733;
  if ( *((_QWORD *)Gre::Base::Globals(a1) + 28) )
  {
    v12 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v11) + 520LL);
    GreAcquireSemaphoreSharedInternal(v12);
    GrepAcquireLockValidate<7>();
    if ( !*((_QWORD *)Gre::Base::Globals(v13) + 28) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
      goto LABEL_36;
    v15 = 0LL;
    if ( !a1 )
      goto LABEL_13;
    Buffer[1] = 0LL;
    v16 = 0LL;
    Buffer[0] = a1;
    v17 = Gre::Base::Globals((Gre::Base *)v14);
    v18 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v17 + 28) + 72LL);
    if ( *((_QWORD *)v17 + 28) != -72LL )
      GreAcquirePushLockExclusive(v18);
    v19 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v17 + 28), Buffer);
    if ( v19 )
      v16 = v19[1];
    if ( v18 )
      GreReleasePushLockExclusive(v18);
    if ( !v16
      || (v20 = Gre::Base::Globals((Gre::Base *)v14),
          LOBYTE(v21) = 15,
          v22 = HmgShareLock(v20, v16, v21, 0LL),
          (v15 = v22) == 0) )
    {
LABEL_13:
      v10 = -1073741811;
      if ( !v15 )
      {
LABEL_36:
        EtwTraceGreLockReleaseSemaphore(L"DwmState", v12);
        GrepReleaseLockValidate<7>(v40, v39);
        GreReleaseSemaphoreSharedInternal(v12);
        return v10;
      }
LABEL_35:
      v38 = Gre::Base::Globals((Gre::Base *)v14);
      DEC_SHARE_REF_CNT(v38, v15);
      goto LABEL_36;
    }
    v25 = *(_QWORD *)(v22 + 144);
    v26 = (struct W32_PUSH_LOCK *)(v22 + 88);
    if ( v22 != -88 )
      GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v22 + 88));
    v14 = *(_QWORD *)(W32GetSessionState(v14, v23, v24) + 96);
    if ( !*(_DWORD *)(v14 + 92)
      || (v28 = *(_QWORD *)(v25 + 184)) == 0
      || (*(_DWORD *)(v28 + 92) & 1) == 0
      || (unsigned int)UserIsRemoteConnection(v14, v27)
      && !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v30, v29) )
    {
      v10 = -1073741822;
      *a2 = 0LL;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0LL;
      *a3 = 0LL;
      goto LABEL_33;
    }
    v31 = *(_QWORD *)(v25 + 192);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v25 + 184);
      if ( v32 && (*(_DWORD *)(v32 + 92) & 1) != 0 )
      {
        v33 = *(_QWORD *)(v32 + 552);
        v34 = (__int64 *)(v25 + 200);
      }
      else
      {
        v34 = (__int64 *)(v25 + 200);
        v33 = *(_QWORD *)(v25 + 200);
      }
      v14 = (unsigned int)*a5;
      if ( (v14 & 4) != 0 && (*(_DWORD *)(v25 + 244) & 0x100) == 0 && v33 != *a3 )
        goto LABEL_46;
      *a2 = v31;
      *a4 = *(_DWORD *)(v25 + 208);
      *a5 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v25);
      v35 = *(_QWORD *)(v25 + 184);
      if ( v35 && (*(_DWORD *)(v35 + 92) & 1) != 0 )
        v34 = (__int64 *)(v35 + 552);
      v36 = *v34;
    }
    else
    {
      v42 = *(_QWORD *)(v25 + 184);
      v14 = (unsigned int)*a5;
      if ( (v14 & 4) != 0 && (*(_DWORD *)(v42 + 92) & 0x400) == 0 && *(_QWORD *)(v42 + 552) != *a3 )
      {
LABEL_46:
        v10 = -1071775484;
LABEL_33:
        if ( v26 )
          GreReleasePushLockShared(v26);
        goto LABEL_35;
      }
      *a2 = *(_QWORD *)(v42 + 544);
      *a4 = 87;
      *a5 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v25);
      v36 = *(_QWORD *)(v42 + 552);
    }
    *a3 = v36;
    v37 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v25);
    v14 = *(unsigned int *)(*(_QWORD *)(v25 + 184) + 68LL) | 0x8000000000000000uLL;
    if ( (v37 & 2) == 0 )
      v14 = *(unsigned int *)(*(_QWORD *)(v25 + 184) + 68LL);
    v10 = 0;
    *a6 = v14;
    goto LABEL_33;
  }
  return v10;
}
