/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C014F670
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C000A308 (RtlStringCchLengthW.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C00209A8 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C002E65C (DxgkMiracastStopMiracastSession.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(const wchar_t *Src, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  size_t v22; // rbx
  SIZE_T v23; // rax
  WCHAR *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  size_t v27; // rbx
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Object[1] = 0LL;
  CurrentProcess = PsGetCurrentProcess(Src);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( (int)DxgkNetDispAccessCheck(ProcessDxgProcess) >= 0 )
  {
    pcchLength = 520LL;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v15 = RtlStringCchLengthW(Src, 0x208uLL, &pcchLength);
    v20 = v15;
    if ( v15 >= 0 )
    {
      v22 = pcchLength;
      v23 = 2 * (pcchLength + 1);
      if ( !is_mul_ok(pcchLength + 1, 2uLL) )
        v23 = -1LL;
      v24 = (WCHAR *)operator new(v23, 0x4B677844u, PagedPool);
      v4 = v24;
      if ( v24 )
      {
        v27 = v22;
        memmove(v24, Src, v27 * 2);
        v4[v27] = 0;
        if ( Handle
          && (v28 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
              v5 = (struct _KEVENT *)Object[0],
              v28 < 0) )
        {
          v13 = -2147483640;
          v30 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v30 + 24) = Handle;
          WdLogEvent5_WdError(v30);
        }
        else
        {
          v13 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v13 = -2147483638;
        v26 = WdLogNewEntry5_WdLowResource(v25);
        *(_QWORD *)(v26 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v26);
      }
    }
    else
    {
      v13 = -2147483640;
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdWarning(v21);
    }
  }
  else
  {
    v13 = -2147483643;
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v14);
  }
  if ( v4 )
    operator delete(v4);
  return v13;
}
