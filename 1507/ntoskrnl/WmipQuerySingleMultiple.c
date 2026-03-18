/*
 * XREFs of WmipQuerySingleMultiple @ 0x1406E0D78
 * Callers:
 *     WmipIoControl @ 0x1404A915C (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x1406DFE90 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x14057AD90 (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        IRP *a1,
        KPROCESSOR_MODE a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  unsigned int *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r11
  int v13; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v15; // r14
  int v16; // r15d
  char v17; // r13
  unsigned int *v18; // r8
  _BYTE *v19; // r12
  unsigned int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  unsigned int v24; // esi
  unsigned int *v25; // r13
  void *v26; // rdx
  char *v27; // r8
  unsigned int v28; // eax
  unsigned int *i; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rsi
  char v34; // [rsp+40h] [rbp-338h]
  unsigned int v36; // [rsp+44h] [rbp-334h]
  unsigned __int16 v37; // [rsp+48h] [rbp-330h]
  int v38; // [rsp+50h] [rbp-328h]
  unsigned int v39; // [rsp+54h] [rbp-324h] BYREF
  unsigned int *v40; // [rsp+58h] [rbp-320h]
  int v41; // [rsp+60h] [rbp-318h]
  int v42; // [rsp+64h] [rbp-314h]
  unsigned int v43; // [rsp+68h] [rbp-310h]
  unsigned int v44; // [rsp+6Ch] [rbp-30Ch]
  int v45; // [rsp+70h] [rbp-308h]
  void *Src; // [rsp+78h] [rbp-300h]
  unsigned int *v47; // [rsp+80h] [rbp-2F8h]
  void *v48; // [rsp+88h] [rbp-2F0h]
  void *v49; // [rsp+90h] [rbp-2E8h]
  _DWORD *v50; // [rsp+98h] [rbp-2E0h]
  __int64 v51; // [rsp+A0h] [rbp-2D8h]
  PVOID v52; // [rsp+A8h] [rbp-2D0h]
  PVOID v53; // [rsp+B0h] [rbp-2C8h]
  __int64 v54; // [rsp+B8h] [rbp-2C0h]
  __int64 v55; // [rsp+C0h] [rbp-2B8h]
  __int128 v56; // [rsp+C8h] [rbp-2B0h]
  IRP *v57; // [rsp+D8h] [rbp-2A0h]
  unsigned int *v58; // [rsp+E0h] [rbp-298h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v36 = a4;
  v9 = a3;
  v49 = a3;
  v57 = a1;
  v58 = a3;
  v10 = a6;
  v43 = a6;
  v11 = a7;
  v54 = a7;
  v12 = a8;
  v51 = a8;
  v50 = a9;
  v45 = 0;
  v48 = 0LL;
  v13 = 0;
  v38 = 0;
  if ( a7 )
  {
    v15 = 0LL;
    v53 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * a6, 0x70696D57u);
    v15 = PoolWithTag;
    v53 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, (const void *)(a5 + 8), 24LL * a6);
    else
      v13 = -1073741670;
    v48 = 0LL;
    v9 = (unsigned int *)v49;
    v11 = v54;
    a4 = v36;
    v10 = v43;
    v12 = v51;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  v16 = 0;
  v17 = 0;
  v34 = 0;
  v47 = 0LL;
  v18 = v9;
  v40 = v9;
  v19 = P;
  v52 = P;
  v20 = 580;
  v42 = 580;
  v21 = 0LL;
  while ( 1 )
  {
    v41 = v21;
    if ( (unsigned int)v21 >= v10 )
      break;
    if ( v11 )
    {
      v56 = *(_OWORD *)(v12 + 16 * v21);
      v48 = *(void **)(v11 + 8LL * (unsigned int)v21);
      v55 = 0LL;
      Src = (void *)*((_QWORD *)&v56 + 1);
      v23 = v56;
    }
    else
    {
      v22 = 3 * v21;
      v23 = v15[12 * v21 + 4];
      Src = *(void **)&v15[4 * v22 + 8];
      *((_QWORD *)&v56 + 1) = Src;
      v55 = *(_QWORD *)&v15[4 * v22];
    }
    v37 = v23;
    v24 = (v23 + 73) & 0xFFFFFFF8;
    if ( v17 || a4 < v24 )
    {
      if ( v24 > v20 )
      {
        if ( v19 != P )
          ExFreePoolWithTag(v19, 0);
        v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x70696D57u);
        v52 = v19;
        if ( !v19 )
        {
          v13 = -1073741670;
          break;
        }
        v42 = v24;
      }
      v25 = (unsigned int *)v19;
      v44 = v24;
      v47 = 0LL;
      v34 = 1;
    }
    else
    {
      v25 = v18;
      v44 = a4;
    }
    memset(v25, 0, 0x40uLL);
    v25[11] = 2;
    *v25 = v24;
    *((_QWORD *)v25 + 2) = v55;
    v25[12] = 64;
    v25[14] = v24;
    *((_WORD *)v25 + 32) = v37;
    if ( a2 == 1 && v37 )
    {
      if ( (BYTE8(v56) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = Src;
      v27 = (char *)Src + v37;
      if ( (unsigned __int64)v27 > MmUserProbeAddress || v27 < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v26 = Src;
    }
    memmove((char *)v25 + 66, v26, v37);
    v39 = *v25;
    if ( (int)WmipQuerySetExecuteSI(v48, v57, a2, 1u, (__int64)v25, v44, &v39) < 0 )
      goto LABEL_43;
    v28 = v25[11];
    if ( (v28 & 0x100) != 0 )
      goto LABEL_43;
    ++v38;
    if ( (v28 & 0x20) != 0 )
    {
      v16 += (v25[12] + 7) & 0xFFFFFFF8;
      v17 = 1;
      v34 = 1;
      goto LABEL_44;
    }
    if ( v34 )
    {
      v16 += (v39 + 7) & 0xFFFFFFF8;
LABEL_43:
      v17 = v34;
LABEL_44:
      a4 = v36;
      v18 = v40;
      goto LABEL_45;
    }
    if ( v47 )
      v47[3] = v45;
    for ( i = v25; ; i = (unsigned int *)((char *)i + v30) )
    {
      v47 = i;
      v30 = i[3];
      if ( !(_DWORD)v30 )
        break;
    }
    v31 = (v39 + 7) & 0xFFFFFFF8;
    v16 += v31;
    a4 = v36 - v31;
    v36 -= v31;
    v18 = (unsigned int *)((char *)v40 + v31);
    v40 = v18;
    v45 = (_DWORD)v18 - (_DWORD)i;
    v17 = 0;
LABEL_45:
    v21 = (unsigned int)(v41 + 1);
    v11 = v54;
    v20 = v42;
    v10 = v43;
    v12 = v51;
  }
  v32 = v49;
  if ( v19 != P )
    ExFreePoolWithTag(v19, 0);
  if ( !v38 )
    v13 = -1073741163;
  if ( v13 >= 0 && v17 )
  {
    *v32 = 56;
    v32[11] = 32;
    v32[12] = v16;
    *v50 = 56;
  }
  else
  {
    *v50 = v16;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v13;
}
