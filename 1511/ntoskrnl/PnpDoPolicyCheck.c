/*
 * XREFs of PnpDoPolicyCheck @ 0x1407525C8
 * Callers:
 *     PipInitializeDriverDependentDLLs @ 0x140751248 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x140751FAC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     PnpDiagnosticTraceElamDecision @ 0x140133D80 (PnpDiagnosticTraceElamDecision.c)
 */

char __fastcall PnpDoPolicyCheck(__int64 a1, char a2)
{
  bool v2; // bl
  int v3; // r10d
  bool v5; // zf

  v2 = 0;
  v3 = a1;
  if ( !PnpBootDriverCallbackObject )
    return 1;
  if ( (_DWORD)a1 )
  {
    a1 = (unsigned int)(a1 - 1);
    if ( (_DWORD)a1 )
    {
      a1 = (unsigned int)(a1 - 1);
      if ( (_DWORD)a1 )
      {
        if ( (_DWORD)a1 != 1 )
          goto LABEL_5;
        v5 = (PnpDriverImageLoadPolicy & 2) == 0;
      }
      else
      {
        v5 = (PnpDriverImageLoadPolicy & 4) == 0;
      }
      if ( v5 || !a2 )
        goto LABEL_5;
    }
    v2 = 1;
  }
  else
  {
    LODWORD(a1) = PnpDriverImageLoadPolicy & 1;
    v2 = (PnpDriverImageLoadPolicy & 1) != 0;
  }
LABEL_5:
  PnpDiagnosticTraceElamDecision(a1, v3, PnpDriverImageLoadPolicy, v2);
  return v2;
}
