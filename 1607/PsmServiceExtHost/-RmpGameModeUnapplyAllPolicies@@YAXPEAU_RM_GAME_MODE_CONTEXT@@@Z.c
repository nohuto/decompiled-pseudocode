/*
 * XREFs of ?RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031F38
 * Callers:
 *     RmpGameModeOnHostImportanceChanged @ 0x1800320B0 (RmpGameModeOnHostImportanceChanged.c)
 *     RmpGameModeReapplyCurrentResourceAllotment @ 0x180032144 (RmpGameModeReapplyCurrentResourceAllotment.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RmpGameModeDestroyRecipientArray@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031ADC (-RmpGameModeDestroyRecipientArray@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeUnapplyAllPolicies(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // r15
  unsigned int i; // edi
  int v4; // ebp
  unsigned int j; // r14d
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]

  v1 = *((_QWORD *)a1 + 3);
  if ( *((_DWORD *)a1 + 16) )
  {
    for ( i = *((_DWORD *)a1 + 17); i; i &= v6 )
    {
      _BitScanForward((unsigned int *)&v4, i);
      for ( j = 0; j < *((_DWORD *)a1 + 16); ++j )
        (*(&off_18003A630 + 4 * v4))(
          a1,
          (struct _RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT *)(*((_QWORD *)a1 + 5) + 16LL * j));
      v6 = ~(1 << v4);
      *((_DWORD *)a1 + 17) &= v6;
    }
    RmpGameModeDestroyRecipientArray(a1);
  }
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
    {
      v10 = *(_QWORD *)(v1 + 24);
      v12 = &v10;
      v13 = 8LL;
      TlgWrite(v7, &unk_18004164B, v8, v9, 3u, &pData);
    }
  }
}
