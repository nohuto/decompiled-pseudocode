/*
 * XREFs of ndisImmediateReadWritePort @ 0x1C00C8034
 * Callers:
 *     NdisImmediateReadPortUchar @ 0x1C00C7B40 (NdisImmediateReadPortUchar.c)
 *     NdisImmediateReadPortUlong @ 0x1C00C7B60 (NdisImmediateReadPortUlong.c)
 *     NdisImmediateReadPortUshort @ 0x1C00C7B80 (NdisImmediateReadPortUshort.c)
 *     NdisImmediateWritePortUchar @ 0x1C00C7BC0 (NdisImmediateWritePortUchar.c)
 *     NdisImmediateWritePortUlong @ 0x1C00C7BF0 (NdisImmediateWritePortUlong.c)
 *     NdisImmediateWritePortUshort @ 0x1C00C7C20 (NdisImmediateWritePortUshort.c)
 * Callees:
 *     ndisTranslateResources @ 0x1C00ABB28 (ndisTranslateResources.c)
 *     ndisEndMapping @ 0x1C00C801C (ndisEndMapping.c)
 *     ndisStartMapping @ 0x1C00C825C (ndisStartMapping.c)
 */

char __fastcall ndisImmediateReadWritePort(__int64 a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, char a5)
{
  __int64 v5; // rcx
  int v9; // r15d
  int v10; // r12d
  int started; // eax
  char v12; // r8
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  void *v15; // [rsp+80h] [rbp+30h] BYREF
  char v16; // [rsp+88h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v14 = 0LL;
  v9 = *(_DWORD *)(v5 + 3768);
  v10 = *(_DWORD *)(v5 + 3772);
  v16 = 0;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 1u:
        *a3 = -1;
        break;
      case 2u:
        *(_WORD *)a3 = -1;
        break;
      case 4u:
        *(_DWORD *)a3 = -1;
        break;
    }
  }
  started = ndisTranslateResources(v5, 1, a2, &v15, &v14);
  if ( !started )
  {
    if ( v14 )
    {
      v12 = 0;
    }
    else
    {
      started = ndisStartMapping(v9, v10, a2, a4, v9 != 0, (__int64)&v15, (__int64)&v16);
      if ( started < 0 )
        return started;
      v12 = v16;
    }
    if ( a5 )
    {
      if ( a4 == 1 )
      {
        LOBYTE(started) = __inbyte((unsigned __int16)v15);
        *a3 = started;
      }
      else
      {
        LOBYTE(started) = a4 - 2;
        if ( a4 == 2 )
        {
          LOWORD(started) = __inword((unsigned __int16)v15);
          *(_WORD *)a3 = started;
        }
        else if ( a4 == 4 )
        {
          started = __indword((unsigned __int16)v15);
          *(_DWORD *)a3 = started;
        }
      }
    }
    else if ( a4 == 1 )
    {
      LOBYTE(started) = *a3;
      __outbyte((unsigned __int16)v15, *a3);
    }
    else
    {
      LOBYTE(started) = a4 - 2;
      if ( a4 == 2 )
      {
        LOWORD(started) = *(_WORD *)a3;
        __outword((unsigned __int16)v15, *(_WORD *)a3);
      }
      else if ( a4 == 4 )
      {
        started = *(_DWORD *)a3;
        __outdword((unsigned __int16)v15, *(_DWORD *)a3);
      }
    }
    if ( v12 )
      LOBYTE(started) = ndisEndMapping(v15, a4, v12);
  }
  return started;
}
