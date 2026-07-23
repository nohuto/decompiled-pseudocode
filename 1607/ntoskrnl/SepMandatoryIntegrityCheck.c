/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x1400631D0
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, char a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // eax
  int v7; // ebx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // edx
  int v14; // eax
  unsigned __int8 *v15; // rsi
  __int64 v16; // rax
  __int16 **v17; // rax
  __int16 *v18; // r14
  unsigned __int8 v19; // al
  int v20; // eax
  __int16 v21; // bp
  __int16 v22; // r12
  int v23; // ecx
  int v24; // ecx
  unsigned __int8 v25; // al
  int v26; // ebp
  unsigned int v27; // edx
  unsigned __int8 v28; // al
  char v29; // dl
  unsigned int v30; // r11d
  char v31; // cl
  char v32; // dl
  char v33; // r10
  char v34; // r8
  __int64 result; // rax
  __int64 v36; // rax
  int v37; // r9d
  struct _KTHREAD *CurrentThread; // rax
  int v39; // r8d
  char v40; // [rsp+20h] [rbp-58h]
  char v41; // [rsp+24h] [rbp-54h]
  char v42; // [rsp+28h] [rbp-50h]
  char v43; // [rsp+2Ch] [rbp-4Ch]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_46;
    v10 = *(_WORD *)(a2 + 2);
    if ( (v10 & 0x10) == 0 )
      goto LABEL_46;
    if ( v10 < 0 )
    {
      v36 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v36 )
        goto LABEL_46;
      v11 = a2 + v36;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 24);
    }
    if ( v11 )
    {
      v12 = v11 + 8;
      v13 = 0;
      if ( *(_WORD *)(v11 + 4) )
      {
        while ( *(_BYTE *)v12 != 17 )
        {
          ++v13;
          v12 += *(unsigned __int16 *)(v12 + 2);
          if ( v13 >= *(unsigned __int16 *)(v11 + 4) )
            goto LABEL_46;
        }
        if ( (*(_BYTE *)(v12 + 1) & 8) == 0 )
        {
          v14 = *(_DWORD *)(v12 + 4);
          v15 = (unsigned __int8 *)(v12 + 8);
          v43 = v14;
          goto LABEL_11;
        }
      }
    }
LABEL_46:
    v15 = (unsigned __int8 *)SepDefaultMandatorySid;
    v43 = 1;
LABEL_11:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    v16 = *(unsigned int *)(a4 + 208);
    if ( (_DWORD)v16 == -1 || (v17 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16 * v16)) == 0LL )
      v18 = (__int16 *)SeUntrustedMandatorySid;
    else
      v18 = *v17;
    if ( a5 )
    {
      ExpReleaseResourceForThreadLite(*(_QWORD *)(a4 + 48), (ULONG_PTR)KeGetCurrentThread());
      KeLeaveCriticalRegion();
    }
    v19 = v15[1];
    if ( v19 )
      v20 = *(_DWORD *)&v15[4 * v19 + 4];
    else
      v20 = 0;
    *(_DWORD *)(a6 + 12) = v20;
    v21 = *(_WORD *)v15;
    v22 = *v18;
    if ( *(_WORD *)v15 == *v18 && !memcmp(v15, v18, 4 * (unsigned int)v15[1] + 8) )
    {
      v29 = 1;
      v30 = 0;
      v26 = 0;
LABEL_36:
      if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
      {
        v31 = 1;
        v7 = *a1 | ~*a1 & a1[2] | 0x120000;
        v41 = 1;
        v40 = 1;
        if ( !v29 )
          goto LABEL_51;
        v42 = 1;
        v7 |= a1[3] | 0x11FFFFF;
      }
      else
      {
        v31 = 0;
      }
      if ( v29 )
      {
        v32 = v42;
        v33 = v40;
        goto LABEL_41;
      }
LABEL_51:
      if ( (v43 & 2) != 0 )
        v31 = 0;
      v41 = v31;
      if ( (v43 & 4) != 0 )
        v33 = 0;
      else
        v33 = v40;
      v32 = v42;
      if ( (v43 & 1) != 0 )
        v32 = 0;
      if ( (v43 & 2) != 0 )
      {
        v37 = 0;
        if ( v32 )
          v37 = a1[1] | 0x10D0000;
        if ( v33 )
          v37 |= ~*a1 & a1[2] | 0x100000;
        v7 &= ~(~v37 & 0x20000) & ~(~v37 & *a1);
      }
      if ( (v43 & 4) != 0 )
      {
        v39 = 0;
        if ( v32 )
          v39 = a1[1] | 0x10D0000;
        if ( v31 )
          v39 |= *a1 | 0x20000;
        v7 &= ~(~v39 & 0x100000) & ~(~v39 & ~*a1 & a1[2]);
      }
      if ( (v43 & 1) != 0 )
      {
        if ( v33 )
          v26 = ~*a1 & a1[2] | 0x100000;
        v34 = v31;
        if ( v31 )
          v26 |= *a1 | 0x20000;
        v7 &= ~(~v26 & 0x10D0000) & ~(~v26 & a1[1]);
        goto LABEL_42;
      }
LABEL_41:
      v34 = v41;
LABEL_42:
      if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
        v7 |= 0x80000u;
      goto LABEL_44;
    }
    v23 = *(_DWORD *)(v18 + 1);
    if ( !v23 )
      v23 = (unsigned __int16)v18[3] - 4096;
    if ( v23 )
      goto LABEL_80;
    v24 = *(_DWORD *)(v15 + 2);
    if ( !v24 )
      v24 = *((unsigned __int16 *)v15 + 3) - 4096;
    if ( v24 )
    {
LABEL_80:
      v32 = 0;
      v30 = -1073741811;
      v34 = 0;
      v33 = 0;
LABEL_44:
      result = v30;
      *(_DWORD *)a6 = v7;
      *(_BYTE *)(a6 + 4) = v32;
      *(_BYTE *)(a6 + 5) = v34;
      *(_BYTE *)(a6 + 6) = v33;
      return result;
    }
    if ( v22 == v21 && !memcmp(v18, v15, 4 * (unsigned int)*((unsigned __int8 *)v18 + 1) + 8) )
    {
      v26 = 0;
    }
    else
    {
      v25 = *((_BYTE *)v18 + 1);
      v26 = 0;
      if ( v25 )
        v27 = *(_DWORD *)&v18[2 * v25 + 2];
      else
        v27 = 0;
      v28 = v15[1];
      if ( v28 && v27 < *(_DWORD *)&v15[4 * v28 + 4] )
      {
        v29 = 0;
        goto LABEL_35;
      }
    }
    v29 = 1;
LABEL_35:
    v30 = 0;
    goto LABEL_36;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
