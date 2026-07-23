/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401400E0
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400DAF78 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400DB838 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140140244 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(_SLIST_HEADER *a1, __int128 *a2)
{
  unsigned int v2; // ebx
  _KPROCESS *v5; // rcx
  PSLIST_ENTRY Context; // rax
  __int64 v7; // rdi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // esi
  __int128 v12; // xmm1
  __int64 v13; // [rsp+30h] [rbp-98h]
  _QWORD v14[3]; // [rsp+40h] [rbp-88h] BYREF
  int v15; // [rsp+58h] [rbp-70h]
  __int128 v16; // [rsp+60h] [rbp-68h]
  _BYTE v17[48]; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v5 = PsInitialSystemProcess;
    if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
    {
      v7 = v13;
      goto LABEL_16;
    }
  }
  else
  {
    v5 = PsInitialSystemProcess;
  }
  KiStackAttachProcess(v5, 0, (__int64)v17);
  v2 = 2;
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)a1);
  v7 = (__int64)Context;
  if ( !Context )
  {
LABEL_16:
    v10 = v13;
    goto LABEL_7;
  }
  v8 = *a2;
  v9 = a2[1];
  v14[0] = a1;
  v14[1] = a2;
  v14[2] = Context;
  v2 = 3;
  v16 = v9;
  v10 = KeExpandKernelStackAndCalloutInternal(
          (void (__fastcall *)(__int64))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
          (__int64)v14,
          0x2000,
          0,
          0LL);
  if ( v10 >= 0 )
  {
    if ( v15 == -1073741550 )
    {
      v12 = v16;
      *a2 = v8;
      a2[1] = v12;
    }
    else
    {
      v10 = v15;
      v2 = 7;
    }
  }
LABEL_7:
  if ( (v2 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v7);
  if ( ((v2 >> 2) & 1) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(a1, a2, (unsigned int)v10);
  if ( (v2 & 2) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
  return (v2 >> 2) & 1;
}
