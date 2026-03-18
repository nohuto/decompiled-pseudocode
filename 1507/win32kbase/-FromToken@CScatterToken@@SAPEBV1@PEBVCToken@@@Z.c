/*
 * XREFs of ?FromToken@CScatterToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00DF95C
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0049550 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

const struct CScatterToken *__fastcall CScatterToken::FromToken(const struct CToken *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a1 + 64LL))(a1) == 2 )
    return a1;
  return (const struct CScatterToken *)v2;
}
