/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x180004BC4
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x180005C28 (--1CPdcTimerActivation@@QEAA@XZ.c)
 * Callees:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180004AAC (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180005614 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180005760 (PdcAcquireRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x180005870 (PdcPortSendMessageSynchronously.c)
 *     memset @ 0x180036D30 (memset.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P)
{
  int *v1; // rbp
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  _QWORD v8[96]; // [rsp+20h] [rbp-308h] BYREF
  char v9; // [rsp+330h] [rbp+8h] BYREF

  v1 = 0LL;
  v9 = 0;
  v2 = 0LL;
  if ( !P )
  {
    v3 = -1073741585;
LABEL_18:
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE((__int64)v1, (_DWORD *)v2, v3);
    goto LABEL_10;
  }
  v1 = P;
  if ( P[4] != 1094927440 )
  {
    v3 = -1073741585;
    v1 = 0LL;
    goto LABEL_18;
  }
  v2 = *((_QWORD *)P + 3);
  if ( *(_DWORD *)v2 != 843138128 )
  {
    v1 = 0LL;
    v3 = -1073741585;
    v2 = 0LL;
    goto LABEL_18;
  }
  PdcAcquireRwLockExclusive2(v2 + 8, &v9);
  if ( !*(_DWORD *)(v2 + 4LL * v1[12] + 228) )
  {
    v3 = -1073741823;
    goto LABEL_18;
  }
  memset(v8, 0, sizeof(v8));
  v8[7] = *((_QWORD *)v1 + 74);
  LODWORD(v8[5]) = 13;
  v3 = PdcPortSendMessageSynchronously(*(_QWORD *)(v2 + 32), v8);
  if ( v3 < 0 )
    goto LABEL_18;
  v3 = v8[6];
  if ( SLODWORD(v8[6]) < 0 )
    goto LABEL_18;
  v4 = *((_QWORD *)v1 + 3);
  --*(_DWORD *)(v4 + 4LL * v1[12] + 228);
  --*(_DWORD *)(v4 + 224);
  v1[4] = 0;
  Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE((__int64)v1, (_DWORD *)v2, 0);
  v5 = *(_QWORD **)v1;
  v6 = (PVOID *)*((_QWORD *)v1 + 1);
  if ( *(int **)(*(_QWORD *)v1 + 8LL) != v1 || *v6 != v1 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v1[4] = 0;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
LABEL_10:
  if ( v9 )
    PdcReleaseRwLockExclusive2(v2 + 8, &v9);
  return (unsigned int)v3;
}
