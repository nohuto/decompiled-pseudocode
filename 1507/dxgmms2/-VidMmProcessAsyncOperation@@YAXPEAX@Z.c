/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00327C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     Template_ppp @ 0x1C000FB18 (Template_ppp.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C004E7DC (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0056D10 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C005B3AC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_GLOBAL *v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbp
  struct _VIDMM_MULTI_ALLOC *v8; // rsi
  unsigned int v9; // edi
  VIDMM_GLOBAL *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v5 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v6 = *((_QWORD *)a1 + 6);
        v7 = (volatile signed __int32 *)*((_QWORD *)a1 + 5);
        v8 = *(struct _VIDMM_MULTI_ALLOC **)(v6 + 24);
        v9 = (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 4LL) >> 6) & 0xF;
        while ( VIDMM_GLOBAL::IsAllocationInPresentQueue(v5, v8, 0LL) )
        {
          v11 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v10, v8, v9);
          v15 = v11;
          if ( v11 >= 0 )
            break;
          v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
          *(_QWORD *)(v16 + 24) = v15;
          WdLogEvent5_WdWarning(v16);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v7, v8);
        _InterlockedDecrement(v7 + 9987);
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v17 = *((_QWORD *)a1 + 5);
      if ( v17 )
      {
        MmUnmapViewOfSection(v17, *((_QWORD *)a1 + 7));
        ObfDereferenceObject(*((PVOID *)a1 + 5));
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppp(v18, &EndVidMmUnmapViewAsync, v19, *((_QWORD *)a1 + 5), *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v3, &EndVidMmDereferenceObjectAsync, v4, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
