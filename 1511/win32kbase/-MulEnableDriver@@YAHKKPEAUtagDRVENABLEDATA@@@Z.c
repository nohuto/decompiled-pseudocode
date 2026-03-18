/*
 * XREFs of ?MulEnableDriver@@YAHKKPEAUtagDRVENABLEDATA@@@Z @ 0x1C00B7160
 * Callers:
 *     <none>
 * Callees:
 *     IsMulGetAdditionalFunctionTableSupported_0 @ 0x1C0001398 (IsMulGetAdditionalFunctionTableSupported_0.c)
 *     MulGetAdditionalFunctionTable_0 @ 0x1C00013A0 (MulGetAdditionalFunctionTable_0.c)
 */

__int64 __fastcall MulEnableDriver(__int64 a1, __int64 a2, struct tagDRVENABLEDATA *a3)
{
  _OWORD *v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h]
  _OWORD *v8; // [rsp+48h] [rbp+20h]

  if ( RtlRunOnceBeginInitialize(&gMulEnableDriverInit, 0, 0LL) == 259 )
  {
    if ( (int)IsMulGetAdditionalFunctionTableSupported_0() >= 0 )
    {
      MulGetAdditionalFunctionTable_0();
      if ( v7 )
      {
        v4 = v8;
        v5 = v7;
        do
        {
          *(_OWORD *)((char *)v4 + &unk_1C01024D0 - (_UNKNOWN *)v8) = *v4;
          ++v4;
          --v5;
        }
        while ( v5 );
      }
      gcdrvfnMulti += v7;
    }
    RtlRunOnceComplete(&gMulEnableDriverInit, 0, 0LL);
  }
  a3->iDriverVersion = 196608;
  a3->pdrvfn = (DRVFN *)&gadrvfnMulti;
  result = 1LL;
  a3->c = gcdrvfnMulti;
  return result;
}
