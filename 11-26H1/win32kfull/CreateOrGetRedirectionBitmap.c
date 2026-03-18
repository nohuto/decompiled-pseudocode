/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x14014D538
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     IsWindowContentProtected @ 0x14001475C (IsWindowContentProtected.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     GreSetRedirection @ 0x140018AE4 (GreSetRedirection.c)
 *     GreGetDxSharedSurface @ 0x14001D3F4 (GreGetDxSharedSurface.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetSpriteAttributes @ 0x140041B20 (GreGetSpriteAttributes.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     ?GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z @ 0x14014BAE4 (-GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z.c)
 *     GreSetBitmapContentOwner @ 0x14014BC6C (GreSetBitmapContentOwner.c)
 *     DesktopFromDesktopWindow @ 0x140224DB8 (DesktopFromDesktopWindow.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(struct tagWND *a1, int a2, int a3, HBITMAP *a4)
{
  __int64 v4; // r13
  __int64 v6; // rcx
  int v8; // edi
  int v10; // eax
  unsigned int v11; // r14d
  int v12; // r15d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  Gre::Base *v16; // rbx
  __int64 UserSessionState; // rax
  __int64 v18; // r8
  _DWORD *v19; // rdx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  HBITMAP v26; // rbx
  __int64 v27; // r15
  int v28; // r12d
  struct tagWND *TopLevelWindow; // r14
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 **v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // [rsp+40h] [rbp-20h] BYREF
  struct _BLENDFUNCTION v42; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-14h] BYREF
  struct _LUID v44; // [rsp+50h] [rbp-10h] BYREF
  __int64 v45; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v46; // [rsp+A0h] [rbp+40h] BYREF
  HBITMAP *v47; // [rsp+B8h] [rbp+58h]

  v47 = a4;
  v4 = 0LL;
  v6 = *((_QWORD *)a1 + 5);
  v44 = 0LL;
  v8 = 0;
  LODWORD(v41) = 0;
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v10 = *((_DWORD *)a1 + 95);
  v11 = 0x4000000;
  if ( (v10 & 0x20000) == 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    *((_DWORD *)a1 + 95) = v10 | 0x20000;
  }
  v11 = 201326592;
LABEL_5:
  v12 = 1;
  if ( (*(_BYTE *)(v6 + 26) & 8) == 0
    || (LOBYTE(v13) = IsDesktopWindow((__int64)a1), v13)
    || (v16 = *(Gre::Base **)a1,
        v42 = 0,
        v46 = 0,
        UserSessionState = W32GetUserSessionState(v15, v14),
        (unsigned int)GreGetSpriteAttributes(
                        *(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                        v16,
                        v18,
                        &v43,
                        &v42,
                        &v46,
                        1))
    && (v46 & 1) != 0 )
  {
    v11 |= 0x1000000u;
  }
  v19 = (_DWORD *)*((_QWORD *)a1 + 5);
  v20 = 1;
  if ( v19[24] - v19[22] > 1 )
    v20 = v19[24] - v19[22];
  v21 = (unsigned int)(v19[25] - v19[23]);
  if ( (int)v21 > 1 )
    v12 = v19[25] - v19[23];
  if ( a2 || (LOBYTE(v37) = IsDesktopWindow((__int64)a1), !v37) )
  {
    LOWORD(v46) = 96;
    if ( PtiCurrent(v21) )
    {
      if ( *((_QWORD *)PtiCurrent(v23) + 61) )
      {
        v23 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v23) + 61) + 8LL);
        if ( (*(_DWORD *)(v23 + 64) & 1) != 0 )
        {
          v23 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v23 + 288) & 0x4000000F) == 0x40000000 )
          {
            v23 = *(unsigned __int16 *)(v23 + 284);
            if ( (_WORD)v23 != 96 )
              LOWORD(v46) = GreGetScaledLogPixels(v23);
          }
        }
      }
    }
    if ( (v11 & 0x1000000) == 0 )
    {
      v24 = (*((_DWORD *)a1 + 95) & 0x20000) == 0;
      v42 = 0;
      if ( v24 || (int)GreGetDxSharedSurface(*(Gre::Base **)a1, &v45, &v44, &v43, &v42, &v41) < 0 )
        GetDisplayAdapterLuidForMonitor(a1, &v44);
    }
    v25 = W32GetUserSessionState(v23, v22);
    v26 = GreCreateCompatibleBitmapEx(
            *(Gre::Base **)(*(_QWORD *)(v25 + 56968) + 56LL),
            v20,
            v12,
            v11,
            &v44,
            (unsigned __int16 *)&v46);
    LODWORD(v41) = 1;
  }
  else
  {
    v26 = *(HBITMAP *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 40LL) + 88LL);
  }
  if ( !v26 )
  {
    v8 = -2143354872;
    goto LABEL_36;
  }
  v27 = *((_QWORD *)a1 + 2);
  v28 = 0;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( (unsigned int)IsWindowContentProtected((__int64)a1, v30) )
    goto LABEL_39;
  if ( TopLevelWindow && a1 != TopLevelWindow && (unsigned int)IsWindowContentProtected((__int64)TopLevelWindow, v31) )
  {
    v31 = *((_QWORD *)TopLevelWindow + 2);
    if ( *(_QWORD *)(v31 + 456) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) )
    {
      GreDeleteObject(v26);
      v26 = 0LL;
      v8 = -1073741790;
      goto LABEL_36;
    }
LABEL_39:
    v28 = *(_DWORD *)(*(_QWORD *)(v27 + 456) + 56LL);
  }
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29D )
  {
    v38 = DesktopFromDesktopWindow(a1);
    if ( v38 )
    {
      v39 = *(__int64 ***)(v38 + 8);
      v33 = *v39;
      v4 = **v39;
    }
  }
  else
  {
    v33 = *(__int64 **)(*(_QWORD *)(v27 + 488) + 8LL);
    v4 = *(_QWORD *)*v33;
  }
  GreLockVisRgn(v33, v31, v32);
  if ( !(_DWORD)v41 || (LOBYTE(v34) = 5, v8 = GreReferenceObjectIgnoreOwner(v26, v34), v8 >= 0) )
  {
    if ( (unsigned int)GreMarkUndeletableBitmap(v26) )
    {
      if ( !(unsigned int)GreSetRedirection((HSURF)v26, 1)
        || !(unsigned int)GreSetBitmapContentOwner((HSURF)v26, v4, v28) )
      {
        GreMarkDeletableBitmap(v26);
        v8 = -2143354871;
      }
      if ( v8 >= 0 )
        goto LABEL_35;
    }
    else
    {
      v8 = -2143354871;
    }
    LOBYTE(v36) = 5;
    GreDereferenceObject(v26, v36, 0LL);
    GreUnlockVisRgn(v40);
    goto LABEL_47;
  }
LABEL_35:
  GreUnlockVisRgn(v35);
  if ( v8 < 0 )
  {
LABEL_47:
    GreDeleteObject(v26);
    v26 = 0LL;
  }
LABEL_36:
  *v47 = v26;
  return (unsigned int)v8;
}
