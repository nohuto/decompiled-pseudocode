/*
 * XREFs of GreSetClientRgn @ 0x14031A314
 * Callers:
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140083168 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140288CE4 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14031881C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x140318F6C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140319098 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x14031963C (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140319904 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  REGION **v8; // r14
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  LONG v15; // edx
  Gre::Base *v16; // rcx
  BOOL v17; // edi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  __int128 v19; // xmm6
  struct REGION *v20; // rdx
  struct REGION *v21; // rdx
  __int64 v22; // rax
  HSEMAPHORE v23; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v25; // rax
  HSEMAPHORE v26; // rbx
  const wchar_t *v27; // rax
  struct _GRETHREAD *v28; // rax
  struct _POINTL v29; // [rsp+20h] [rbp-49h] BYREF
  __int64 v30; // [rsp+28h] [rbp-41h] BYREF
  __int128 v31; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v32[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+67h] BYREF
  HSEMAPHORE v34; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(v6, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v32, a2, 0, 0);
      if ( v32[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v30 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v31 = __PAIR64__(v10, v9);
        *((_QWORD *)&v31 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2544) )
            {
              v15 = -*(_DWORD *)(v14 + 2580);
              v29.x = -*(_DWORD *)(v14 + 2576);
              v29.y = v15;
              if ( v29.x || v15 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v32, &v29);
                ERECTL::bOffsetAdd((ERECTL *)&v31, &v29, 0);
                v12 = HIDWORD(v31);
                v11 = DWORD2(v31);
                v10 = DWORD1(v31);
                v9 = v31;
              }
            }
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
          if ( v33 )
          {
            if ( v34 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v34, (const struct _RECTL *const)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)&v33, (struct RGNOBJ *)v32);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v32, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v34, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v33, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v34, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v32, (struct RGNOBJ *)&v33);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v30, (struct RGNOBJ *)v32)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v32);
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
          v17 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v35 )
            v17 = RGNOBJ::bCopy((RGNOBJ *)&v35, (struct RGNOBJ *)v32) != 0;
          v18 = Gre::Base::Globals(v16);
          SEMOBJ<33>::SEMOBJ<33>((HSEMAPHORE *)&v29, v18);
          SEMOBJ<34>::SEMOBJ<34>(&v34, (__int64)a1);
          if ( v17 )
          {
            v33 = *((_QWORD *)a1 + 24);
            if ( v33 )
            {
              RGNOBJ::vSwap((RGNOBJ *)&v35, (struct RGNOBJ *)&v33);
              *((_QWORD *)a1 + 24) = v33;
            }
          }
          v19 = v31;
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33);
            if ( v33 && RGNOBJ::iCombine((RGNOBJ *)&v33, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v30, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)&v33);
              REGION::vStamp(*v8);
              v20 = *v8;
              v31 = v19;
              EWNDOBJ::vSetClip((__int64)a1, v20, &v31);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33);
          }
          RGNOBJAPI::bSwap(
            (RGNOBJAPI *)v32,
            (struct RGNOBJ *)((unsigned __int64)v8 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
          REGION::vStamp(*v8);
          v21 = *v8;
          v31 = v19;
          EWNDOBJ::vSetClip((__int64)a1, v21, &v31);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v32);
          if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
            TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a1 + 21), a1, 2u);
          v22 = *((_QWORD *)a1 + 21);
          *((_DWORD *)a1 + 46) |= 0x80000000;
          v23 = v34;
          *(_DWORD *)(v22 + 48) |= 0x80000000;
          if ( v23 )
          {
            GlobalLockName = GrepGetGlobalLockName(34);
            EtwTraceGreLockReleaseSemaphore(GlobalLockName, v23);
            v25 = GreGetCurrentThreadCrossSessionCheck();
            if ( v25 )
            {
              v7 = (*(_QWORD *)v25 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
              *(_QWORD *)v25 &= ~0x400000000uLL;
              if ( v7 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v23);
          }
          v26 = (HSEMAPHORE)v29;
          if ( v29 )
          {
            v27 = GrepGetGlobalLockName(33);
            EtwTraceGreLockReleaseSemaphore(v27, v26);
            v28 = GreGetCurrentThreadCrossSessionCheck();
            if ( v28 )
            {
              v7 = (*(_QWORD *)v28 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
              *(_QWORD *)v28 &= ~0x200000000uLL;
              if ( v7 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v26);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
