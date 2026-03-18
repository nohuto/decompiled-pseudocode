/*
 * XREFs of UsbhBuildTopologyAddress @ 0x1C0007380
 * Callers:
 *     UsbhFdoReturnTopologyAddress @ 0x1C00071F4 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004E180 (UsbhGetDeviceNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhBuildTopologyAddress(__int64 a1, _OWORD *a2, __int16 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _WORD *i; // rcx

  v5 = FdoExt(a1);
  *a2 = *(_OWORD *)(v5 + 5192);
  a2[1] = *(_OWORD *)(v5 + 5208);
  if ( *((_WORD *)a2 + 8) )
  {
    v6 = 0LL;
    for ( i = (_WORD *)a2 + 9; *i; ++i )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= 5 )
        return 0LL;
    }
    *((_WORD *)a2 + v6 + 9) = a3;
  }
  else
  {
    *((_WORD *)a2 + 8) = a3;
  }
  return 0LL;
}
