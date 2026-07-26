/*
 * XREFs of ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00D9CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C00D7820 (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C00DAB84 (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall NdisPDStartEC(struct PD_CLIENT_HANDLE__ *a1, struct PD_EC_HANDLE__ **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  int ECInstanceName; // edi
  unsigned int CurrentThreadId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct PD_CLIENT_HANDLE__ **v9; // rdx
  struct PD_CLIENT_HANDLE__ *v10; // rax
  KLockHolder v12; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qq(0x5Au, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, KeGetCurrentThread());
  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x6541444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 36) = 0;
    PoolWithTag[19] = 0LL;
    PoolWithTag[20] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    PoolWithTag[7] = 0LL;
    memset(PoolWithTag + 8, 0, 0x40uLL);
    v5[17] = v5 + 16;
    v5[16] = v5 + 16;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v5[3] = a1;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v5 + 10) = CurrentThreadId;
    ECInstanceName = ndisPcwGetECInstanceName(*((void **)a1 + 11), CurrentThreadId, (struct _UNICODE_STRING *)v5 + 3);
    if ( ECInstanceName < 0 )
    {
      NDIS_PD_EC::`scalar deleting destructor'((_UNICODE_STRING *)v5);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v5[4] = CurrentThread;
      ObfReferenceObject(CurrentThread);
      KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v12, (struct KPushLockBase *)(qword_1C00837E0 + 8));
      v9 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 8);
      v10 = (struct PD_CLIENT_HANDLE__ *)(v5 + 1);
      v5[1] = (char *)a1 + 56;
      v5[2] = v9;
      if ( *v9 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 56) )
        __fastfail(3u);
      *v9 = v10;
      *((_QWORD *)a1 + 8) = v10;
      KLockHolder::~KLockHolder(&v12);
      *a2 = (struct PD_EC_HANDLE__ *)v5;
      ECInstanceName = 0;
    }
  }
  else
  {
    ECInstanceName = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qqqL(0x5Bu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, KeGetCurrentThread(), *a2, ECInstanceName);
  return (unsigned int)ECInstanceName;
}
