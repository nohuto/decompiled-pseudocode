/*
 * XREFs of ?NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00DE1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateBMGroup(struct PD_CLIENT_HANDLE__ *a1, struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **a2)
{
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  struct KPushLockBase *v8; // rdx
  struct PD_CLIENT_HANDLE__ **v9; // rdx
  struct PD_CLIENT_HANDLE__ *v10; // rax
  KLockThisExclusive v12; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x46u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
  v4 = 0;
  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6D41444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[1] = 0LL;
    v7 = PoolWithTag + 4;
    v7[1] = v7;
    *v7 = v7;
    v6[7] = v6 + 6;
    v6[6] = v6 + 6;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = (struct KPushLockBase *)(qword_1C0089668 + 8);
    v6[3] = a1;
    KLockThisExclusive::KLockThisExclusive(&v12, v8);
    v9 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 6);
    v10 = (struct PD_CLIENT_HANDLE__ *)(v6 + 1);
    if ( *v9 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 40) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a1 + 40;
    v6[2] = v9;
    *v9 = v10;
    *((_QWORD *)a1 + 6) = v10;
    KLockHolder::~KLockHolder(&v12);
    *a2 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v6;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qqd(0x47u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *a2, v4);
  return v4;
}
