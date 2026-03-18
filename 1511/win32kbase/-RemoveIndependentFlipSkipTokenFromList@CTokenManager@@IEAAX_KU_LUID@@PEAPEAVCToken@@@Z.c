/*
 * XREFs of ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z @ 0x1C00E2828
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E2094 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::RemoveIndependentFlipSkipTokenFromList(
        CTokenManager *this,
        __int64 a2,
        struct _LUID a3,
        struct CToken **a4)
{
  char *v4; // r10
  char *i; // rcx
  struct CToken *v7; // rbx
  char *v8; // rdx
  char **v9; // rax

  *a4 = 0LL;
  v4 = (char *)this + 232;
  for ( i = (char *)*((_QWORD *)this + 29); i != v4; i = *(char **)i )
  {
    v7 = (struct CToken *)(i - 8);
    if ( *(_QWORD *)(*((_QWORD *)i + 3) + 16LL) == a3 )
    {
      v8 = *(char **)i;
      v9 = (char **)*((_QWORD *)i + 1);
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v9 != i )
        __fastfail(3u);
      *v9 = v8;
      *((_QWORD *)v8 + 1) = v9;
      if ( *((_QWORD *)v7 + 5) == a2 )
      {
        *a4 = v7;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v7 + 56LL))((_QWORD *)i - 1);
        (**(void (__fastcall ***)(struct CToken *, __int64))v7)(v7, 1LL);
      }
      return;
    }
  }
}
