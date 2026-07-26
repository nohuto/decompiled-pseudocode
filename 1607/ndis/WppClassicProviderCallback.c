/*
 * XREFs of WppClassicProviderCallback @ 0x1C004EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisEnableWppTracingCallback @ 0x1C004F1A8 (ndisEnableWppTracingCallback.c)
 */

void __fastcall WppClassicProviderCallback(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax

  if ( (unsigned __int8)a2 <= 1u )
  {
    v4 = 0LL;
    if ( (_BYTE)a2 )
    {
      *(_DWORD *)(a4 + 44) = *((_DWORD *)a3 + 1);
      *(_BYTE *)(a4 + 41) = *((_BYTE *)a3 + 2);
      v4 = *a3;
    }
    else
    {
      *(_BYTE *)(a4 + 41) = 0;
      *(_DWORD *)(a4 + 44) = 0;
    }
    *(_QWORD *)(a4 + 24) = v4;
    LOBYTE(a3) = a2;
    ndisEnableWppTracingCallback(a1, a2, a3, *(unsigned int *)(a4 + 44), *(_BYTE *)(a4 + 41));
  }
}
