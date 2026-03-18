/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140131D5C
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140131D04 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140131DDC (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252120 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v8);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        v6 = -1073741811;
        goto LABEL_6;
      }
      v5 = SMKM_STORE<SM_TRAITS>::SmStInSwapStore(a1);
    }
    else
    {
      v5 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
    }
  }
  else
  {
    v5 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
  }
  v6 = v5;
LABEL_6:
  KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
  return v6;
}
