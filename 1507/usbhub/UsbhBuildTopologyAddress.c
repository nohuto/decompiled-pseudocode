/*
 * XREFs of UsbhBuildTopologyAddress @ 0x1C0026D10
 * Callers:
 *     UsbhFdoReturnTopologyAddress @ 0x1C0026C7C (UsbhFdoReturnTopologyAddress.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DAB0 (UsbhGetDeviceNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhBuildTopologyAddress(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  _DWORD *v6; // rax
  __int64 v7; // rax
  _WORD *i; // rcx

  v4 = a3;
  v6 = FdoExt(a1, (__int64)a2, a3, a4);
  *a2 = *(_OWORD *)(v6 + 1298);
  a2[1] = *(_OWORD *)(v6 + 1302);
  if ( *((_WORD *)a2 + 8) )
  {
    v7 = 0LL;
    for ( i = (_WORD *)a2 + 9; *i; ++i )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 5 )
        return 0LL;
    }
    *((_WORD *)a2 + v7 + 9) = v4;
  }
  else
  {
    *((_WORD *)a2 + 8) = v4;
  }
  return 0LL;
}
