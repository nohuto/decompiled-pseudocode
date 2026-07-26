/*
 * XREFs of ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00DE070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDAddProviderToBMGroup(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        struct NDIS_PD_PROVIDER_HANDLE__ *a2)
{
  unsigned int v2; // ebx
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rdi
  char *v6; // r9
  char *v7; // r8
  char **v8; // rax
  char **v9; // rax
  unsigned int v11; // [rsp+20h] [rbp-38h]
  KLockHolder v12; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  for ( i = a2; *((_BYTE *)i + 96); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 10) )
    ;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_qq(0x48u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, a1, a2);
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v12,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  v6 = (char *)i + 24;
  if ( *((_QWORD *)i + 3) )
  {
    v2 = -1073741768;
    goto LABEL_17;
  }
  v7 = (char *)a1 + 32;
  if ( *(char **)v7 != v7 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 7) + 5504LL) + 72LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 32LL)
                                                                                               + 5504LL)
                                                                                   + 72LL) )
    {
      v9 = (char **)*((_QWORD *)a1 + 5);
      *(_QWORD *)v6 = v7;
      *((_QWORD *)i + 4) = v9;
      if ( *v9 != v7 )
        __fastfail(3u);
      *v9 = v6;
      *((_QWORD *)a1 + 5) = v6;
    }
    else
    {
      v2 = -1073740007;
    }
    goto LABEL_17;
  }
  v8 = (char **)*((_QWORD *)a1 + 5);
  *(_QWORD *)v6 = v7;
  *((_QWORD *)i + 4) = v8;
  if ( *v8 != v7 )
    __fastfail(3u);
  *v8 = v6;
  *((_QWORD *)a1 + 5) = v6;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    WPP_SF_qq(
      0x49u,
      &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids,
      a1,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 7) + 5504LL) + 72LL));
LABEL_17:
    if ( (unsigned __int8)byte_1C0085324 >= 4u )
    {
      v11 = v2;
      WPP_SF_qqd(0x4Au, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, a1, a2, v11);
    }
  }
  KLockHolder::~KLockHolder(&v12);
  return v2;
}
