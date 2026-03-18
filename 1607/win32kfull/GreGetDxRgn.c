/*
 * XREFs of GreGetDxRgn @ 0x1C025E870
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0215C30 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C004A118 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00D8488 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025B198 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D5A64 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDxRgn(HWND a1, HDC a2, unsigned int a3, struct HOBJ__ **a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  int v10; // r14d
  struct HOBJ__ *v11; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  _BYTE v14[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v15; // [rsp+30h] [rbp-41h] BYREF
  struct OBJECT *v16; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+40h] [rbp-31h]
  _QWORD v18[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v19; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-9h] BYREF
  struct DC *v22[2]; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v23[40]; // [rsp+80h] [rbp+Fh] BYREF

  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a1, 0LL);
    v9 = v15;
    if ( !v15 )
    {
LABEL_29:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
      return v4;
    }
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v21, (struct _EX_PUSH_LOCK *)(v15 + 120));
    if ( a3 < 0x20 && ((*(_DWORD *)(v9 + 96) >> a3) & 1) == 0 )
    {
      *a4 = 0LL;
      v4 = 1;
LABEL_28:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v21);
      DEC_SHARE_REF_CNT(v9);
      goto LABEL_29;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
    if ( !v16 )
    {
LABEL_26:
      if ( v17 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
      goto LABEL_28;
    }
    v10 = 0;
    v19 = *(_QWORD *)(v9 + 88);
    if ( v19 )
    {
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v19) || !a2 )
        goto LABEL_24;
      DCOBJA::DCOBJA((DCOBJA *)v22, a2);
      if ( v22[0] )
      {
        AcquireDcVisRgnShared::AcquireDcVisRgnShared(
          (AcquireDcVisRgnShared *)v20,
          (unsigned __int8 (__fastcall ***)(char *))v22[0]);
        v15 = *((_QWORD *)v22[0] + 192);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
        if ( v15
          && v18[0]
          && RGNOBJ::bMerge((RGNOBJ *)v18, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v16, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v18, (struct RGNOBJ *)&v16);
          v10 = 1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v20);
      }
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v22);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v23);
    }
    else
    {
      v10 = 1;
    }
    if ( v10 )
    {
      v11 = RGNOBJ::hrgnAssociate(&v16);
      *a4 = v11;
      if ( v11 )
      {
        if ( a3 < 0x20 || (a3 -= 32, a3 < 0x20) )
          *(_DWORD *)(v9 + 96) &= ~(1 << a3);
        v4 = 1;
        goto LABEL_26;
      }
    }
LABEL_24:
    if ( v16 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    goto LABEL_26;
  }
  return v4;
}
