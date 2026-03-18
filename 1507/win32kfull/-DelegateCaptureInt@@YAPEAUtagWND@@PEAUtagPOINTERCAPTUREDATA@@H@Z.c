/*
 * XREFs of ?DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z @ 0x1C01FC1B0
 * Callers:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01E0928 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F8E54 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall DelegateCaptureInt(struct tagPOINTERCAPTUREDATA *a1, int a2)
{
  int v2; // eax
  __int64 v4; // rdx
  int v5; // eax

  v2 = *((_DWORD *)a1 + 20);
  if ( (v2 & 4) != 0 || (v2 & 8) != 0 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 5);
  if ( !v4 )
    v4 = *((_QWORD *)a1 + 8);
  if ( a2 )
    v5 = v2 | 8;
  else
    v5 = v2 | 4;
  *((_DWORD *)a1 + 20) = v5;
  return (struct tagWND *)v4;
}
