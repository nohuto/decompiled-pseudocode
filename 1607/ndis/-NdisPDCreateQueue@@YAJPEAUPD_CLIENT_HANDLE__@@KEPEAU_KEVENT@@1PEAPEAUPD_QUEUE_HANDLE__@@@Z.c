/*
 * XREFs of ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00DE2E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     WPP_SF_qddqq @ 0x1C00718E4 (WPP_SF_qddqq.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateQueue(
        struct PD_CLIENT_HANDLE__ *a1,
        __int64 a2,
        char a3,
        struct _KEVENT *a4,
        struct _KEVENT *a5,
        _QWORD *Size)
{
  unsigned int v8; // esi
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  struct KPushLockBase *v17; // rdx
  struct PD_CLIENT_HANDLE__ **v18; // rcx
  KLockThisExclusive v20; // [rsp+40h] [rbp-48h] BYREF
  size_t Sizea; // [rsp+B8h] [rbp+30h]

  v8 = a2;
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qddqq((__int64)a1, a2, (__int64)a1, a2);
  v11 = 0;
  *Size = 0LL;
  if ( v8 > 0x7FFFFFFF || (v12 = v8 + 1, ((unsigned int)v12 & v8) != 0) )
  {
    v11 = -1073741811;
  }
  else
  {
    v13 = 8 * v12;
    if ( v13 > 0xFFFFFFFF || (v14 = v13 + 192, (int)v13 + 192 < (unsigned int)v13) )
    {
      v11 = -1073741675;
    }
    else
    {
      Sizea = v14;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x7141444Eu);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Sizea);
        v17 = (struct KPushLockBase *)(qword_1C0089668 + 8);
        v16[13] = v8;
        *((_BYTE *)v16 + 24) = a3;
        *((_QWORD *)v16 + 4) = a5;
        *((_QWORD *)v16 + 5) = a4;
        *((_QWORD *)v16 + 2) = a1;
        KLockThisExclusive::KLockThisExclusive(&v20, v17);
        v18 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 10);
        if ( *v18 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 72) )
          __fastfail(3u);
        *((_QWORD *)v16 + 1) = v18;
        *(_QWORD *)v16 = (char *)a1 + 72;
        *v18 = (struct PD_CLIENT_HANDLE__ *)v16;
        *((_QWORD *)a1 + 10) = v16;
        KLockHolder::~KLockHolder(&v20);
        *Size = v16;
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qqd(0x5Fu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *Size, v11);
  return v11;
}
