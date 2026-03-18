/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C00179A0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00181B0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0018460 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Template_xq @ 0x1C00B9068 (Template_xq.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, ULONG64 a2, _QWORD *a3)
{
  unsigned int *v3; // rbp
  ULONG64 v5; // rsi
  DirectComposition::CConnection *v7; // rdi
  __int128 v8; // xmm3
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // r8
  struct _ERESOURCE *v15; // rbx
  volatile signed __int32 *v16; // rax
  int v17; // ebx
  int v19; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a2;
  v7 = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  if ( a2 )
  {
    if ( a2 + 40 < a2 || a2 + 40 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v8 = *(_OWORD *)a2;
    *(_OWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)a2;
    v9 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v9;
    v10 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v10;
    *(_OWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v8;
    *(_OWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v9;
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v10;
    *v3 = 0;
  }
  else
  {
    *v3 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( (*v3 & 0x80000000) == 0 )
  {
    v12 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v12 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v12 )
    {
      v15 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v15, 1u);
      v16 = *(volatile signed __int32 **)(v12 + 24);
      if ( v16 && a1 == *(_QWORD *)(v12 + 16) )
      {
        _InterlockedIncrement(v16);
        v7 = *(DirectComposition::CConnection **)(v12 + 24);
        *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v7;
        v17 = 0;
      }
      else
      {
        v17 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v17 = -1073741823;
    }
    *v3 = v17;
    if ( v17 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        Template_xq(*(unsigned int *)(v5 + 16), &DCompBeginFrameEvent, v14, a1, *(_DWORD *)(v5 + 16));
      *v3 = DirectComposition::CConnection::BeginFrame(
              v7,
              (const struct COMPOSITION_FRAME_INFO *)(v3 + 6),
              (unsigned __int64 *)v3 + 1);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  else
  {
    *v3 = -1073741811;
  }
  if ( (*v3 & 0x80000000) != 0 )
  {
    v11 = *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v11 )
      DirectComposition::CConnection::RemoveCompositionFrame(v7, v11);
  }
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(
      *(DirectComposition::CConnection **)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      v11);
  KeLeaveCriticalRegion();
  return *v3;
}
