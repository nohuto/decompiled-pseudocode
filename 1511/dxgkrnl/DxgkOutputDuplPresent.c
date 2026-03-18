/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C014D270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C014CED0 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C015A6B4 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(_OWORD *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  RECT *v17; // rdi
  RECT *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  D3DKMT_MOVE_RECT *v24; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v26; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v28; // r8
  unsigned int v29; // esi
  __int64 v30; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT v31; // [rsp+40h] [rbp-168h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    *(_QWORD *)(v4 + 32) = PsGetCurrentProcess(v5);
    v6 = v4;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = 8597LL;
    v6 = v11;
    goto LABEL_3;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v12 = &v31;
  v13 = 2LL;
  do
  {
    *(_OWORD *)&v12->hContext = *a1;
    *(_OWORD *)v12->BroadcastContext = a1[1];
    *(_OWORD *)&v12->BroadcastContext[4] = a1[2];
    *(_OWORD *)&v12->BroadcastContext[8] = a1[3];
    *(_OWORD *)&v12->BroadcastContext[12] = a1[4];
    *(_OWORD *)&v12->BroadcastContext[16] = a1[5];
    *(_OWORD *)&v12->BroadcastContext[20] = a1[6];
    v12 = (struct _D3DKMT_OUTPUTDUPLPRESENT *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].PresentRegions.pMoveRects = a1[7];
    a1 += 8;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->hContext = *a1;
  *(_OWORD *)v12->BroadcastContext = a1[1];
  *(_OWORD *)&v12->BroadcastContext[4] = a1[2];
  *(_QWORD *)&v12->BroadcastContext[8] = *((_QWORD *)a1 + 6);
  v14 = 16LL * v31.PresentRegions.DirtyRectCount;
  if ( v14 > 0xFFFFFFFF )
  {
    v30 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v9, v10);
    *(_QWORD *)(v30 + 24) = 8616LL;
    goto LABEL_36;
  }
  v15 = 24LL * v31.PresentRegions.MoveRectCount;
  if ( v15 > 0xFFFFFFFF )
  {
    v30 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v9, v10);
    *(_QWORD *)(v30 + 24) = 8623LL;
    goto LABEL_36;
  }
  v16 = v15 + v14;
  if ( (int)v15 + (int)v14 < (unsigned int)v15 )
  {
    v30 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v9, v10);
    *(_QWORD *)(v30 + 24) = 8630LL;
LABEL_36:
    WdLogEvent5_WdWarning(v30);
    return 3221225621LL;
  }
  v17 = 0LL;
  if ( v16 )
  {
    v18 = (RECT *)operator new[](v16, 0x4B677844u, PagedPool);
    v17 = v18;
    if ( !v18 )
    {
      v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = 8641LL;
      WdLogEvent5_WdLowResource(v23);
      return 3221225495LL;
    }
    v24 = (D3DKMT_MOVE_RECT *)&v18[v31.PresentRegions.DirtyRectCount];
    if ( v31.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v31.PresentRegions.pDirtyRects;
      v26 = (const RECT *)((char *)v31.PresentRegions.pDirtyRects + (unsigned int)v14);
      if ( v26 < v31.PresentRegions.pDirtyRects || (unsigned __int64)v26 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v18, pDirtyRects, (unsigned int)v14);
      v31.PresentRegions.pDirtyRects = v17;
    }
    else
    {
      v31.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v31.PresentRegions.MoveRectCount;
    if ( v31.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v15 )
      {
        v28 = (const D3DKMT_MOVE_RECT *)((char *)v31.PresentRegions.pMoveRects + (unsigned int)v15);
        if ( (unsigned __int64)v28 > MmUserProbeAddress || v28 < v31.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v31.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v31.PresentRegions.pMoveRects, v24);
      v31.PresentRegions.pMoveRects = v24;
    }
    else
    {
      v31.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v31.PresentRegions.pDirtyRects = 0LL;
    v31.PresentRegions.pMoveRects = 0LL;
  }
  v29 = OutputDuplPresent(&v31, Current);
  if ( v17 )
    operator delete(v17);
  return v29;
}
