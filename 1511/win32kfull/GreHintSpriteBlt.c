/*
 * XREFs of GreHintSpriteBlt @ 0x1C0145A60
 * Callers:
 *     UpdateSpriteArea @ 0x1C014577C (UpdateSpriteArea.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C003BE24 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

struct DwmState *__fastcall GreHintSpriteBlt(HWND a1, _DWORD *a2, _DWORD *a3, HRGN a4)
{
  struct DwmState *result; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-11h] BYREF
  __int64 v13; // [rsp+40h] [rbp-1h] BYREF
  struct _POINTL v14; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+68h] [rbp+27h] BYREF
  int v18; // [rsp+70h] [rbp+2Fh]
  _QWORD v19[4]; // [rsp+78h] [rbp+37h] BYREF

  result = g_pDwmState;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v11, a1, 0LL);
    v9 = v11;
    if ( v11 )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v16, (struct _EX_PUSH_LOCK *)(v11 + 120));
      if ( *(_QWORD *)(v9 + 88) && a2 )
      {
        v13 = *(_QWORD *)(v9 + 88);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a4, 0);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
        if ( v13 )
        {
          if ( v19[0] )
          {
            if ( v12[0] )
            {
              if ( v15[0] )
              {
                v14.x = *a3 - *a2;
                v14.y = a3[1] - a2[1];
                if ( RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v13) )
                {
                  if ( RGNOBJ::bOffset((RGNOBJ *)v15, &v14)
                    && RGNOBJ::bMerge((RGNOBJ *)v12, (struct RGNOBJ *)v15, (struct RGNOBJ *)v19, BYTE1(gafjRgnOp))
                    && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v12) != 1 )
                  {
                    if ( !*(_QWORD *)(v9 + 104) )
                    {
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
                      v10 = v18 == 1;
                      *(_QWORD *)(v9 + 104) = v17;
                      if ( v10 )
                        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
                    }
                    v11 = *(_QWORD *)(v9 + 104);
                    if ( v11 )
                    {
                      if ( RGNOBJ::bSwap((RGNOBJ *)v12, (struct RGNOBJ *)&v11) )
                        *(_QWORD *)(v9 + 104) = v11;
                    }
                  }
                }
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
      DEC_SHARE_REF_CNT(v9);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
