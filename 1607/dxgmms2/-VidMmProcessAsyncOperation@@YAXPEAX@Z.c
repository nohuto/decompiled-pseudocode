/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00671F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_ppp @ 0x1C001E8B0 (Template_ppp.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0089618 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C008D814 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0091DF0 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_GLOBAL *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r14
  struct _VIDMM_MULTI_ALLOC *v11; // rsi
  unsigned int v12; // edi
  VIDMM_GLOBAL *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v5 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v9 = *((_QWORD *)a1 + 6);
        v10 = *((_QWORD *)a1 + 5);
        v11 = *(struct _VIDMM_MULTI_ALLOC **)(v9 + 24);
        v12 = (*(_DWORD *)(*(_QWORD *)(v9 + 48) + 4LL) >> 6) & 0xF;
        while ( 1 )
        {
          v19 = 0;
          if ( !VIDMM_GLOBAL::IsAllocationInPresentQueue(v5, v11, &v19) )
            break;
          if ( v19 > 1 )
            break;
          v14 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v13, v11, v12);
          v16 = v14;
          if ( v14 >= 0 )
            break;
          v17 = WdLogNewEntry5_WdWarning(v15);
          *(_QWORD *)(v17 + 24) = v16;
          WdLogEvent5_WdWarning(v17);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v10, v11);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v10 + 41152, 0LL);
        *(_QWORD *)(v10 + 41160) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v10 + 41192))-- == 1 )
          KeSetEvent((PRKEVENT)(v10 + 41168), 0, 0);
        *(_QWORD *)(v10 + 41160) = 0LL;
        ExReleasePushLockExclusiveEx(v10 + 41152, 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 5);
      if ( v6 )
      {
        MmUnmapViewOfSection(v6, *((_QWORD *)a1 + 7));
        ObfDereferenceObject(*((PVOID *)a1 + 5));
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppp(v7, &EndVidMmUnmapViewAsync, v8, *((_QWORD *)a1 + 5), *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v3, &EndVidMmDereferenceObjectAsync, v4, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
