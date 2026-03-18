/*
 * XREFs of ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00751DC
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0026E10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

unsigned int __fastcall ulGetMatchingIndexFromColorref(__int64 a1, struct PALETTE *a2, unsigned int a3)
{
  struct PALETTE *v3; // r9
  unsigned int v4; // r8d
  unsigned int result; // eax
  int v6; // edx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  struct PALETTE *v10; // [rsp+30h] [rbp+10h] BYREF
  struct PALETTE *v11; // [rsp+38h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+20h]
  struct PALETTE *v13; // [rsp+48h] [rbp+28h] BYREF

  v11 = a2;
  v10 = (struct PALETTE *)a1;
  v12 = a3;
  v3 = (struct PALETTE *)a1;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 0x800) != 0 )
  {
    if ( (a3 & 0x3000000) != 0 )
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        result = (unsigned __int16)a3;
        if ( (unsigned int)(unsigned __int16)a3 >= *((_DWORD *)a2 + 7) )
          result = 0;
      }
      else
      {
        v6 = *((_DWORD *)a2 + 24);
        HIBYTE(v12) = 0;
        result = XEPALOBJ::ulDispatchGFPEFunction(&v11, v6, v12);
        a2 = v11;
        v3 = v10;
      }
      v7 = WPP_MAIN_CB.DeviceQueue.1;
      if ( a2 == (struct PALETTE *)WPP_MAIN_CB.DeviceQueue.32 )
      {
        if ( result < 0xA )
          return result;
        goto LABEL_32;
      }
      if ( v3 )
        v8 = *((_QWORD *)a2 + 10);
      else
        v8 = *((_QWORD *)a2 + 9);
      if ( v8 )
        return *(unsigned __int8 *)(result + v8 + 4);
      a3 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 4LL * result);
      v12 = a3;
      if ( HIBYTE(a3) == 2 )
        return (unsigned __int8)a3;
    }
    else
    {
      v7 = WPP_MAIN_CB.DeviceQueue.1;
    }
    if ( (a3 & 0x10FF0000) != 0x10FF0000 )
    {
      HIBYTE(v12) = 0;
      result = v12;
      if ( v12 == 0xFFFFFF )
      {
        result = 19;
      }
      else
      {
        if ( v12 )
        {
          v9 = *(_DWORD *)(*(_QWORD *)&v7 + 100LL);
          v13 = (struct PALETTE *)v7;
          result = XEPALOBJ::ulDispatchGFPEFunction(&v13, v9, v12);
        }
        if ( result - 10 > 0xFFFFFFF4 )
          return result;
      }
LABEL_32:
      result += 236;
      return result;
    }
    return (unsigned __int8)a3;
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    v4 = *(_DWORD *)(*((_QWORD *)a2 + 15)
                   + 4LL
                   * ((unsigned __int16)a3 & (unsigned int)-((unsigned int)(unsigned __int16)a3 < *((_DWORD *)a2 + 7))));
  }
  else
  {
    if ( (a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned int)(unsigned __int8)a3 < *(_DWORD *)(a1 + 28) ? (unsigned __int8)a3 : 0;
    HIBYTE(v12) = 0;
    v4 = v12;
  }
  return XEPALOBJ::ulDispatchGFPEFunction(&v10, *(_DWORD *)(a1 + 100), v4);
}
