/*
 * XREFs of DestroyCacheDC @ 0x1C005B4A0
 * Callers:
 *     DestroyMonitorDCs @ 0x1C000AF60 (DestroyMonitorDCs.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     DestroyCacheDCEntries @ 0x1C00502A4 (DestroyCacheDCEntries.c)
 *     xxxUserProcessCallout @ 0x1C0051410 (xxxUserProcessCallout.c)
 *     DelayedDestroyCacheDC @ 0x1C005AB48 (DelayedDestroyCacheDC.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     GreMarkDeletableRgn @ 0x1C000F580 (GreMarkDeletableRgn.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003BBD8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GreDeleteDC @ 0x1C005B5C0 (GreDeleteDC.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v4; // ebp
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  struct HOBJ__ *v9; // rcx
  struct HOBJ__ *v10; // rcx
  struct HOBJ__ *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // [rsp+20h] [rbp-18h] BYREF
  __int64 v26; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
    v4 = 1;
    v6 = (__int64 *)(gpDispInfo + 64);
    v17 = *(__int64 **)(gpDispInfo + 64);
    if ( !v17 )
      goto LABEL_28;
    do
    {
      if ( v17[1] == a2 )
        break;
      v6 = v17;
      v17 = (__int64 *)*v17;
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_28:
      GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v15, v16);
      return 0LL;
    }
  }
  v7 = *v6;
  *(_DWORD *)(v7 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v7 + 64) & 0x40000) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( v8 > 2 )
      GreMarkDeletableRgn(v8);
    v9 = *(struct HOBJ__ **)(v7 + 40);
    if ( (unsigned __int64)v9 > 2 )
      GreDeleteObject(v9);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v10 = *(struct HOBJ__ **)(v7 + 48);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v11 = *(struct HOBJ__ **)(v7 + 56);
  if ( v11 )
  {
    GreDeleteObject(v11);
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
    v18 = *(_QWORD *)(v7 + 8);
    v26 = 0LL;
    v19 = HmgShareLock(v18, 1);
    v25 = v19;
    if ( v19 )
    {
      *(_DWORD *)(v19 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v25);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v20, v22, v23, v25, v26);
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
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v12, v13);
  return v3;
}
