/*
 * XREFs of ndisPnPIrpFilterResourceRequirements @ 0x1C009FDD4
 * Callers:
 *     ndisPnPDispatch @ 0x1C009FAA0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisMInvokeFilterResourceRequirements @ 0x1C009F8B4 (ndisMInvokeFilterResourceRequirements.c)
 */

__int64 __fastcall ndisPnPIrpFilterResourceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rax
  int v8; // ecx
  int v10; // eax

  v5 = *(_QWORD *)(a3 + 184);
  *(_OWORD *)(v5 - 72) = *(_OWORD *)v5;
  *(_OWORD *)(v5 - 56) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(v5 - 40) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(v5 - 24) = *(_QWORD *)(v5 + 48);
  *(_BYTE *)(v5 - 69) = 0;
  v8 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3896), a3);
  if ( v8 >= 0 )
  {
    v10 = ndisMInvokeFilterResourceRequirements(a2, a3);
    if ( !v10
      || v10 == 259
      || v10 == -2147483643
      || (v8 = -1073741823, v10 == -1073741823)
      || v10 == -1073741670
      || v10 == -1073741637 )
    {
      v8 = v10;
    }
    else
    {
      switch ( v10 )
      {
        case -1073676266:
          v8 = -1073741789;
          break;
        case -1073676268:
          v8 = -1073741306;
          break;
        case -1073676267:
          v8 = -1073741811;
          break;
      }
    }
  }
  *(_DWORD *)(a3 + 48) = v8;
  *a5 = 0;
  return (unsigned int)v8;
}
