/*
 * XREFs of ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00DD9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     WPP_SF_qdddD @ 0x1C007187C (WPP_SF_qdddD.c)
 *     WPP_SF_qdqd @ 0x1C0071A18 (WPP_SF_qdqd.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00DD740 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1C00E08EC (-ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z.c)
 */

__int64 __fastcall NdisPDAllocateBufferSet(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int *a4,
        unsigned int a5,
        struct PD_BUFFER_SET_HANDLE__ **a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned int v14; // r12d
  char *v16; // rax
  int v17; // edi
  int *v18; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rbx
  PVOID v22; // rax
  unsigned __int8 *v23; // r9
  union _LARGE_INTEGER v24; // r8
  struct _PD_BUFFER **v25; // rcx
  unsigned int v26; // r13d
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  struct KPushLockBase *v29; // rdx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *v30; // rsi
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v31; // rcx
  unsigned int v32[2]; // [rsp+28h] [rbp-90h]
  unsigned int v33; // [rsp+40h] [rbp-78h]
  _QWORD *v34; // [rsp+48h] [rbp-70h]
  _QWORD *v35; // [rsp+50h] [rbp-68h] BYREF
  KLockThisExclusive v36; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+8h]
  int v38; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v39; // [rsp+D0h] [rbp+18h]
  struct PD_BUFFER_SET_HANDLE__ **v41; // [rsp+E8h] [rbp+30h]

  v6 = *a4;
  v10 = (a2 + 63) & 0xFFFFFFC0;
  HIDWORD(v13) = 0;
  v37 = v10;
  v11 = 0LL;
  v39 = (a3 + 63) & 0xFFC0;
  v12 = v39 + v10 + 128;
  v35 = 0LL;
  LODWORD(v13) = 0x200000 % v12;
  v14 = 0x200000 / v12;
  v33 = 0x200000 / v12;
  v38 = 0;
  v34 = &v35;
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qdddD(a3, v13, (__int64)a1, a2, a3, v6, a5);
  v16 = (char *)a1 + 32;
  *a6 = 0LL;
  if ( *(char **)v16 == v16 )
  {
    v17 = -1073741808;
LABEL_5:
    v18 = (int *)a4;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v16 + 32LL);
  v41 = *(struct PD_BUFFER_SET_HANDLE__ ***)(*(_QWORD *)(v10 + 5664) + 72LL);
  if ( a2 > 0x7FFFFFFF || !v6 || a3 > 0xFFC0u )
  {
    v17 = -1073741811;
LABEL_25:
    while ( v11 )
    {
      v27 = v11 + 9;
      v28 = v11;
      v11 = (_QWORD *)v11[9];
      *v27 = 0LL;
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v28);
    }
    goto LABEL_5;
  }
  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D41444Eu);
    v21 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *((_DWORD *)PoolWithTag + 8) = 0;
      PoolWithTag[6] = 0LL;
      *((_DWORD *)PoolWithTag + 14) = 0;
      *((_DWORD *)PoolWithTag + 15) = 0;
      PoolWithTag[8] = 0LL;
      PoolWithTag[9] = 0LL;
      *((_DWORD *)PoolWithTag + 20) = 0x80000000;
      PoolWithTag[2] = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[5] = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v21 )
      goto LABEL_24;
    v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v14, 0x6D41444Eu);
    v21[8] = v22;
    if ( !v22 )
    {
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v21);
LABEL_24:
      v17 = -1073741670;
      goto LABEL_25;
    }
    *((_DWORD *)v21 + 14) = v14;
    v17 = ((__int64 (__fastcall *)(struct PD_BUFFER_SET_HANDLE__ *, _QWORD, _QWORD, __int64))v41[11])(
            v41[4],
            0LL,
            a5,
            0x200000LL);
    if ( v17 < 0 )
    {
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v21);
      goto LABEL_25;
    }
    v23 = (unsigned __int8 *)v21[6];
    v14 = v33;
    v24 = (union _LARGE_INTEGER)v21[5];
    v25 = (struct _PD_BUFFER **)v21[8];
    v21[3] = v41;
    *((_DWORD *)v21 + 20) = a5;
    *((_DWORD *)v21 + 8) = 0x200000;
    ndisPDInitializePDBuffers(v25, v33, v24, v23, (_DWORD)v21 + 40, v37, v39);
    v26 = v33 + v38;
    v38 += v33;
    *v34 = v21;
    v34 = v21 + 9;
    v11 = v35;
    if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    {
      v32[0] = v33;
      WPP_SF_qqqL(0x50u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, v35, v21, *(_QWORD *)v32);
    }
  }
  while ( v26 < v6 );
  v17 = 0;
  v18 = (int *)a4;
  v29 = (struct KPushLockBase *)(qword_1C0089668 + 8);
  *a4 = v26;
  *a6 = (struct PD_BUFFER_SET_HANDLE__ *)v11;
  KLockThisExclusive::KLockThisExclusive(&v36, v29);
  v30 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)(v11 + 1);
  v31 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 7);
  if ( *v31 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 48) )
    __fastfail(3u);
  *((_QWORD *)v30 + 1) = v31;
  *(_QWORD *)v30 = (char *)a1 + 48;
  *v31 = v30;
  *((_QWORD *)a1 + 7) = v30;
  KLockHolder::~KLockHolder(&v36);
LABEL_6:
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qdqd(v10, v13, (__int64)a1, *v18);
  return (unsigned int)v17;
}
