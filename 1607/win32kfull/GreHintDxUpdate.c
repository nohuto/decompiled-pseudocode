/*
 * XREFs of GreHintDxUpdate @ 0x1C025EE58
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C02161B0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0055BC0 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00D8488 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025B198 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D5A64 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
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
  __int64 v20; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-1h] BYREF
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
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v22, ghsemDwmState, 1);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a2, 0LL);
    v8 = v15;
    if ( v15 )
    {
      v9 = *(_QWORD *)(v15 + 128);
      v4 = 1;
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v21, (struct _EX_PUSH_LOCK *)(v15 + 120));
      v10 = *(_QWORD *)(v9 + 192);
      if ( v10 )
      {
        v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v11 + 272));
        *(_DWORD *)(v11 + 116) |= 0x40u;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v11 + 272));
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
              v20 = *((_QWORD *)v23[0] + 192);
              if ( v20 )
              {
                if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v20, (struct RGNOBJ *)v17, BYTE1(gafjRgnOp)) )
                  RGNOBJ::vSwap((RGNOBJ *)v16, (struct RGNOBJ *)v17);
                else
                  RGNOBJ::vSet((RGNOBJ *)v16);
              }
              AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v18);
            }
            XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v23);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v24);
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)v17, BYTE2(gafjRgnOp))
            && !RGNOBJ::bEqual((RGNOBJ *)v16, (struct RGNOBJ *)&v15) )
          {
            RGNOBJ::vSwap((RGNOBJ *)v16, (struct RGNOBJ *)&v15);
            *(_QWORD *)(v8 + 88) = v15;
            *(_DWORD *)(v8 + 96) = -1;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v21);
      DEC_SHARE_REF_CNT(v8);
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v25);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
  return v4;
}
