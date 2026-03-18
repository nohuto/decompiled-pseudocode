/*
 * XREFs of ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C000D4A4
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B16F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall ulGetMatchingIndexFromColorref(_DWORD *a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // r9
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  struct PALETTE *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _DWORD *v10; // [rsp+30h] [rbp+10h] BYREF
  __int64 v11; // [rsp+38h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+20h]
  struct PALETTE *v13; // [rsp+48h] [rbp+28h] BYREF

  v11 = a2;
  v10 = a1;
  v12 = a3;
  v3 = a1;
  if ( !a1 || (a1[6] & 0x800) != 0 )
  {
    if ( (a3 & 0x3000000) != 0 )
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        result = (unsigned __int16)a3;
        if ( (unsigned int)(unsigned __int16)a3 >= *(_DWORD *)(a2 + 28) )
          result = 0LL;
      }
      else
      {
        v6 = *(unsigned int *)(a2 + 96);
        HIBYTE(v12) = 0;
        result = XEPALOBJ::ulDispatchGFPEFunction(&v11, v6, v12, a1);
        a2 = v11;
        v3 = v10;
      }
      v7 = ppalDefault;
      if ( (struct PALETTE *)a2 == ppalDefault )
      {
        if ( (unsigned int)result < 0xA )
          return result;
        return (unsigned int)(result + 236);
      }
      if ( v3 )
        v8 = *(_QWORD *)(a2 + 80);
      else
        v8 = *(_QWORD *)(a2 + 72);
      if ( v8 )
        return *(unsigned __int8 *)((unsigned int)result + v8 + 4);
      a3 = *(_DWORD *)(*(_QWORD *)(a2 + 128) + 4LL * (unsigned int)result);
      v12 = a3;
      if ( HIBYTE(a3) == 2 )
        return (unsigned __int8)a3;
    }
    else
    {
      v7 = ppalDefault;
    }
    if ( (a3 & 0x10FF0000) != 0x10FF0000 )
    {
      HIBYTE(v12) = 0;
      result = v12;
      if ( v12 == 0xFFFFFF )
      {
        LODWORD(result) = 19;
      }
      else
      {
        if ( v12 )
        {
          v9 = *((unsigned int *)v7 + 26);
          v13 = v7;
          result = XEPALOBJ::ulDispatchGFPEFunction(&v13, v9, v12, v3);
        }
        if ( (unsigned int)(result - 10) > 0xFFFFFFF4 )
          return result;
      }
      return (unsigned int)(result + 236);
    }
    return (unsigned __int8)a3;
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(a2 + 128)
                         + 4LL
                         * ((unsigned __int16)a3 & (unsigned int)-((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28))));
  }
  else
  {
    if ( (a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned __int8)a3 & (unsigned int)-((unsigned int)(unsigned __int8)a3 < a1[7]);
    HIBYTE(v12) = 0;
    v4 = v12;
  }
  return XEPALOBJ::ulDispatchGFPEFunction(&v10, (unsigned int)a1[26], v4, a1);
}
