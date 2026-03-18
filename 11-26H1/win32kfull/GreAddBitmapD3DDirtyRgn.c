/*
 * XREFs of GreAddBitmapD3DDirtyRgn @ 0x14001C31C
 * Callers:
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x14001B600 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x14001C68C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??$GrepReleaseLockValidate@$06@@YAXXZ @ 0x14001D800 (--$GrepReleaseLockValidate@$06@@YAXXZ.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1400A16AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400A16FC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall GreAddBitmapD3DDirtyRgn(__int64 a1, unsigned int a2, struct tagRECT *a3)
{
  unsigned int v3; // r13d
  int v6; // r15d
  Gre::Base *v7; // rcx
  HSEMAPHORE v8; // r14
  Gre::Base *v9; // rcx
  __int64 v10; // rdi
  struct Gre::Base::SESSION_GLOBALS *v11; // rsi
  struct W32_PUSH_LOCK *v12; // rbx
  _QWORD *v13; // rax
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  struct DWMSPRITE *v18; // rdi
  struct W32_PUSH_LOCK *v19; // rsi
  _QWORD *v20; // r14
  Gre::Base *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  unsigned int v24; // r15d
  unsigned int v25; // ebx
  void *v26; // r14
  struct Gre::Base::SESSION_GLOBALS *v27; // rax
  __int64 v28; // r15
  HSEMAPHORE v29; // [rsp+30h] [rbp-39h]
  _QWORD Buffer[3]; // [rsp+38h] [rbp-31h] BYREF
  int v31; // [rsp+50h] [rbp-19h] BYREF
  __int16 v32; // [rsp+54h] [rbp-15h]
  int v33; // [rsp+78h] [rbp+Fh]
  unsigned int v34; // [rsp+7Ch] [rbp+13h]
  __int64 v35; // [rsp+80h] [rbp+17h]
  __int64 v36; // [rsp+88h] [rbp+1Fh]
  __int64 v38; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  LODWORD(v38) = 0;
  v6 = 0;
  if ( (unsigned int)IsDwmActive() )
  {
    v8 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v7) + 520LL);
    v29 = v8;
    GreAcquireSemaphoreSharedInternal(v8);
    GrepAcquireLockValidate<7>();
    if ( (unsigned int)IsDwmActive() )
    {
      Buffer[1] = 0LL;
      v10 = 0LL;
      Buffer[0] = a1;
      v11 = Gre::Base::Globals(v9);
      v12 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v11 + 28) + 72LL);
      if ( *((_QWORD *)v11 + 28) != -72LL )
        GreAcquirePushLockExclusive(v12);
      v13 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v11 + 28), Buffer);
      if ( v13 )
        v10 = v13[1];
      if ( v12 )
        GreReleasePushLockExclusive(v12);
      v15 = Gre::Base::Globals(v14);
      if ( v10 )
      {
        LOBYTE(v16) = 15;
        v17 = HmgShareLock(v15, v10, v16, 0LL);
        v18 = (struct DWMSPRITE *)v17;
        if ( v17 )
        {
          v19 = (struct W32_PUSH_LOCK *)(v17 + 88);
          if ( v17 != -88 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v17 + 88));
          v20 = (_QWORD *)*((_QWORD *)v18 + 18);
          if ( v20 != (_QWORD *)-256LL )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 32));
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v20) )
          {
            if ( a2 )
            {
              v28 = a2;
              do
              {
                vSpUpdateDirtyRgn(v18, (struct SFMLOGICALSURFACE *)v20, 0LL, a3++, (unsigned int *)&v38, 0);
                --v28;
              }
              while ( v28 );
              v3 = v38;
            }
            v6 = 1;
          }
          if ( v20 != (_QWORD *)-256LL )
            GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 32));
          if ( v6 )
          {
            v22 = v20[23];
            if ( v22 )
              v23 = *(_QWORD *)(v22 + 8);
            else
              v23 = 0LL;
            v38 = *(_QWORD *)v18;
            v24 = v3 & 0xFFFFFFFE;
            if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v20) )
              v24 = v3;
            v25 = v24;
            if ( (v24 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v20 + 63)) )
            {
              GreAddLogicalSurfaceToDirtyQueue(*v20, 1LL, v23);
              v25 = v24 & 0xFFFFFFFE;
            }
            if ( v25 )
            {
              v26 = (void *)UserReferenceDwmApiPort();
              IncrementDWMWindowUniqueness();
              if ( v26 )
              {
                memset_0(&v31, 0, 0x40uLL);
                v31 = 4194328;
                v32 = 0x8000;
                v33 = 1073741828;
                v35 = v38;
                v34 = v25;
                v36 = v23;
                EtwUpdateEvent(v38);
                LpcRequestPort(v26, &v31);
                ObfDereferenceObject(v26);
              }
            }
          }
          if ( v19 )
            GreReleasePushLockExclusive(v19);
          v27 = Gre::Base::Globals(v21);
          DEC_SHARE_REF_CNT(v27, v18);
          v8 = v29;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v8);
    GrepReleaseLockValidate<7>();
    GreReleaseSemaphoreSharedInternal(v8);
  }
}
