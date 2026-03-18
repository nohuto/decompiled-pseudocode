/*
 * XREFs of GreHintSpriteBlt @ 0x1C000A188
 * Callers:
 *     UpdateSpriteArea @ 0x1C000A280 (UpdateSpriteArea.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0010568 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 */

struct DwmState *__fastcall GreHintSpriteBlt(HWND a1, _DWORD *a2, _DWORD *a3, HRGN a4)
{
  struct DwmState *result; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  struct _POINTL v14; // [rsp+48h] [rbp-19h] BYREF
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
        v13 = *(_QWORD *)(v9 + 88);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a4, 0, 0);
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
