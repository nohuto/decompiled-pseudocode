/*
 * XREFs of IopRetestConfiguration @ 0x14062C9C4
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14055634C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     PnpLookupArbitersNewResources @ 0x140556538 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopRetestConfiguration(__int64 a1, unsigned int a2, _QWORD **a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rbx
  _QWORD *v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a3;
  result = 0LL;
  while ( v3 != a3 )
  {
    v8 = v3 - 11;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v8 + 105) )
    {
      v9 = v8[3];
      v11 = 0;
      v12[0] = 0LL;
      v10 = v8 + 5;
      PnpLookupArbitersNewResources(a1, a2, v8[4], *((_BYTE *)v8 + 16), v12, &v11);
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD **))(v9 + 32))(*(_QWORD *)(v9 + 8), 1LL, &v10);
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
