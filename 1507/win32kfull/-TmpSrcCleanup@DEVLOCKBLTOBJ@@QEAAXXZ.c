/*
 * XREFs of ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025E2C0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C025E380 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcCleanup(HSURF *this)
{
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  HSURF v4; // rcx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+60h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 368) = 0LL;
  if ( this[13] && this[12] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    SURFREF::SURFREF((SURFREF *)v5, this[12]);
    hbmSelectBitmap(**(_QWORD **)this[13], this[12], 1LL);
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
  }
  v4 = this[5];
  if ( v4 )
    DEC_SHARE_REF_CNT(v4);
  bDeleteSurface(*((_QWORD *)this[5] + 4));
  this[5] = 0LL;
  this[13] = 0LL;
  this[12] = 0LL;
}
