/*
 * XREFs of GetLayeredOrRedirectedParent @ 0x1C00D6500
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00D5880 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLayeredOrRedirectedParent(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  result = a1;
  if ( a1 )
  {
    do
    {
      v2 = *(_DWORD *)(result + 48);
      if ( (v2 & 0x80000) != 0 )
        break;
      if ( (v2 & 0x20000000) != 0 )
        break;
      result = *(_QWORD *)(result + 88);
    }
    while ( result );
    if ( result && result != a1 )
    {
      v3 = *(_QWORD *)(result + 24);
      v4 = 0LL;
      if ( v3 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
          v4 = *(_QWORD *)(v5 + 16);
      }
      if ( result == v4 )
        return 0LL;
    }
  }
  return result;
}
