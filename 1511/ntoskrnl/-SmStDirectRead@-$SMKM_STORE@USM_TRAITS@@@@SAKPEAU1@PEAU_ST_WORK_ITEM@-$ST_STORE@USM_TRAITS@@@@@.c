/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140109F6C
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14002C3A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400F6FBC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400F744C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(_SLIST_HEADER *a1, __int128 *a2)
{
  unsigned int v2; // ebx
  _KPROCESS *v5; // rcx
  PSLIST_ENTRY Context; // rax
  __int64 v7; // rdi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v11; // xmm1
  __int64 v12; // [rsp+30h] [rbp-98h]
  _QWORD v13[3]; // [rsp+40h] [rbp-88h] BYREF
  int v14; // [rsp+58h] [rbp-70h]
  __int128 v15; // [rsp+60h] [rbp-68h]
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v5 = PsInitialSystemProcess;
    if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
    {
      v7 = v12;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = PsInitialSystemProcess;
  }
  KiStackAttachProcess(v5, 0LL, (__int64)&v16);
  v2 = 2;
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)a1);
  v7 = (__int64)Context;
  if ( Context )
  {
    v8 = *a2;
    v9 = a2[1];
    v13[0] = a1;
    v13[1] = a2;
    v13[2] = Context;
    v2 = 3;
    v15 = v9;
    if ( (int)KeExpandKernelStackAndCalloutInternal(
                (void (__fastcall *)(__int64))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                (__int64)v13,
                0x2000,
                0,
                0LL) >= 0 )
    {
      v2 = 2;
      if ( v14 )
      {
        v2 = 6;
      }
      else
      {
        v11 = v15;
        *a2 = v8;
        a2[1] = v11;
      }
    }
  }
LABEL_7:
  if ( (v2 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v7);
  if ( (v2 & 2) != 0 )
    KiUnstackDetachProcess(&v16, 0LL);
  return (v2 >> 2) & 1;
}
