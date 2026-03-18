/*
 * XREFs of GreHintDxUpdate @ 0x1C026152C
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C0009D40 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9F0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C003BE24 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreHintDxUpdate(__int64 a1, HWND a2, HDC a3, struct _RECTL *a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  DCVISRGNSHARELOCK *v12; // rcx
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  int v17; // [rsp+30h] [rbp-50h]
  _BYTE v18[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+30h] BYREF

  v23 = a1;
  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
    LODWORD(v23) = 0;
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v19, ghsemDwmState, 1);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a2, 0LL);
    v8 = v15;
    if ( v15 )
    {
      v9 = *(_QWORD *)(v15 + 128);
      v4 = 1;
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _EX_PUSH_LOCK *)(v15 + 120));
      v10 = *(_QWORD *)(v9 + 192);
      if ( v10 )
      {
        v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v11 + 264));
        *(_DWORD *)(v11 + 116) |= 0x40u;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v11 + 264));
      }
      if ( a4 )
      {
        if ( !*(_QWORD *)(v8 + 88) )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
          *(_QWORD *)(v8 + 88) = v16;
          *(_DWORD *)(v8 + 96) = -1;
          if ( v17 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
        }
        v15 = *(_QWORD *)(v8 + 88);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        if ( v15 && v21[0] && v20[0] )
        {
          RGNOBJ::vSet((RGNOBJ *)v21, a4);
          if ( a3 )
          {
            MDCOBJA::MDCOBJA((MDCOBJA *)v22, a3);
            if ( v22[0] )
            {
              v16 = *(_QWORD *)(v22[0] + 1512LL);
              if ( v16 )
              {
                if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v21, BYTE1(gafjRgnOp)) )
                  RGNOBJ::bSwap((RGNOBJ *)v20, (struct RGNOBJ *)v21);
                else
                  RGNOBJ::vSet((RGNOBJ *)v20);
              }
            }
            XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v22);
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v15, (struct RGNOBJ *)v21, BYTE2(gafjRgnOp))
            && !RGNOBJ::bEqual((RGNOBJ *)v20, (struct RGNOBJ *)&v15)
            && RGNOBJ::bSwap((RGNOBJ *)v20, (struct RGNOBJ *)&v15) )
          {
            *(_QWORD *)(v8 + 88) = v15;
            *(_DWORD *)(v8 + 96) = -1;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
      DEC_SHARE_REF_CNT(v8);
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v19);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v23);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
  return v4;
}
