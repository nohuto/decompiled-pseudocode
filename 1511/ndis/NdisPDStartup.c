/*
 * XREFs of NdisPDStartup @ 0x1C00DB160
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceFilterDriver @ 0x1C0018DA8 (ndisReferenceFilterDriver.c)
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x1C00D77CC (--_GNDIS_PD_CLIENT@@QEAAPEAXI@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00DA5E4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

__int64 __fastcall NdisPDStartup(_NDIS_PROTOCOL_BLOCK *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  char v6; // bp
  unsigned int v10; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  char v15; // al
  struct KPushLockBase *v16; // rdx
  __int64 *i; // rax
  ULONG ClearBitsAndSet; // eax
  _QWORD *v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-48h]
  KLockHolder v24; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qqq(0x13u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, a2, a3);
  *a4 = 0LL;
  if ( (unsigned __int8)(a1->Header.Type - 3) > 1u )
  {
    v10 = -1073741788;
    goto LABEL_31;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x6341444Eu);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[11] = 0LL;
    PoolWithTag[12] = 0LL;
    PoolWithTag[13] = 0LL;
    *((_WORD *)PoolWithTag + 56) = 0;
    PoolWithTag[2] = 0LL;
    PoolWithTag[1] = 0LL;
    v14 = PoolWithTag + 3;
    v14[1] = v14;
    *v14 = v14;
    v13[6] = v13 + 5;
    v13[5] = v13 + 5;
    v13[8] = v13 + 7;
    v13[7] = v13 + 7;
    v13[10] = v13 + 9;
    v13[9] = v13 + 9;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v10 = -1073741670;
    goto LABEL_31;
  }
  if ( a1->Header.Type == 3 )
  {
    v15 = ndisReferenceProtocol((__int64)a1, 0xEu);
  }
  else
  {
    if ( a1->Header.Type != 4 )
      goto LABEL_26;
    v15 = ndisReferenceFilterDriver((__int64)a1);
  }
  if ( v15 )
  {
    v16 = (struct KPushLockBase *)qword_1C00837E0;
    v6 = 1;
    v13[11] = a1;
    v13[12] = a2;
    v13[13] = a3;
    *a4 = v13;
    *a5 = &unk_1C0074DB0;
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v24, v16 + 1);
    for ( i = *(__int64 **)(qword_1C00837E0 + 16); i != (__int64 *)(qword_1C00837E0 + 16); i = (__int64 *)*i )
    {
      if ( (_NDIS_PROTOCOL_BLOCK *)i[10] == a1 )
      {
        v10 = -1073740008;
        goto LABEL_22;
      }
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(qword_1C00837E0 + 32), 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v10 = -1073741618;
LABEL_22:
      KLockHolder::~KLockHolder(&v24);
      goto LABEL_27;
    }
    *((_WORD *)v13 + 56) = ClearBitsAndSet;
    v19 = v13 + 1;
    v20 = qword_1C00837E0 + 16;
    v21 = *(_QWORD **)(qword_1C00837E0 + 24);
    *v19 = qword_1C00837E0 + 16;
    v19[1] = v21;
    if ( *v21 != v20 )
      __fastfail(3u);
    *v21 = v19;
    *(_QWORD *)(v20 + 8) = v19;
    KLockHolder::~KLockHolder(&v24);
    v10 = 0;
    v13 = 0LL;
    v6 = 0;
    goto LABEL_27;
  }
LABEL_26:
  v10 = -1073741436;
LABEL_27:
  if ( v13 )
    NDIS_PD_CLIENT::`scalar deleting destructor'((NDIS_PD_CLIENT *)v13);
  if ( v6 )
    ndisPDDereferenceClientDriver(a1, v12);
LABEL_31:
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    LODWORD(v23) = v10;
    WPP_SF_qqd(0x14u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, *a4, v23);
  }
  return v10;
}
