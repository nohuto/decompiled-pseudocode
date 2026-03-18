/*
 * XREFs of ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B468C
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0042BD0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall XEPALOBJ::vGetEntriesFrom(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // r9d
  unsigned __int16 *v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  _UNKNOWN *retaddr; // [rsp+10h] [rbp+0h] BYREF
  __int64 v16; // [rsp+28h] [rbp+18h]
  unsigned int v17; // [rsp+38h] [rbp+28h]

  result = (unsigned __int64)&retaddr;
  v16 = a3;
  v7 = *(_DWORD *)(a2 + 28);
  v8 = a2;
  if ( (*(_DWORD *)(a3 + 24) & 0x800) != 0 )
    v9 = *(_DWORD *)(a3 + 28);
  else
    v9 = 0;
  v10 = a5;
  if ( a5 )
  {
    v11 = (unsigned __int16 *)(a4 + 2LL * a5);
    v12 = 4LL * a5;
    while ( 1 )
    {
      --v11;
      --v10;
      v13 = *v11;
      v12 -= 4LL;
      if ( v13 >= v7 )
        v13 %= v7;
      v14 = *(_DWORD *)(*(_QWORD *)(v8 + 128) + 4LL * v13);
      v17 = v14;
      if ( HIBYTE(v14) == 2 )
      {
        if ( v9 )
        {
          v14 = (unsigned __int16)v14;
          if ( (unsigned __int16)v17 >= v9 )
            v14 = (unsigned __int16)v17 % v9;
          v17 = *(_DWORD *)(*(_QWORD *)(a3 + 128) + 4LL * v14);
        }
        else
        {
          v17 = apalVGA[v14 & 0xF];
        }
      }
      HIBYTE(v17) = 0;
      result = v17;
      *(_DWORD *)(v12 + *(_QWORD *)(*(_QWORD *)a1 + 128LL)) = v17;
      if ( !v10 )
        break;
      a3 = v16;
      v8 = a2;
    }
  }
  return result;
}
