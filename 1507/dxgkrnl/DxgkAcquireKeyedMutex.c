/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C014DE70
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C014BC3C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
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
  size_t v16; // [rsp+60h] [rbp+60h]
  _BYTE v17[48]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2054);
  if ( DXGPROCESS::GetCurrent(a1) )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v12;
    *(_OWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v12[1];
    v13 = 0LL;
    v14 = *(_QWORD **)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v14 )
    {
      if ( (unsigned __int64)v14 >= MmUserProbeAddress )
        v14 = (_QWORD *)MmUserProbeAddress;
      *v3 = *v14;
      v13 = (union _LARGE_INTEGER *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
    }
    LODWORD(v16) = 0;
    v7 = DXGKEYEDMUTEX::AcquireSync(
           *(unsigned int *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
           *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
           0LL,
           v13,
           v3 + 4,
           0LL,
           v16,
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
    Template_q(v9, &EventProfilerExit, (__int64)v8, 2054);
  return (unsigned int)v7;
}
