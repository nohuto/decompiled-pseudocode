/*
 * XREFs of SnapshotWindowRects @ 0x1C01D5D80
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D5CB4 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     DesktopWindowFromDesktop @ 0x1C00399CC (DesktopWindowFromDesktop.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall SnapshotWindowRects(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int128 *Prop; // rax
  int v19; // r8d
  __int128 v20; // xmm0

  v2 = 0;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = BuildHwndList(*(_QWORD *)(v4 + 96), 2, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int64 *)((char *)v5 + 32);
    v8 = *((_QWORD *)v5 + 4) == 1LL;
    v9 = (_QWORD *)((char *)v5 + 32);
    if ( v8 )
      goto LABEL_20;
    do
    {
      ++v2;
      ++v9;
    }
    while ( *v9 != 1LL );
    if ( v2 && (v10 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL), (v11 = v10) != 0) )
    {
      v12 = *v7;
      if ( *v7 != 1 )
      {
        v13 = v10 + 32;
        do
        {
          v14 = HMValidateHandleNoSecure(v12, 1);
          if ( v14
            && *(char *)(v14 + 48) >= 0
            && IsNonImmersiveBand(v14)
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 384LL) + 776LL) & 0x30) != 0x10 )
          {
            v17 = (unsigned __int16)atomCheckpointProp;
            *(_QWORD *)(v13 + 8) = *v7;
            *(_OWORD *)(v13 - 32) = *(_OWORD *)(v16 + 112);
            Prop = (__int128 *)GetProp(v16, v17, 1LL);
            if ( Prop )
            {
              v20 = *Prop;
              *(_DWORD *)v13 |= v19;
              *(_OWORD *)(v13 - 16) = v20;
            }
            else
            {
              *(_DWORD *)v13 &= ~1u;
            }
            ++*a2;
            v13 += 48LL;
          }
          v12 = *++v7;
        }
        while ( *v7 != 1 );
      }
      if ( *a2 )
        return v11;
      Win32FreePool(v11);
    }
    else
    {
LABEL_20:
      FreeHwndList(v6);
    }
  }
  return 0LL;
}
