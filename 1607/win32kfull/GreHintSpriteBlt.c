/*
 * XREFs of GreHintSpriteBlt @ 0x1C00D6900
 * Callers:
 *     UpdateSpriteArea @ 0x1C00D661C (UpdateSpriteArea.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00D8488 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

struct DwmState *__fastcall GreHintSpriteBlt(HWND a1, _DWORD *a2, _DWORD *a3, HRGN a4)
{
  struct DwmState *result; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // [rsp+28h] [rbp-39h] BYREF
  __int64 v12; // [rsp+30h] [rbp-31h] BYREF
  struct _POINTL v13; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  int v18; // [rsp+70h] [rbp+Fh]
  _QWORD v19[8]; // [rsp+78h] [rbp+17h] BYREF

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
        v12 = *(_QWORD *)(v9 + 88);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a4, 0, 0);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
        if ( v12 )
        {
          if ( v19[0] )
          {
            if ( v15[0] )
            {
              if ( v14[0] )
              {
                v13.x = *a3 - *a2;
                v13.y = a3[1] - a2[1];
                if ( RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12) )
                {
                  if ( RGNOBJ::bOffset((RGNOBJ *)v14, &v13)
                    && RGNOBJ::bMerge((RGNOBJ *)v15, (struct RGNOBJ *)v14, (struct RGNOBJ *)v19, BYTE1(gafjRgnOp))
                    && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v15) != 1 )
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
                      RGNOBJ::vSwap((RGNOBJ *)v15, (struct RGNOBJ *)&v11);
                      *(_QWORD *)(v9 + 104) = v11;
                    }
                  }
                }
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
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
