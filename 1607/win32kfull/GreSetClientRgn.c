/*
 * XREFs of GreSetClientRgn @ 0x1C027A74C
 * Callers:
 *     InvalidateGDIWindows @ 0x1C01DEB20 (InvalidateGDIWindows.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0158A28 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C0279A4C (-bValid@EWNDOBJ@@QEAAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0279E20 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C027A028 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  struct REGION **v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  LONG v15; // edx
  BOOL v16; // edi
  __int128 v17; // xmm6
  struct REGION *v18; // rdx
  signed __int32 v19; // ecx
  struct REGION *v20; // rdx
  signed __int32 v21; // ecx
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v29[8]; // [rsp+70h] [rbp-49h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v31; // [rsp+C0h] [rbp+7h] BYREF
  struct _POINTL v32; // [rsp+120h] [rbp+67h] BYREF
  __int64 v33; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(a2, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v29, a2, 0, 0);
      if ( v29[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (struct REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v34 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v23 = __PAIR64__(v10, v9);
        *((_QWORD *)&v23 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2576) )
            {
              v15 = -*(_DWORD *)(v14 + 2612);
              v32.x = -*(_DWORD *)(v14 + 2608);
              v32.y = v15;
              if ( v32.x || v15 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v29, &v32);
                v9 += v32.x;
                v11 += v32.x;
                v10 += v32.y;
                v12 += v32.y;
                *(_QWORD *)&v23 = __PAIR64__(v10, v9);
                *((_QWORD *)&v23 + 1) = __PAIR64__(v12, v11);
              }
            }
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
          if ( v24[0] )
          {
            if ( v25[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v25, (struct _RECTL *)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)v24, (struct RGNOBJ *)v29);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v29, (struct RGNOBJ *)v24, (struct RGNOBJ *)v25, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)v24, (struct RGNOBJ *)v29, (struct RGNOBJ *)v25, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v29, (struct RGNOBJ *)v24);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v34, (struct RGNOBJ *)v29)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v29);
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
          v16 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v26[0] )
            v16 = RGNOBJ::bCopy((RGNOBJ *)v26, (struct RGNOBJ *)v29) != 0;
          v28 = ghsemWndobj;
          GreAcquireSemaphore(ghsemWndobj);
          v27 = *((_QWORD *)a1 + 25);
          GreAcquireSemaphore(v27);
          if ( v16 )
          {
            v33 = *((_QWORD *)a1 + 24);
            if ( v33 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v26, (struct RGNOBJ *)&v33);
              *((_QWORD *)a1 + 24) = v33;
            }
          }
          v17 = v23;
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v23);
            if ( (_QWORD)v23 && RGNOBJ::iCombine((RGNOBJ *)&v23, (struct RGNOBJ *)v29, (struct RGNOBJ *)&v34, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)&v23);
              v18 = *v8;
              v19 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
              v30 = v17;
              *((_DWORD *)v18 + 7) = v19 + 1;
              EWNDOBJ::vSetClip((__int64)a1, *v8, &v30);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v23);
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v29, (struct EWNDOBJ *)((char *)a1 + 56));
          v20 = *v8;
          v21 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
          v31 = v17;
          *((_DWORD *)v20 + 7) = v21 + 1;
          EWNDOBJ::vSetClip((__int64)a1, *v8, &v31);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v29);
          if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
            (*(void (__fastcall **)(struct EWNDOBJ *))(*((_QWORD *)a1 + 21) + 40LL))(a1);
          v22 = *((_QWORD *)a1 + 21);
          *((_DWORD *)a1 + 46) |= 0x80000000;
          *(_DWORD *)(v22 + 48) |= 0x80000000;
          SEMOBJ::vUnlock((SEMOBJ *)&v27);
          SEMOBJ::vUnlock((SEMOBJ *)&v28);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
