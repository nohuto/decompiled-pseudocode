/*
 * XREFs of DwmAsyncWindowNotifyBatchStart @ 0x14034790C
 * Callers:
 *     ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402E6A00 (-IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DwmAsyncWindowNotifyBatchStart(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  int v6; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+24h] [rbp-44h]
  int v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+54h] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    memset_0(&v6, 0, 0x40uLL);
    v6 = 4194328;
    v7 = 0x8000;
    v8 = 1073741917;
    v9 = a2;
    v10 = 1;
    v4 = LpcRequestPort(Object, &v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
