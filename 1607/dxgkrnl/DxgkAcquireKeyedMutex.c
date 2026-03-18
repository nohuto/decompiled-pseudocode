/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C0176C80
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C006FE40 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  _QWORD *v10; // r8
  ULONG64 v11; // rcx
  bool v12; // zf
  _OWORD *v14; // rax
  union _LARGE_INTEGER *v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // rax
  size_t v18; // [rsp+60h] [rbp+60h]
  _BYTE v19[48]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2054);
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( PsGetProcessDxgProcess(CurrentProcess, v6) )
  {
    v14 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v14;
    *(_OWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14[1];
    v15 = 0LL;
    v16 = *(_QWORD **)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v16 )
    {
      if ( (unsigned __int64)v16 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v3 = *v16;
      v15 = (union _LARGE_INTEGER *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL);
    }
    LODWORD(v18) = 0;
    v9 = DXGKEYEDMUTEX::AcquireSync(
           *(unsigned int *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
           *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
           0,
           v15,
           v3 + 4,
           0LL,
           v18,
           0LL);
    if ( v9 >= 0 )
    {
      v10 = (_QWORD *)(a1 + 24);
      v11 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    if ( v9 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_QWORD *)(v17 + 32) = v9;
      WdLogEvent5_WdError(v17);
    }
    v12 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v11 = qword_1C0056840;
    v12 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, (__int64)v10, 2054);
  return (unsigned int)v9;
}
