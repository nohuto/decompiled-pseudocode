/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x14008C7D0
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, __int64 a3, ULONG_PTR a4, char a5, __int64 a6)
{
  int v6; // eax
  int v7; // ebx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // edx
  int v15; // eax
  unsigned __int8 *v16; // rsi
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
  int v27; // r9d
  unsigned int v28; // edx
  unsigned __int8 v29; // al
  char v30; // dl
  unsigned int v31; // esi
  char v32; // cl
  char v33; // dl
  char v34; // r10
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v37; // r11d
  int v38; // r8d
  char v39; // [rsp+20h] [rbp-48h]
  char v40; // [rsp+21h] [rbp-47h]
  char v41; // [rsp+22h] [rbp-46h]
  char v42; // [rsp+24h] [rbp-44h]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v41 = 0;
  v39 = 0;
  v40 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    if ( (_BYTE)a3 )
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
          v16 = (unsigned __int8 *)(v13 + 8);
          v42 = v15;
          goto LABEL_14;
        }
      }
    }
LABEL_13:
    v16 = (unsigned __int8 *)SepDefaultMandatorySid;
    v42 = 1;
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
      ExpReleaseResourceForThreadLite(*(_QWORD *)(a4 + 48), (ULONG_PTR)KeGetCurrentThread(), a3, a4);
      KeLeaveCriticalRegion();
    }
    v20 = v16[1];
    if ( v20 )
      v21 = *(_DWORD *)&v16[4 * v20 + 4];
    else
      v21 = 0;
    *(_DWORD *)(a6 + 12) = v21;
    v22 = *(_WORD *)v16;
    v23 = *v19;
    if ( *(_WORD *)v16 == *v19 && !memcmp(v16, v19, 4 * (unsigned int)v16[1] + 8) )
    {
      v30 = 1;
      v27 = 0;
      v31 = 0;
LABEL_39:
      if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
      {
        v32 = 1;
        v7 = *a1 | ~*a1 & a1[2] | 0x120000;
        v39 = 1;
        v40 = 1;
        if ( !v30 )
          goto LABEL_49;
        v41 = 1;
        v7 |= a1[3] | 0x11FFFFF;
      }
      else
      {
        v32 = 0;
      }
      if ( v30 )
      {
        v33 = v41;
        v34 = v40;
LABEL_44:
        if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
          v7 |= 0x80000u;
        goto LABEL_46;
      }
LABEL_49:
      if ( (v42 & 2) != 0 )
      {
        v32 = 0;
        v39 = 0;
      }
      if ( (v42 & 4) != 0 )
        v34 = 0;
      else
        v34 = v40;
      if ( (v42 & 1) != 0 )
        v33 = 0;
      else
        v33 = v41;
      if ( (v42 & 2) != 0 )
      {
        v37 = 0;
        if ( v33 )
          v37 = a1[1] | 0x10D0000;
        if ( v34 )
        {
          v37 |= ~*a1 & a1[2] | 0x100000;
          v32 = v39;
        }
        v7 &= ~(~v37 & 0x20000) & ~(~v37 & *a1);
      }
      if ( (v42 & 4) != 0 )
      {
        v38 = 0;
        if ( v33 )
          v38 = a1[1] | 0x10D0000;
        if ( v32 )
          v38 |= *a1 | 0x20000;
        v7 &= ~(~v38 & 0x100000) & ~(~v38 & ~*a1 & a1[2]);
        v32 = v39;
      }
      if ( (v42 & 1) != 0 )
      {
        if ( v34 )
          v27 = ~*a1 & a1[2] | 0x100000;
        if ( v32 )
          v27 |= *a1 | 0x20000;
        v7 &= ~(~v27 & 0x10D0000) & ~(~v27 & a1[1]);
      }
      goto LABEL_44;
    }
    v24 = *(_DWORD *)(v19 + 1);
    if ( !v24 )
      v24 = (unsigned __int16)v19[3] - 4096;
    if ( v24 )
      goto LABEL_74;
    v25 = *(_DWORD *)(v16 + 2);
    if ( !v25 )
      v25 = *((unsigned __int16 *)v16 + 3) - 4096;
    if ( v25 )
    {
LABEL_74:
      v33 = 0;
      v31 = -1073741811;
      v34 = 0;
LABEL_46:
      result = v31;
      *(_BYTE *)(a6 + 5) = v39;
      *(_DWORD *)a6 = v7;
      *(_BYTE *)(a6 + 4) = v33;
      *(_BYTE *)(a6 + 6) = v34;
      return result;
    }
    if ( v23 == v22 && !memcmp(v19, v16, 4 * (unsigned int)*((unsigned __int8 *)v19 + 1) + 8) )
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
      v29 = v16[1];
      if ( v29 && v28 < *(_DWORD *)&v16[4 * v29 + 4] )
      {
        v30 = 0;
        goto LABEL_38;
      }
    }
    v30 = 1;
LABEL_38:
    v31 = 0;
    goto LABEL_39;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
