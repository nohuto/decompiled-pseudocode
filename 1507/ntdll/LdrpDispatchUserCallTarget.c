/*
 * XREFs of LdrpDispatchUserCallTarget @ 0x180083CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrpDispatchUserCallTarget()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r11
  unsigned __int64 v2; // r10

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.Wow64SharedInformation[9] + 8 * (v0 >> 9));
  v2 = v0 >> 3;
  if ( (v0 & 0xF) != 0 )
  {
    if ( _bittest64(&v1, v2 | 1) )
      goto LABEL_3;
  }
  else if ( _bittest64(&v1, v2) )
  {
LABEL_3:
    ((void (*)(void))v0)();
    return;
  }
  LdrpHandleInvalidUserCallTarget();
}
