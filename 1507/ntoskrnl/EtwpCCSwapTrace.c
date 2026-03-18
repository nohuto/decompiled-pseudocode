/*
 * XREFs of EtwpCCSwapTrace @ 0x1400177F0
 * Callers:
 *     EtwTraceContextSwap @ 0x140017470 (EtwTraceContextSwap.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  struct _KPRCB **v5; // rsi
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r13
  _QWORD *EtwSupport; // r9
  unsigned int *v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // r8
  struct _KPRCB *v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  _DWORD *v16; // rax
  unsigned int v17; // ebp
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  __int64 v22; // rdx
  char *v23; // rcx
  int v24; // eax
  __int64 v25; // rsi
  char v26; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // r14
  __int64 v33; // rax
  __int16 v34; // ax
  struct _KPRCB *v35; // rcx
  unsigned int v36; // ebx
  char v37; // r10
  unsigned int v38; // r9d
  char v39; // al
  unsigned __int16 v40; // cx
  int v41; // eax
  unsigned __int16 v42; // cx
  int Src; // [rsp+30h] [rbp-98h] BYREF
  int v44; // [rsp+34h] [rbp-94h]
  unsigned int v45; // [rsp+38h] [rbp-90h]
  unsigned int v46; // [rsp+3Ch] [rbp-8Ch]
  struct _KPRCB **v47; // [rsp+40h] [rbp-88h]
  __int64 v48; // [rsp+48h] [rbp-80h]
  __int64 v49; // [rsp+50h] [rbp-78h]
  __int64 v50; // [rsp+58h] [rbp-70h]
  _QWORD *v51; // [rsp+60h] [rbp-68h]
  unsigned int *v52; // [rsp+68h] [rbp-60h] BYREF
  int v53; // [rsp+70h] [rbp-58h]
  int v54; // [rsp+74h] [rbp-54h]

  result = KeGetCurrentPrcb();
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v47 = a4;
  v8 = a1;
  v46 = a3;
  EtwSupport = result->EtwSupport;
  v50 = a2;
  v49 = a1;
  v51 = EtwSupport;
  v10 = (unsigned int *)EtwSupport[a3 + 356];
  v48 = a3;
  if ( !v10 )
    return result;
  v11 = 0;
  if ( *v10 )
  {
    v12 = (__int64)*v5 - *((_QWORD *)v10 + 1);
  }
  else
  {
    v12 = 0LL;
    v13 = *v5;
    v10[1] = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)v10 + 1) = v13;
    *v10 = 104;
    *((_QWORD *)v10 + 2) = v13;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 8) = 0LL;
    *((_QWORD *)v10 + 9) = 0LL;
    *((_QWORD *)v10 + 10) = 0LL;
  }
  v14 = *(_DWORD *)(v8 + 1584);
  v15 = 0;
  v45 = v14;
  if ( v14 )
  {
    v16 = v10 + 6;
    while ( *v16 != v14 )
    {
      if ( !*v16 )
      {
        v10[v15 + 6] = v14;
        *((_BYTE *)v10 + v15 + 88) = *(_BYTE *)(v8 + 563);
        break;
      }
      ++v15;
      ++v16;
      if ( v15 >= 0x10 )
        break;
    }
  }
  if ( MEMORY[0xFFFFF78000000320] - v10[1] <= 0x1F4
    && v15 != 16
    && (unsigned __int64)*v10 + 8 <= 0x400
    && v12 <= 0x40000000
    && !*((_BYTE *)EtwSupport + v6 + 2840) )
  {
    goto LABEL_41;
  }
  v17 = EtwpActiveSystemLoggers;
  v52 = v10 + 4;
  v18 = *v10 - 16;
  v54 = 0;
  v19 = !_BitScanForward(&v20, EtwpActiveSystemLoggers);
  v53 = v18;
  if ( v19 )
    goto LABEL_40;
  v21 = v46;
  do
  {
    v22 = v20;
    v17 &= v17 - 1;
    v23 = (char *)&EtwpGroupMasks + 32 * v20;
    if ( !v23 )
      goto LABEL_38;
    v24 = *((_DWORD *)v23 + 1);
    if ( (v24 & 4) == 0 || (v24 & 0x100) == 0 )
      goto LABEL_38;
    v25 = (unsigned __int16)EtwpSystemLogger[2 * v22];
    v26 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      if ( !ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v25], 1u) )
        goto LABEL_24;
      v26 = 1;
    }
    v32 = v25;
    v33 = WmipLoggerContext[v25];
    if ( (v33 & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_38;
      ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v32], 1u);
LABEL_24:
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( v31 )
        goto LABEL_38;
LABEL_35:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v30, v28, v29);
      }
      goto LABEL_38;
    }
    if ( v33 )
    {
      if ( *(_DWORD *)(v33 + 216) == v21 )
        EtwpLogKernelEvent((unsigned int)&v52, v25, 1, 1317, 514);
      if ( v26 )
      {
        ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v32], 1u);
        v30 = KeGetCurrentThread();
        v34 = v30->KernelApcDisable + 1;
        v30->KernelApcDisable = v34;
        if ( !v34 )
          goto LABEL_35;
      }
    }
LABEL_38:
    v19 = !_BitScanForward(&v20, v17);
  }
  while ( !v19 );
  v14 = v45;
  v8 = v49;
  v5 = v47;
  EtwSupport = v51;
  v6 = v48;
  v7 = v50;
LABEL_40:
  v12 = 0LL;
  v35 = *v5;
  v15 = 0;
  v10[1] = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)v10 + 1) = v35;
  *v10 = 104;
  *((_QWORD *)v10 + 2) = v35;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 7) = 0LL;
  *((_QWORD *)v10 + 8) = 0LL;
  *((_QWORD *)v10 + 9) = 0LL;
  *((_QWORD *)v10 + 10) = 0LL;
  *((_BYTE *)EtwSupport + v6 + 2840) = 0;
  v10[6] = v14;
LABEL_41:
  if ( v14 )
  {
    if ( *(_DWORD *)(v7 + 1584) )
      v11 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v7 + 436);
    v37 = *(_BYTE *)(v8 + 195);
    v38 = v37 - *((char *)v10 + v15 + 88);
    if ( v11 > 1 || v12 >= 0x20000 || v38 > 7 )
    {
      Src = (4 * v12) | 3;
      v41 = 0x1FFFF;
      if ( v11 < 0x1FFFF )
        v41 = v11;
      v44 = ((v37 & 0x1F) << 10) ^ ((((unsigned __int8)v15 ^ (unsigned __int8)v44) & 0xF ^ (unsigned __int16)v44) & 0x3FF | (v41 << 15));
      if ( *(_BYTE *)(v8 + 388) == 5 )
        v42 = 16 * *(unsigned __int8 *)(v8 + 643);
      else
        v42 = 16 * *(unsigned __int8 *)(v8 + 388) - 385;
      v36 = 8;
      v44 ^= ((unsigned __int16)v44 ^ v42) & 0x3F0;
    }
    else
    {
      v39 = *(_BYTE *)(v8 + 388);
      Src = ((_DWORD)v12 << 15) | Src & 0x7E00 | (4 * (v15 & 0xF | (16 * (v38 & 7)))) | 2;
      if ( v39 == 5 )
        v40 = *(unsigned __int8 *)(v8 + 643) << 9;
      else
        v40 = (*(unsigned __int8 *)(v8 + 388) << 9) - 12289;
      v36 = 4;
      Src ^= ((unsigned __int16)Src ^ v40) & 0x7E00;
    }
  }
  else if ( v12 >= 0x4000 )
  {
    v36 = 4;
    Src = (4 * v12) | 1;
  }
  else
  {
    v36 = 2;
    LOWORD(Src) = 4 * v12;
  }
  memmove((char *)v10 + *v10, &Src, v36);
  *v10 += v36;
  result = *v5;
  *((_QWORD *)v10 + 1) = *v5;
  return result;
}
