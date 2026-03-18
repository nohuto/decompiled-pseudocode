/*
 * XREFs of DestroyCacheDC @ 0x1C006BD80
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0042170 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C006A5AC (DelayedDestroyCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C006BF80 (DestroyMonitorDCs.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031AC8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     GreDeleteDC @ 0x1C006BEA0 (GreDeleteDC.c)
 *     GreMarkDeletableRgn @ 0x1C0071C30 (GreMarkDeletableRgn.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v4; // ebp
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+28h] [rbp-10h]
  int v22; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
    v4 = 1;
    v6 = (__int64 *)(gpDispInfo + 64);
    v15 = *(__int64 **)(gpDispInfo + 64);
    if ( !v15 )
      goto LABEL_28;
    do
    {
      if ( v15[1] == a2 )
        break;
      v6 = v15;
      v15 = (__int64 *)*v15;
    }
    while ( v15 );
    if ( !v15 )
    {
LABEL_28:
      GreUnlockVisRgn(*(_QWORD *)gpDispInfo, a2, v14);
      return 0LL;
    }
  }
  v7 = *v6;
  *(_DWORD *)(v7 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v7 + 64) & 0x40000) == 0 )
  {
    if ( *(_QWORD *)(v7 + 40) > 2uLL )
      GreMarkDeletableRgn();
    v8 = *(_QWORD *)(v7 + 40);
    if ( v8 > 2 )
      GreDeleteObject(v8, a2);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v9 = *(_QWORD *)(v7 + 48);
  if ( v9 )
  {
    GreDeleteObject(v9, a2);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v10 = *(_QWORD *)(v7 + 56);
  if ( v10 )
  {
    GreDeleteObject(v10, a2);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 2147483650LL, 1LL, 1) )
    goto LABEL_30;
  if ( (*(_DWORD *)(v7 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
      GreSelectRedirectionBitmap_0();
    *(_DWORD *)(v7 + 64) &= ~0x4000u;
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  if ( !(unsigned int)GreDeleteDC(*(_QWORD *)(v7 + 8)) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 2147483666LL, 1LL, 1);
LABEL_30:
    v16 = *(_QWORD *)(v7 + 8);
    v21 = 0;
    v22 = 0;
    v17 = HmgShareLock(v16, 1);
    v20 = v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v20);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(v7 + 64) & 0x1002) == 2 )
    --gnDCECount;
  *v6 = *(_QWORD *)v7;
  Win32FreePool();
  v3 = 1;
LABEL_21:
  if ( v4 )
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v11, v12);
  return v3;
}
