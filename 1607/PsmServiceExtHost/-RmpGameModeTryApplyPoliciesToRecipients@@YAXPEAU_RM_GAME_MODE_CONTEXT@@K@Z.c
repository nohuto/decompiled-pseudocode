/*
 * XREFs of ?RmpGameModeTryApplyPoliciesToRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x180031E30
 * Callers:
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeTryApplyPoliciesToRecipients(struct _RM_GAME_MODE_CONTEXT *a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r12d
  __int64 v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 j; // [rsp+60h] [rbp+8h]
  unsigned int i; // [rsp+68h] [rbp+10h]

  v2 = 0;
  for ( i = 0; v2 < *((_DWORD *)a1 + 16); i = v2 )
  {
    v5 = a2;
    v6 = *((_QWORD *)a1 + 5) + 16LL * v2;
    for ( j = v6; v5; v5 &= ~(1 << v7) )
    {
      _BitScanForward(&v7, v5);
      if ( ((int (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, __int64))*(&off_18003A620 + 4 * (int)v7 + 1))(a1, v6) < 0 )
      {
        if ( v2 )
        {
          v8 = v2;
          v9 = 0LL;
          do
          {
            ((void (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, __int64))*(&off_18003A620 + 4 * v7 + 2))(
              a1,
              v9 + *((_QWORD *)a1 + 5));
            v9 += 16LL;
            --v8;
          }
          while ( v8 );
          v2 = i;
          v6 = j;
        }
        a2 &= ~(1 << v7);
      }
    }
    ++v2;
  }
  *((_DWORD *)a1 + 17) = a2;
}
