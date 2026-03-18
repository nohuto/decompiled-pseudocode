/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x1C00D80F0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C0051FE8 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00D84E4 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C02694FC (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        struct REGION *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // esi
  struct _POINTL *v7; // r12
  HSPRITE *v10; // rbx
  __int64 v11; // rdi
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF
  struct REGION *v16; // [rsp+B8h] [rbp+58h] BYREF

  v16 = a4;
  v6 = 0;
  v7 = a5;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v16, a2);
    v10 = (HSPRITE *)v16;
    if ( v16 )
    {
      v11 = *((_QWORD *)v16 + 16);
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v13, (struct REGION *)((char *)v16 + 120));
      if ( *(_QWORD *)(v11 + 88) )
      {
        v16 = *(struct REGION **)(v11 + 88);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
        if ( v16 )
        {
          if ( v15[0] )
          {
            if ( v14[0] )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)&v16, v7) )
              {
                RGNOBJ::vSet((RGNOBJ *)v15, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)v14, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v15, BYTE1(gafjRgnOp)) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)v14, (struct RGNOBJ *)&v16);
                  SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v11, v16);
                  v6 = 1;
                  if ( (*(_DWORD *)(v11 + 256) & 8) != 0 )
                  {
                    bSpDwmNotifyDirty(*v10, (struct SFMLOGICALSURFACE *)v11, 2u, 0LL);
                    *(_DWORD *)(v11 + 256) |= 4u;
                  }
                }
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v13);
      DEC_SHARE_REF_CNT(v10);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  else
  {
    return (unsigned int)GdiAdjustSpriteDirtyAccum(a1, a2, a3, (struct _RECTL *)a4, a5, a6);
  }
  return v6;
}
