/*
 * XREFs of DestroyCacheDC @ 0x1C005A3A0
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C000F4CC (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C0054CC0 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C005C710 (DestroyCacheDCEntries.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0028D68 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     GreDeleteDC @ 0x1C005A4C0 (GreDeleteDC.c)
 *     GreMarkDeletableRgn @ 0x1C0076CE0 (GreMarkDeletableRgn.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  int v4; // ebp
  __int64 *v6; // rdi
  __int64 v7; // rbx
  struct HOBJ__ *v8; // rcx
  struct HOBJ__ *v9; // rcx
  struct HOBJ__ *v10; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]
  int v19; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
    v4 = 1;
    v6 = (__int64 *)(gpDispInfo + 64);
    v12 = *(__int64 **)(gpDispInfo + 64);
    if ( !v12 )
      goto LABEL_28;
    do
    {
      if ( v12[1] == a2 )
        break;
      v6 = v12;
      v12 = (__int64 *)*v12;
    }
    while ( v12 );
    if ( !v12 )
    {
LABEL_28:
      GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
      return 0LL;
    }
  }
  v7 = *v6;
  *(_DWORD *)(v7 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v7 + 64) & 0x40000) == 0 )
  {
    if ( *(_QWORD *)(v7 + 40) > 2uLL )
      GreMarkDeletableRgn();
    v8 = *(struct HOBJ__ **)(v7 + 40);
    if ( (unsigned __int64)v8 > 2 )
      GreDeleteObject(v8);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v9 = *(struct HOBJ__ **)(v7 + 48);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v10 = *(struct HOBJ__ **)(v7 + 56);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000002, 1, 1) )
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
    GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000012, 1, 1);
LABEL_30:
    v13 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    v18 = 0;
    v19 = 0;
    v14 = HmgShareLock(v13, 1);
    v17 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v17);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
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
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  return v3;
}
