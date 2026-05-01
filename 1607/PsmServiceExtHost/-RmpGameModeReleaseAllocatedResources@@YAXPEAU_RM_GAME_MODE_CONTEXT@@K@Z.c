/*
 * XREFs of ?RmpGameModeReleaseAllocatedResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x180031CE8
 * Callers:
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44 (-RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeReleaseAllocatedResources(struct _RM_GAME_MODE_CONTEXT *a1, unsigned int a2)
{
  struct _RM_GAME_MODE_CONTEXT *v3; // rdi
  unsigned int i; // ebp
  unsigned int v5; // ebx
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+64h] [rbp-24h]

  *((_DWORD *)a1 + 18) |= 1u;
  v3 = a1;
  for ( i = a2; i; i &= v6 )
  {
    _BitScanForward(&v5, i);
    (*(&off_18003A638 + 4 * v5))(v3);
    a1 = (struct _RM_GAME_MODE_CONTEXT *)v5;
    v6 = ~(1 << v5);
    *((_DWORD *)v3 + 14) &= v6;
  }
  *((_DWORD *)v3 + 18) &= ~1u;
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
    {
      v14 = 0;
      v12 = &v10;
      v10 = a2;
      v13 = 4;
      TlgWrite(v7, &unk_180041588, v8, v9, 3u, &pData);
    }
  }
}
