/*
 * XREFs of GreHintDxUpdate @ 0x1C0262D08
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C0007C40 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0010568 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C008A510 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025E1A4 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D16D4 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
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
  __int64 v15; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v18; // [rsp+50h] [rbp-21h] BYREF
  int v19; // [rsp+58h] [rbp-19h]
  _BYTE v20[8]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v22; // [rsp+70h] [rbp-1h] BYREF
  struct DC *v23[2]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+67h] BYREF

  v25 = a1;
  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v25);
    LODWORD(v25) = 0;
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v21, ghsemDwmState, 1);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a2, 0LL);
    v8 = v15;
    if ( v15 )
    {
      v9 = *(_QWORD *)(v15 + 128);
      v4 = 1;
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct _EX_PUSH_LOCK *)(v15 + 120));
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
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
          *(_QWORD *)(v8 + 88) = v18;
          *(_DWORD *)(v8 + 96) = -1;
          if ( v19 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
        }
        v15 = *(_QWORD *)(v8 + 88);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
        if ( v15 && v17[0] && v16[0] )
        {
          RGNOBJ::vSet((RGNOBJ *)v17, a4);
          if ( a3 )
          {
            DCOBJA::DCOBJA((DCOBJA *)v23, a3);
            if ( v23[0] )
            {
              AcquireDcVisRgnShared::AcquireDcVisRgnShared(
                (AcquireDcVisRgnShared *)&v18,
                (unsigned __int8 (__fastcall ***)(char *))v23[0]);
              v22 = *((_QWORD *)v23[0] + 192);
              if ( v22 )
              {
                if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v22, (struct RGNOBJ *)v17, BYTE1(gafjRgnOp)) )
                  RGNOBJ::bSwap((RGNOBJ *)v16, (struct RGNOBJ *)v17);
                else
                  RGNOBJ::vSet((RGNOBJ *)v16);
              }
              AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v18);
            }
            XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v23);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v24);
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)v17, BYTE2(gafjRgnOp))
            && !RGNOBJ::bEqual((RGNOBJ *)v16, (struct RGNOBJ *)&v15)
            && RGNOBJ::bSwap((RGNOBJ *)v16, (struct RGNOBJ *)&v15) )
          {
            *(_QWORD *)(v8 + 88) = v15;
            *(_DWORD *)(v8 + 96) = -1;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
      DEC_SHARE_REF_CNT(v8);
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v21);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v25);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
  return v4;
}
