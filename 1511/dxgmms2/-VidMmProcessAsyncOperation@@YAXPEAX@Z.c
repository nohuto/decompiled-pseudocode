/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C005F700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_ppp @ 0x1C001D53C (Template_ppp.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0038144 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C003817C (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0038610 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  struct _VIDMM_MULTI_ALLOC *v6; // rsi
  unsigned int v7; // edi
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v3 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)v3 == 1 )
      {
        v4 = *((_QWORD *)a1 + 6);
        v5 = *((_QWORD *)a1 + 5);
        v6 = *(struct _VIDMM_MULTI_ALLOC **)(v4 + 24);
        v7 = (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 4LL) >> 6) & 0xF;
        while ( 1 )
        {
          v20 = 0;
          if ( !VIDMM_GLOBAL::IsAllocationInPresentQueue(v3, v6, &v20) )
            break;
          if ( v20 > 1 )
            break;
          v11 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v8, v6, v7, v10);
          v13 = v11;
          if ( v11 >= 0 )
            break;
          v14 = WdLogNewEntry5_WdWarning(v12);
          *(_QWORD *)(v14 + 24) = v13;
          WdLogEvent5_WdWarning(v14);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct _KTHREAD **)v5, v6, v9, v10);
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 40004));
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v15 = *((_QWORD *)a1 + 5);
      if ( v15 )
      {
        MmUnmapViewOfSection(v15, *((_QWORD *)a1 + 7));
        ObfDereferenceObject(*((PVOID *)a1 + 5));
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppp(v16, &EndVidMmUnmapViewAsync, v17, *((_QWORD *)a1 + 5), *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v18, &EndVidMmDereferenceObjectAsync, v19, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
