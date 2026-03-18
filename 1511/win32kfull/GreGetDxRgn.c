/*
 * XREFs of GreGetDxRgn @ 0x1C0260F50
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0007AC0 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9F0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00368D0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C003BE24 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDxRgn(HWND a1, HDC a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  BOOL v10; // r14d
  __int64 v11; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-38h] BYREF
  struct OBJECT *v18; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-28h]
  _QWORD v20[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-10h] BYREF

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
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v17, (struct _EX_PUSH_LOCK *)(v15 + 120));
    if ( a3 < 0x20 && ((*(_DWORD *)(v9 + 96) >> a3) & 1) == 0 )
    {
      *a4 = 0LL;
      v4 = 1;
LABEL_28:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
      DEC_SHARE_REF_CNT(v9);
      goto LABEL_29;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
    if ( !v18 )
    {
LABEL_26:
      if ( v19 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
      goto LABEL_28;
    }
    v10 = 0;
    v16 = *(_QWORD *)(v9 + 88);
    if ( v16 )
    {
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v16) || !a2 )
        goto LABEL_24;
      MDCOBJA::MDCOBJA((MDCOBJA *)v21, a2);
      if ( v21[0] )
      {
        v15 = *(_QWORD *)(v21[0] + 1512LL);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        if ( v15
          && v20[0]
          && RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v18, BYTE1(gafjRgnOp)) )
        {
          v10 = RGNOBJ::bSwap((RGNOBJ *)v20, (struct RGNOBJ *)&v18) != 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
      }
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v21);
    }
    else
    {
      v10 = 1;
    }
    if ( v10 )
    {
      v11 = RGNOBJ::hrgnAssociate(&v18);
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
    if ( v18 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    goto LABEL_26;
  }
  return v4;
}
