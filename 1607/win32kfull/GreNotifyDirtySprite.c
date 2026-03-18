/*
 * XREFs of GreNotifyDirtySprite @ 0x1C00D82EC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00D84E4 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

struct DwmState *__fastcall GreNotifyDirtySprite(HWND a1)
{
  struct DwmState *result; // rax
  UINT_PTR v2; // rdi
  __int64 v4; // rbx
  struct SFMLOGICALSURFACE *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = g_pDwmState;
  v2 = 0LL;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)(v7 + 120));
      v5 = *(struct SFMLOGICALSURFACE **)(v4 + 128);
      v6 = *((_QWORD *)v5 + 24);
      if ( v6 )
        v2 = *(_QWORD *)(v6 + 8);
      bSpDwmNotifyDirty(*(HSPRITE *)v4, v5, 1u, v2);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
      DEC_SHARE_REF_CNT(v4);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
