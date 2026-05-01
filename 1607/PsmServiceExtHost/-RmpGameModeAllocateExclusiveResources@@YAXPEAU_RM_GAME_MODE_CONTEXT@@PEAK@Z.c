/*
 * XREFs of ?RmpGameModeAllocateExclusiveResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAK@Z @ 0x1800317A0
 * Callers:
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeAllocateExclusiveResources(struct _RM_GAME_MODE_CONTEXT *a1, unsigned int *a2)
{
  __int64 (__fastcall **v2)(struct _RM_GAME_MODE_CONTEXT *); // r14
  unsigned int v3; // ebx
  unsigned int i; // ebp
  const struct _TlgProvider_t *v7; // rcx
  int v8; // esi
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+60h] [rbp-38h]
  int v16; // [rsp+64h] [rbp-34h]

  *((_DWORD *)a1 + 18) |= 1u;
  v2 = &off_18003A620;
  v3 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v7 = (const struct _TlgProvider_t *)i;
    v8 = 1 << i;
    if ( ((1 << i) & *((_DWORD *)a1 + 14)) == 0 && *v2 )
    {
      if ( (int)(*v2)(a1) < 0 )
        goto LABEL_7;
      *((_DWORD *)a1 + 14) |= v8;
    }
    v3 |= v8;
LABEL_7:
    v2 += 4;
  }
  *((_DWORD *)a1 + 18) &= ~1u;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
  {
    v16 = 0;
    v14 = &v12;
    v12 = v3;
    v15 = 4;
    TlgWrite(v9, &unk_18004160C, v10, v11, 3u, &pData);
  }
  *a2 = v3;
}
