/*
 * XREFs of ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00D7E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_qdqxqd @ 0x1C006CEE0 (WPP_SF_qdqxqd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00D7880 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDAllocateMemory(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        void **a5,
        struct PD_MEMORY_HANDLE__ **a6)
{
  __int64 v8; // rcx
  _QWORD *v10; // rbx
  char *v13; // rax
  int v14; // edi
  __int64 v15; // rdi
  _QWORD *PoolWithTag; // rax
  int v17; // eax
  struct KPushLockBase *v18; // rdx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v19; // rdx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *v20; // rax
  __int64 v21; // rdx
  KLockHolder v23; // [rsp+40h] [rbp-48h] BYREF
  struct PD_MEMORY_HANDLE__ **v24; // [rsp+B8h] [rbp+30h]

  v8 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    WPP_SF_qdD(0x56u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)a1, *a3, a2);
    v8 = 0LL;
  }
  *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a4 )
    a4->QuadPart = 0LL;
  v13 = (char *)a1 + 32;
  if ( *(char **)v13 == v13 )
  {
    v14 = -1073741808;
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 32LL) + 5488LL) + 72LL);
    v24 = (struct PD_MEMORY_HANDLE__ **)v15;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D41444Eu);
    v8 = 0LL;
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *((_DWORD *)PoolWithTag + 8) = 0;
      PoolWithTag[6] = 0LL;
      PoolWithTag[7] = 0LL;
      PoolWithTag[8] = 0LL;
      PoolWithTag[9] = 0LL;
      *((_DWORD *)PoolWithTag + 20) = 0x80000000;
      PoolWithTag[2] = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[5] = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD *))(v15 + 88))(
              *(_QWORD *)(v15 + 32),
              0LL,
              a2,
              *a3,
              v10 + 5,
              v10 + 6);
      v8 = 0LL;
      v14 = v17;
      if ( v17 >= 0 )
      {
        v18 = (struct KPushLockBase *)qword_1C00837E0;
        v10[3] = v24;
        *((_DWORD *)v10 + 8) = *a3;
        *((_DWORD *)v10 + 20) = a2;
        KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v23, v18 + 1);
        v19 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 7);
        v20 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)(v10 + 1);
        v10[1] = (char *)a1 + 48;
        v10[2] = v19;
        if ( *v19 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 48) )
          __fastfail(3u);
        *v19 = v20;
        *((_QWORD *)a1 + 7) = v20;
        KLockHolder::~KLockHolder(&v23);
        v8 = 0LL;
        if ( a4 )
          *a4 = (union _LARGE_INTEGER)v10[5];
        if ( a5 )
          *a5 = (void *)v10[6];
        *a6 = (struct PD_MEMORY_HANDLE__ *)v10;
        v14 = 0;
      }
    }
    else
    {
      v14 = -1073741670;
    }
  }
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    if ( v14 < 0 )
      v21 = 0LL;
    else
      v21 = v10[5];
    if ( v14 >= 0 )
      v8 = v10[6];
    WPP_SF_qdqxqd(v8, v21, (__int64)a1, *a3);
  }
  if ( v14 < 0 && v10 )
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v10);
  return (unsigned int)v14;
}
