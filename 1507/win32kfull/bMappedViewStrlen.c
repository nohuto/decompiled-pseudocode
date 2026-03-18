/*
 * XREFs of bMappedViewStrlen @ 0x1C01488B8
 * Callers:
 *     bVerifyVTFD @ 0x1C01473B4 (bVerifyVTFD.c)
 *     bBMFDIFIMETRICS @ 0x1C014812C (bBMFDIFIMETRICS.c)
 *     bGetFntResource @ 0x1C01487AC (bGetFntResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMappedViewStrlen(unsigned __int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  _BYTE *v5; // rdx
  _BYTE *v6; // rax

  v4 = 0;
  if ( a4 )
    *a4 = 0LL;
  v5 = (_BYTE *)(a1 + a2);
  if ( (unsigned __int64)a3 >= a1 && a3 < v5 )
  {
    v6 = a3;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      if ( a4 )
        *a4 = v6 - a3;
      return 1;
    }
  }
  return v4;
}
