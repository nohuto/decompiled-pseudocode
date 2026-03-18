/*
 * XREFs of xxxValidateClassAndSize @ 0x1402001D4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1401D822C (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1401E877C (xxxClientFreeWindowClassExtraBytes.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z @ 0x140219988 (-UnlockWorker@-$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rdx
  unsigned int j; // ecx
  __int64 v34; // rcx
  size_t v35; // rdi
  void *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned int i; // ecx
  ULONG_PTR BugCheckParameter2[4]; // [rsp+20h] [rbp-48h] BYREF

  *a7 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_WORD *)(v8 + 42);
  if ( (v9 & 0xD000) != 0 )
  {
    if ( (v9 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2528LL);
    return 0LL;
  }
  if ( v9 != a5 )
  {
    if ( v9 )
      return 0LL;
    if ( (_DWORD)a2 != a6 )
    {
      *a7 = xxxDefWindowProc((struct tagTHREADINFO **)a1, a2, a3, a4);
      return 0LL;
    }
    *(_WORD *)(v8 + 42) = 4096;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL);
    v12 = *(unsigned __int16 *)(W32GetUserSessionState(53248LL, a2) + 71164);
    v13 = v12 + v11;
    v14 = (a5 & 0x2FFFu) - 666;
    v17 = *(_QWORD *)(W32GetUserSessionState(v12, v15) + 19904);
    if ( v13 >= *(unsigned __int16 *)(v17 + 2 * v14 + 328) )
    {
      v40 = *(_QWORD *)(a1 + 280);
      if ( v40 )
      {
        for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL); ++i )
        {
          if ( *(_BYTE *)(i + v40) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2710LL);
            break;
          }
        }
        memset_0(*(void **)(a1 + 280), 0, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 248LL));
      }
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 40);
      v19 = *(_DWORD *)(v18 + 248);
      v20 = *(_DWORD *)(v18 + 200);
      v21 = *(unsigned __int16 *)(W32GetUserSessionState(v17, v16) + 71164);
      v22 = v19 + v21 + v20;
      v25 = *(_QWORD *)(W32GetUserSessionState(v21, v23) + 19904);
      if ( v22 < *(unsigned __int16 *)(v25 + 2 * v14 + 328) )
        goto LABEL_12;
      v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19904);
      v29 = *(unsigned __int16 *)(v26 + 2 * v14 + 328)
          - (unsigned int)*(unsigned __int16 *)(W32GetUserSessionState(v28, v27) + 71164);
      v31 = Win32AllocPoolZInit(v29, 1937208149LL);
      if ( !v31 )
        goto LABEL_12;
      PtiCurrent(v30);
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        BugCheckParameter2,
        v31,
        (__int64)Win32FreePool);
      v32 = *(_QWORD *)(a1 + 280);
      if ( v32 )
      {
        for ( j = 0; j < *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL); ++j )
        {
          if ( *(_BYTE *)(j + v32) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2623LL);
            break;
          }
        }
        Win32FreePool(*(void **)(a1 + 280));
        *(_QWORD *)(a1 + 280) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL) = 0;
      v34 = *(_QWORD *)(a1 + 40);
      v35 = *(unsigned int *)(v34 + 200);
      if ( (_DWORD)v35 )
      {
        v36 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v35, v32);
        if ( !v36 || (v34 = *(_QWORD *)(a1 + 40), (*(_WORD *)(v34 + 42) & 0xC000) != 0) )
        {
LABEL_23:
          Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
LABEL_12:
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
          return 0LL;
        }
      }
      else
      {
        v36 = 0LL;
      }
      v37 = *(_QWORD *)(v34 + 296);
      if ( v37 )
      {
        if ( v36 )
          RtlCopyVolatileMemory(v36, (const void *)(v37 + v29), v35);
        v38 = *(_QWORD *)(a1 + 40);
        v39 = *(_QWORD *)(v38 + 296);
        *(_QWORD *)(v38 + 296) = v36;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v35;
        xxxClientFreeWindowClassExtraBytes(a1, v39);
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0xC000) != 0 )
          goto LABEL_23;
      }
      else
      {
        *(_QWORD *)(v34 + 296) = v36;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v35;
      }
      Win32RawLockedItemBase<void,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
      *(_QWORD *)(a1 + 280) = v31;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL) = v29;
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    }
    *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = a5;
    *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
  }
  return 1LL;
}
