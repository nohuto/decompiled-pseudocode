/*
 * XREFs of IsPointerInputRedirected @ 0x1C01FB9AC
 * Callers:
 *     ArbitratePrimaryStatus @ 0x1C01C7398 (ArbitratePrimaryStatus.c)
 *     IsPointerInputTypeRedirected @ 0x1C01FBA40 (IsPointerInputTypeRedirected.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FCBA8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C008A1E8 (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall IsPointerInputRedirected(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *v10; // rbx

  v5 = 0;
  v6 = 0LL;
  UpdatePointerRedirIsAlive(a2);
  if ( a3 == 2 )
  {
    v10 = (__int64 *)(a2 + 224);
  }
  else
  {
    if ( a3 != 3 )
      goto LABEL_8;
    v10 = (__int64 *)(a2 + 232);
  }
  v6 = *v10;
  if ( v6 && *(_QWORD *)(a1 + 384) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) )
    v6 = 0LL;
LABEL_8:
  if ( a4 )
    *a4 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
