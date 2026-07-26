/*
 * XREFs of ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00D98B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     WPP_SF_qddqqS @ 0x1C006CD98 (WPP_SF_qddqqS.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C00D784C (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDPISetReceiveFilter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_FILTER_PARAMETERS *a2,
        struct NDIS_PD_FILTER_HANDLE__ **a3)
{
  _QWORD *v4; // rbx
  wchar_t *v7; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbp
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  size_t v15; // rdi
  PVOID v16; // rax
  int v17; // eax
  struct KPushLockBase *v18; // rdx
  struct NDIS_PD_PROVIDER_HANDLE__ **v19; // r8
  struct NDIS_PD_PROVIDER_HANDLE__ *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v26; // [rsp+20h] [rbp-68h]
  KLockHolder v27; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 96) )
      v7 = L" ";
    WPP_SF_qddqqS(
      (__int64)L" ",
      (__int64)a2,
      (__int64)a1,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 2),
      v7);
  }
  if ( *((_BYTE *)a1 + 96) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ **))(*((_QWORD *)a1 + 11) + 64LL))(
           *((_QWORD *)a1 + 10),
           a2,
           a3);
    if ( v8 >= 0 )
      *((_QWORD *)*a3 + 4) = a1;
    goto LABEL_46;
  }
  *a3 = 0LL;
  if ( *(_BYTE *)a2 != 0x80 )
    goto LABEL_43;
  if ( *((_BYTE *)a2 + 1) != 1 )
    goto LABEL_43;
  if ( *((_WORD *)a2 + 1) < 0x3Cu )
    goto LABEL_43;
  if ( *((_DWORD *)a2 + 1) )
    goto LABEL_43;
  if ( !*((_DWORD *)a2 + 2) )
    goto LABEL_43;
  v9 = *((_QWORD *)a2 + 3);
  if ( !v9 )
    goto LABEL_43;
  v10 = *(_QWORD *)(v9 + 24);
  v11 = *((_QWORD *)a2 + 2);
  if ( *(_DWORD *)(v10 + 160) != 1 || v11 && *(_DWORD *)(v11 + 64) != 3 )
  {
    v8 = -1073741811;
    goto LABEL_46;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6641444Eu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[9] = 0LL;
    PoolWithTag[12] = 0LL;
    PoolWithTag[13] = 0LL;
    PoolWithTag[14] = 0LL;
    PoolWithTag[15] = 0LL;
    *((_DWORD *)PoolWithTag + 32) = 0;
    PoolWithTag[2] = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[8] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[11] = 0LL;
    PoolWithTag[10] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v8 = -1073741670;
    goto LABEL_46;
  }
  v13 = *((unsigned int *)a2 + 12) * (unsigned __int64)*((unsigned int *)a2 + 13);
  if ( v13 > 0xFFFFFFFF || (v14 = *((_DWORD *)a2 + 14), (unsigned int)v13 > v14) )
  {
LABEL_43:
    v8 = -1073741811;
LABEL_44:
    if ( v4 )
      NDIS_PD_FILTER::`scalar deleting destructor'(v4);
    goto LABEL_46;
  }
  if ( v14 )
  {
    v15 = v14;
    v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x6641444Eu);
    v4[14] = v16;
    if ( !v16 )
    {
      v8 = -1073741670;
      goto LABEL_44;
    }
    *((_DWORD *)v4 + 30) = *((_DWORD *)a2 + 12);
    *((_DWORD *)v4 + 31) = *((_DWORD *)a2 + 13);
    *((_DWORD *)v4 + 32) = *((_DWORD *)a2 + 14);
    memmove(v16, *((const void **)a2 + 5), v15);
  }
  if ( v11 )
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v11 + 56);
  v17 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, _QWORD *))(*((_QWORD *)a1 + 11)
                                                                                               + 64LL))(
          *((_QWORD *)a1 + 10),
          a2,
          v4 + 5);
  v8 = v17;
  if ( v11 )
    *((_QWORD *)a2 + 2) = v11;
  if ( v17 < 0 )
    goto LABEL_44;
  v18 = (struct KPushLockBase *)qword_1C00837E0;
  v4[3] = a1;
  *((_DWORD *)v4 + 24) = *((_DWORD *)a2 + 2);
  *((_DWORD *)v4 + 25) = *((_DWORD *)a2 + 3);
  v4[13] = *((_QWORD *)a2 + 4);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v27, v18 + 1);
  v19 = (struct NDIS_PD_PROVIDER_HANDLE__ **)*((_QWORD *)a1 + 24);
  v20 = (struct NDIS_PD_PROVIDER_HANDLE__ *)(v4 + 1);
  v4[1] = (char *)a1 + 184;
  v4[2] = v19;
  if ( *v19 != (struct NDIS_PD_PROVIDER_HANDLE__ *)((char *)a1 + 184) )
    __fastfail(3u);
  *v19 = v20;
  *((_QWORD *)a1 + 24) = v20;
  v21 = v4 + 10;
  v22 = *(_QWORD **)(v10 + 224);
  v4[10] = v10 + 216;
  v4[11] = v22;
  if ( *v22 != v10 + 216 )
    __fastfail(3u);
  *v22 = v21;
  *(_QWORD *)(v10 + 224) = v21;
  if ( v11 )
  {
    v4[6] = v11;
    v23 = *(_QWORD **)(v11 + 88);
    v24 = v4 + 7;
    v4[7] = v11 + 80;
    v4[8] = v23;
    if ( *v23 != v11 + 80 )
      __fastfail(3u);
    *v23 = v24;
    *(_QWORD *)(v11 + 88) = v24;
    ++*(_DWORD *)(v11 + 96);
  }
  KLockHolder::~KLockHolder(&v27);
  *a3 = (struct NDIS_PD_FILTER_HANDLE__ *)v4;
LABEL_46:
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    LODWORD(v26) = v8;
    WPP_SF_qqd(0x31u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, *a3, v26);
  }
  return (unsigned int)v8;
}
