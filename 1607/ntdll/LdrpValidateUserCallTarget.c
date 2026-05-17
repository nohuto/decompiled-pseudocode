/*
 * XREFs of LdrpValidateUserCallTarget @ 0x180096800
 * Callers:
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180087040 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpValidateUserCallTarget(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(qword_180163310 + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) != 0 )
  {
    if ( _bittest64(&v1, v2 | 1) )
      return;
    goto LABEL_5;
  }
  if ( !_bittest64(&v1, v2) )
LABEL_5:
    LdrpHandleInvalidUserCallTarget();
}
