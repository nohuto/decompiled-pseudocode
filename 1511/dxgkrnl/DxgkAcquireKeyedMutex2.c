/*
 * XREFs of DxgkAcquireKeyedMutex2 @ 0x1C0151DE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C015098C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  _QWORD *v8; // r8
  ULONG64 v9; // rcx
  bool v10; // zf
  _OWORD *v12; // rax
  union _LARGE_INTEGER *v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v16[2]; // [rsp+70h] [rbp+70h]
  _BYTE v17[64]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2068);
  if ( DXGPROCESS::GetCurrent() )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v12;
    *(_OWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v12[1];
    *(_OWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v12[2];
    v13 = 0LL;
    v14 = *(_QWORD **)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v14 )
    {
      if ( (unsigned __int64)v14 >= MmUserProbeAddress )
        v14 = (_QWORD *)MmUserProbeAddress;
      *v3 = *v14;
      v13 = (union _LARGE_INTEGER *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
    }
    v16[0] = *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v7 = DXGKEYEDMUTEX::AcquireSync(
           *(unsigned int *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
           *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
           0,
           v13,
           v3 + 4,
           *(void **)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
           *(size_t *)v16,
           0LL);
    if ( v7 >= 0 )
    {
      v8 = (_QWORD *)(a1 + 24);
      v9 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v8 = (_QWORD *)MmUserProbeAddress;
      *v8 = *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    if ( v7 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v15 + 24) = *(unsigned int *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_QWORD *)(v15 + 32) = v7;
      WdLogEvent5_WdError(v15);
    }
    v10 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, (__int64)v8, 2068);
  return (unsigned int)v7;
}
