/*
 * XREFs of DxgkAcquireKeyedMutex2 @ 0x1C006FBA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C006FE40 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _OWORD *v8; // rax
  union _LARGE_INTEGER *v9; // r9
  _QWORD *v10; // rdx
  ULONG64 v11; // rcx
  int v12; // ebx
  _QWORD *v13; // r8
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[64]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2068);
  CurrentProcess = PsGetCurrentProcess();
  if ( PsGetProcessDxgProcess(CurrentProcess, v6) )
  {
    v8 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v8;
    *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v8[1];
    *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v8[2];
    v9 = 0LL;
    v10 = *(_QWORD **)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v10 )
    {
      if ( (unsigned __int64)v10 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v3 = *v10;
      v9 = (union _LARGE_INTEGER *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL);
    }
    v12 = DXGKEYEDMUTEX::AcquireSync(
            *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0,
            v9,
            v3 + 4,
            *(void **)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
            0LL);
    if ( v12 >= 0 )
    {
      v13 = (_QWORD *)(a1 + 24);
      v11 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    if ( v12 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_QWORD *)(v17 + 32) = v12;
      WdLogEvent5_WdError(v17);
    }
    v14 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7);
    v12 = -1073741811;
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    v11 = qword_1C0056840;
    v14 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, (__int64)v13, 2068);
  return (unsigned int)v12;
}
