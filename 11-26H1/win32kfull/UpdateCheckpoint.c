/*
 * XREFs of UpdateCheckpoint @ 0x140030480
 * Callers:
 *     _GetWindowPlacement @ 0x140030188 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1401FC6A0 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 */

struct CHECKPOINT *__fastcall UpdateCheckpoint(struct tagWND *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  const struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int128 *v7; // r8
  int v8; // r9d
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  struct tagRECT v13; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v3 = *(_WORD *)(v1 + 42) & 0x2FFF;
  v14 = *(struct tagRECT *)(v1 + 88);
  v13 = v14;
  if ( v3 != 669 )
  {
    v4 = (const struct tagWND *)*((_QWORD *)a1 + 13);
    v5 = *((_QWORD *)v4 + 5);
    if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
    {
      v7 = (__int128 *)(v5 + 104);
      if ( (((unsigned __int16)(*(_DWORD *)(v1 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v5 + 288) >> 8)) & 0x1FF) != 0 )
      {
        v15 = *v7;
        LogicalToPhysicalInPlaceRectWithSubpixel(v4, (int *)&v15, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(a1, (int *)&v15, 0LL);
        v7 = &v15;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
      {
        v10 = -*((_DWORD *)v7 + 1);
        v11 = *((_DWORD *)v7 + 2);
        v13.top += v10;
        v12 = -v11;
        v13.bottom = v10 + v14.bottom;
        v13.left = -(v12 + v14.right);
        v13.right = -(v12 + v14.left);
      }
      else
      {
        v8 = -*((_DWORD *)v7 + 1);
        v9 = -*(_DWORD *)v7;
        v13.right += v9;
        v13.bottom += v8;
        v13.top += v8;
        v13.left = v9 + v14.left;
      }
    }
  }
  return CHECKPOINT::Restore(a1, &v13);
}
