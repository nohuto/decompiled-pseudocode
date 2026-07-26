/*
 * XREFs of ndisPreTaskOffloadQuery @ 0x1C00478E4
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C00C5C90 (ndisOidPreTaskOffload.c)
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     ndisFillOffloadCapsInTasks @ 0x1C00454D0 (ndisFillOffloadCapsInTasks.c)
 *     ndisGetTaskBytes @ 0x1C0045874 (ndisGetTaskBytes.c)
 */

char __fastcall ndisPreTaskOffloadQuery(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  KIRQL v8; // al
  KIRQL v9; // r14
  unsigned int TaskBytes; // eax
  unsigned int v11; // r15d
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 32);
  if ( v2 )
    v6 = *(_QWORD *)(v2 + 32);
  else
    v6 = *(_QWORD *)a2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqDD(0xCBu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v6, a1, 1, *(_DWORD *)(a2 + 40));
  if ( !*(_QWORD *)(v6 + 4152) )
    goto LABEL_16;
  if ( *(_DWORD *)(v4 + 48) < 0x1Cu )
  {
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = ndisGetTaskBytes(v6);
    goto LABEL_17;
  }
  v7 = *(_DWORD **)(v4 + 40);
  if ( *v7 != 1 || v7[1] != 28 || v7[4] != 2 || (v7[5] & 1) == 0 || v7[6] != 14 )
    goto LABEL_16;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
  *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
  v9 = v8;
  *(_DWORD *)(v6 + 1856) = 2309319;
  TaskBytes = ndisGetTaskBytes(v6);
  v11 = TaskBytes;
  if ( TaskBytes == 28 )
  {
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v9);
LABEL_16:
    *(_DWORD *)(a2 + 40) = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v4 + 48) >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks(v6, v4);
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v9);
    *(_DWORD *)(a2 + 40) = 0;
  }
  else
  {
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v9);
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = v11;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v14) = *(_DWORD *)(a2 + 40);
    LODWORD(v13) = 1;
    WPP_SF_qqDD(0xCCu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v6, a1, v13, v14);
  }
  return 1;
}
