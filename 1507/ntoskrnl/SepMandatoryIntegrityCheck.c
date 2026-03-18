/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x1400CC5F0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, char a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // eax
  int v7; // ebx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int16 **v18; // rax
  __int16 *v19; // r14
  unsigned __int8 v20; // al
  int v21; // eax
  __int16 v22; // bp
  __int16 v23; // r12
  int v24; // ecx
  int v25; // ecx
  unsigned __int8 v26; // al
  int v27; // r11d
  unsigned int v28; // edx
  unsigned __int8 v29; // al
  char v30; // dl
  unsigned int v31; // r10d
  char v32; // cl
  char v33; // al
  char v34; // dl
  char v35; // r8
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  int v40; // r8d
  int v41; // r8d
  char v42; // [rsp+20h] [rbp-48h]
  char v43; // [rsp+21h] [rbp-47h]
  char v44; // [rsp+22h] [rbp-46h]
  char v45; // [rsp+24h] [rbp-44h]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_13;
    v10 = *(_WORD *)(a2 + 2);
    if ( (v10 & 0x10) == 0 )
      goto LABEL_13;
    if ( v10 >= 0 )
    {
      v12 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v11 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v11 )
        goto LABEL_13;
      v12 = a2 + v11;
    }
    if ( v12 )
    {
      v13 = v12 + 8;
      v14 = 0;
      if ( *(_WORD *)(v12 + 4) )
      {
        while ( *(_BYTE *)v13 != 17 )
        {
          ++v14;
          v13 += *(unsigned __int16 *)(v13 + 2);
          if ( v14 >= *(unsigned __int16 *)(v12 + 4) )
            goto LABEL_13;
        }
        if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
        {
          v15 = *(_DWORD *)(v13 + 4);
          v16 = v13 + 8;
          v45 = v15;
          goto LABEL_14;
        }
      }
    }
LABEL_13:
    v16 = SepDefaultMandatorySid;
    v45 = 1;
LABEL_14:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    v17 = *(unsigned int *)(a4 + 208);
    if ( (_DWORD)v17 == -1 || (v18 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16 * v17)) == 0LL )
      v19 = (__int16 *)SeUntrustedMandatorySid;
    else
      v19 = *v18;
    if ( a5 )
    {
      ExpReleaseResourceForThreadLite(*(_QWORD *)(a4 + 48), (ULONG_PTR)KeGetCurrentThread());
      v38 = KeGetCurrentThread();
      v39 = v38->KernelApcDisable + 1;
      v38->KernelApcDisable = v39;
      if ( !v39
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
        && !v38->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v38);
      }
    }
    v20 = *(_BYTE *)(v16 + 1);
    if ( v20 )
      v21 = *(_DWORD *)(v16 + 4LL * ((unsigned int)v20 - 1) + 8);
    else
      v21 = 0;
    *(_DWORD *)(a6 + 12) = v21;
    v22 = *(_WORD *)v16;
    v23 = *v19;
    if ( *(_WORD *)v16 == *v19 && !memcmp((const void *)v16, v19, 4 * (unsigned int)*(unsigned __int8 *)(v16 + 1) + 8) )
    {
      v30 = 1;
      v31 = 0;
      v27 = 0;
LABEL_38:
      if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
      {
        v32 = 1;
        v7 = *a1 | ~*a1 & a1[2] | 0x120000;
        v43 = 1;
        v42 = 1;
        v33 = 1;
        if ( !v30 )
          goto LABEL_48;
        v44 = 1;
        v7 |= a1[3] | 0x11FFFFF;
      }
      else
      {
        v32 = 0;
      }
      if ( v30 )
      {
        v34 = v44;
        v35 = v42;
LABEL_43:
        if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
          v7 |= 0x80000u;
        goto LABEL_45;
      }
      v33 = v42;
LABEL_48:
      if ( (v45 & 2) != 0 )
      {
        v32 = 0;
        v43 = 0;
      }
      if ( (v45 & 4) != 0 )
      {
        v33 = 0;
        v42 = 0;
      }
      if ( (v45 & 1) != 0 )
        v34 = 0;
      else
        v34 = v44;
      if ( (v45 & 2) != 0 )
      {
        v40 = 0;
        if ( v34 )
          v40 = a1[1] | 0x10D0000;
        if ( v33 )
        {
          v40 |= ~*a1 & a1[2] | 0x100000;
          v32 = v43;
        }
        v7 &= ~(~v40 & 0x20000) & ~(~v40 & *a1);
      }
      if ( (v45 & 4) != 0 )
      {
        v41 = 0;
        if ( v34 )
          v41 = a1[1] | 0x10D0000;
        if ( v32 )
          v41 |= *a1 | 0x20000;
        v7 &= ~(~v41 & 0x100000) & ~(~v41 & ~*a1 & a1[2]);
        v32 = v43;
      }
      v35 = v42;
      if ( (v45 & 1) != 0 )
      {
        if ( v42 )
          v27 = ~*a1 & a1[2] | 0x100000;
        if ( v32 )
          v27 |= *a1 | 0x20000;
        v7 &= ~(~v27 & 0x10D0000) & ~(~v27 & a1[1]);
      }
      goto LABEL_43;
    }
    v24 = *(_DWORD *)(v19 + 1);
    if ( !v24 )
      v24 = (unsigned __int16)v19[3] - 4096;
    if ( v24 )
      goto LABEL_77;
    v25 = *(_DWORD *)(v16 + 2);
    if ( !v25 )
      v25 = *(unsigned __int16 *)(v16 + 6) - 4096;
    if ( v25 )
    {
LABEL_77:
      v34 = 0;
      v31 = -1073741811;
      v35 = 0;
LABEL_45:
      result = v31;
      *(_BYTE *)(a6 + 5) = v43;
      *(_DWORD *)a6 = v7;
      *(_BYTE *)(a6 + 4) = v34;
      *(_BYTE *)(a6 + 6) = v35;
      return result;
    }
    if ( v23 == v22 && !memcmp(v19, (const void *)v16, 4 * (unsigned int)*((unsigned __int8 *)v19 + 1) + 8) )
    {
      v27 = 0;
    }
    else
    {
      v26 = *((_BYTE *)v19 + 1);
      v27 = 0;
      if ( v26 )
        v28 = *(_DWORD *)&v19[2 * v26 + 2];
      else
        v28 = 0;
      v29 = *(_BYTE *)(v16 + 1);
      if ( v29 && v28 < *(_DWORD *)(v16 + 4LL * ((unsigned int)v29 - 1) + 8) )
      {
        v30 = 0;
        goto LABEL_37;
      }
    }
    v30 = 1;
LABEL_37:
    v31 = 0;
    goto LABEL_38;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
