/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C0173050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0172D5C (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C017F6DC (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(_OWORD *a1)
{
  _OWORD *v1; // rdi
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r13
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  RECT *v19; // rdi
  RECT *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  D3DKMT_MOVE_RECT *v23; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v25; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v27; // r8
  unsigned int v28; // esi
  __int64 v29; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT v30; // [rsp+40h] [rbp-168h] BYREF

  v1 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v3);
  if ( !ProcessDxgProcess )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v7);
    v8 = v6;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  if ( !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = 9192LL;
    v8 = v13;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (_OWORD *)MmUserProbeAddress;
  v14 = &v30;
  v15 = 2LL;
  do
  {
    *(_OWORD *)&v14->hContext = *v1;
    *(_OWORD *)v14->BroadcastContext = v1[1];
    *(_OWORD *)&v14->BroadcastContext[4] = v1[2];
    *(_OWORD *)&v14->BroadcastContext[8] = v1[3];
    *(_OWORD *)&v14->BroadcastContext[12] = v1[4];
    *(_OWORD *)&v14->BroadcastContext[16] = v1[5];
    *(_OWORD *)&v14->BroadcastContext[20] = v1[6];
    v14 = (struct _D3DKMT_OUTPUTDUPLPRESENT *)((char *)v14 + 128);
    *(_OWORD *)&v14[-1].PresentRegions.pMoveRects = v1[7];
    v1 += 8;
    --v15;
  }
  while ( v15 );
  *(_OWORD *)&v14->hContext = *v1;
  *(_OWORD *)v14->BroadcastContext = v1[1];
  *(_OWORD *)&v14->BroadcastContext[4] = v1[2];
  *(_QWORD *)&v14->BroadcastContext[8] = *((_QWORD *)v1 + 6);
  v16 = 16LL * v30.PresentRegions.DirtyRectCount;
  if ( v16 > 0xFFFFFFFF )
  {
    v29 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v11, v12);
    *(_QWORD *)(v29 + 24) = 9211LL;
    goto LABEL_36;
  }
  v17 = 24LL * v30.PresentRegions.MoveRectCount;
  if ( v17 > 0xFFFFFFFF )
  {
    v29 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v11, v12);
    *(_QWORD *)(v29 + 24) = 9218LL;
    goto LABEL_36;
  }
  v18 = v17 + v16;
  if ( (int)v17 + (int)v16 < (unsigned int)v17 )
  {
    v29 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v11, v12);
    *(_QWORD *)(v29 + 24) = 9225LL;
LABEL_36:
    WdLogEvent5_WdWarning(v29);
    return 3221225621LL;
  }
  v19 = 0LL;
  if ( v18 )
  {
    v20 = (RECT *)operator new(v18, 0x4B677844u, PagedPool);
    v19 = v20;
    if ( !v20 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 9236LL;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
    v23 = (D3DKMT_MOVE_RECT *)&v20[v30.PresentRegions.DirtyRectCount];
    if ( v30.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v30.PresentRegions.pDirtyRects;
      v25 = (const RECT *)((char *)v30.PresentRegions.pDirtyRects + (unsigned int)v16);
      if ( v25 < v30.PresentRegions.pDirtyRects || (unsigned __int64)v25 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v20, pDirtyRects, (unsigned int)v16);
      v30.PresentRegions.pDirtyRects = v19;
    }
    else
    {
      v30.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v30.PresentRegions.MoveRectCount;
    if ( v30.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v17 )
      {
        v27 = (const D3DKMT_MOVE_RECT *)((char *)v30.PresentRegions.pMoveRects + (unsigned int)v17);
        if ( (unsigned __int64)v27 > MmUserProbeAddress || v27 < v30.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v30.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v30.PresentRegions.pMoveRects, v23);
      v30.PresentRegions.pMoveRects = v23;
    }
    else
    {
      v30.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v30.PresentRegions.pDirtyRects = 0LL;
    v30.PresentRegions.pMoveRects = 0LL;
  }
  v28 = OutputDuplPresent(&v30, ProcessDxgProcess);
  if ( v19 )
    operator delete(v19);
  return v28;
}
