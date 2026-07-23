/*
 * XREFs of ExpCopyProcessInfo @ 0x1404EA2E0
 * Callers:
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  char v5; // r14
  __int64 v6; // r15
  __int64 v7; // r13
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rtt
  unsigned int *v10; // r12
  unsigned int v11; // esi
  unsigned int v12; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int i; // ebx
  unsigned int v15; // eax
  unsigned int *v16; // rdi
  _BYTE *v17; // rax
  _BYTE *v18; // r13
  unsigned int j; // edi
  struct _EX_RUNDOWN_REF *v20; // rcx
  unsigned __int64 v21; // rtt
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v26; // [rsp+0h] [rbp-B8h] BYREF
  BOOLEAN v27; // [rsp+20h] [rbp-98h]
  unsigned int v28; // [rsp+24h] [rbp-94h]
  unsigned int v29; // [rsp+28h] [rbp-90h]
  unsigned int v30; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v31; // [rsp+30h] [rbp-88h]
  __int64 v32; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-78h]
  unsigned int v34; // [rsp+48h] [rbp-70h]
  unsigned int *v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  unsigned __int64 v37; // [rsp+70h] [rbp-48h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  v6 = (__int64)a2;
  v7 = a1;
  v35 = 0LL;
  v8 = a2 + 92;
  _m_prefetchw(&a2[92]);
  v9 = a2[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)&a2[92], v9 + 2, v9) )
  {
    v27 = 1;
  }
  else
  {
    v27 = ExfAcquireRundownProtection(a2 + 92);
    if ( !v27 )
    {
LABEL_30:
      v22 = 0;
      v29 = 0;
      goto LABEL_25;
    }
  }
  v10 = *(unsigned int **)(v6 + 1048);
  v35 = v10;
  if ( !v10 )
  {
    ExReleaseRundownProtection(v8);
    goto LABEL_30;
  }
  v11 = 0;
  v30 = 0;
  v12 = 0;
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0; ; ++i )
  {
    v28 = i;
    v15 = dword_140757700;
    if ( i >= dword_140757700 )
      break;
    v16 = &v10[16 * (unsigned __int64)i];
    v17 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v16 + 16), 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v16 + 16, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16 + 8, v17, (ULONG_PTR)(v16 + 16));
    if ( v18 )
      v18[26] |= 1u;
    v11 += v16[22];
    v30 = v11;
    v12 += v16[23];
    v31 = v12;
  }
  for ( j = 0; ; ++j )
  {
    v28 = j;
    if ( j >= v15 )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v10[16 * j + 16], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v10[16 * j + 16]);
    KeAbPostRelease((ULONG_PTR)&v10[16 * j + 16]);
    v15 = dword_140757700;
  }
  KeLeaveCriticalRegion();
  if ( v11 > (unsigned int)((255 * ((unsigned __int64)*v10 >> 2)) >> 8) )
  {
    v11 = (255 * ((unsigned __int64)*v10 >> 2)) >> 8;
    v30 = v11;
  }
  if ( v12 > v11 )
    v31 = v11;
  if ( &v26 != (__int64 *)-40LL )
    v29 = v11;
  v6 = (__int64)a2;
  v20 = a2 + 92;
  _m_prefetchw(&a2[92]);
  v21 = v20->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v21 - 2, v21) )
    ExfReleaseRundownProtection(v20);
  v22 = v29;
  v7 = a1;
  v4 = a4;
  v5 = a3;
LABEL_25:
  v34 = v22;
  *(_DWORD *)(v7 + 96) = v22;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(v6 + 776);
  *(_DWORD *)(v7 + 72) = *(char *)(v6 + 444);
  *(_QWORD *)(v7 + 80) = *(_QWORD *)(v6 + 744);
  *(_QWORD *)(v7 + 88) = *(_QWORD *)(v6 + 992);
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(v6 + 1704);
  *(_QWORD *)(v7 + 112) = *(_QWORD *)(v6 + 816);
  *(_QWORD *)(v7 + 120) = *(_QWORD *)(v6 + 824);
  *(_DWORD *)(v7 + 128) = *(_DWORD *)(v6 + 1284);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 1440);
  *(_QWORD *)(v7 + 136) = *(_QWORD *)(v6 + 1432) << 12;
  v23 = *(_QWORD *)(v6 + 1392) << 12;
  v37 = v23;
  v38 = *(_QWORD *)(v6 + 1400) << 12;
  v24 = v38;
  *(_QWORD *)(v7 + 144) = v23;
  if ( v24 >= v23 )
    v24 = v23;
  *(_QWORD *)(v7 + 8) = v24;
  v32 = *(_QWORD *)(v6 + 792);
  v33 = *(_QWORD *)(v6 + 808);
  *(_QWORD *)(v7 + 160) = v32;
  *(_QWORD *)(v7 + 152) = v33;
  v32 = *(_QWORD *)(v6 + 784);
  v33 = *(_QWORD *)(v6 + 800);
  *(_QWORD *)(v7 + 176) = v32;
  *(_QWORD *)(v7 + 168) = v33;
  v36 = *(_QWORD *)(v6 + 1264) << 12;
  *(_QWORD *)(v7 + 184) = v36;
  *(_QWORD *)(v7 + 192) = *(_QWORD *)(v6 + 1272) << 12;
  *(_QWORD *)(v7 + 200) = v36;
  PsQueryStatisticsProcess(v6, v4);
  *(_QWORD *)(v7 + 24) = v4[3];
  *(_QWORD *)(v7 + 40) = v4[1];
  *(_QWORD *)(v7 + 48) = *v4;
  *(_QWORD *)(v7 + 208) = v4[5];
  *(_QWORD *)(v7 + 216) = v4[6];
  *(_QWORD *)(v7 + 224) = v4[7];
  *(_QWORD *)(v7 + 232) = v4[8];
  *(_QWORD *)(v7 + 240) = v4[9];
  *(_QWORD *)(v7 + 248) = v4[10];
  if ( v5 )
    *(_QWORD *)(v7 + 104) = *(_QWORD *)(v6 + 744);
  return 0LL;
}
