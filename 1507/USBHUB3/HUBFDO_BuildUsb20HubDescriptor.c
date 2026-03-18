/*
 * XREFs of HUBFDO_BuildUsb20HubDescriptor @ 0x1C000AD6C
 * Callers:
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C00634A8 (HUBFDO_IoctlGetNodeInformation.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C006EFC0 (WMI_QueryInstanceHubNodeInfo.c)
 * Callees:
 *     memset @ 0x1C0034640 (memset.c)
 */

char __fastcall HUBFDO_BuildUsb20HubDescriptor(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx

  memset(a2, 0, 0x47uLL);
  if ( *(_BYTE *)(a1 + 200) )
  {
    LODWORD(v7) = *(_DWORD *)(a1 + 216);
    if ( (int)v7 > 0 )
    {
      if ( (int)v7 <= 2 )
      {
        *a2 = *(_OWORD *)(a1 + 1100);
        a2[1] = *(_OWORD *)(a1 + 1116);
        a2[2] = *(_OWORD *)(a1 + 1132);
        a2[3] = *(_OWORD *)(a1 + 1148);
        *((_DWORD *)a2 + 16) = *(_DWORD *)(a1 + 1164);
        *((_WORD *)a2 + 34) = *(_WORD *)(a1 + 1168);
        LOBYTE(v7) = *(_BYTE *)(a1 + 1170);
        *((_BYTE *)a2 + 70) = v7;
      }
      else if ( (_DWORD)v7 == 3 )
      {
        *(_WORD *)a2 = 10505;
        v9 = *(unsigned __int8 *)(a1 + 44);
        *((_BYTE *)a2 + 2) = v9;
        *(_WORD *)((char *)a2 + 3) = *(_WORD *)(a1 + 1103) & 0x1F;
        *((_BYTE *)a2 + 5) = *(_BYTE *)(a1 + 1105);
        *((_BYTE *)a2 + 6) = *(_BYTE *)(a1 + 1106);
        v10 = v9 >> 3;
        v11 = 0;
        v6 = v10 == -1;
        LODWORD(v7) = v10 + 1;
        v12 = (int)v7;
        if ( !v6 )
        {
          v7 = 0LL;
          do
          {
            *((_BYTE *)a2 + v7 + 7) = 0;
            ++v11;
            *((_BYTE *)a2 + v12 + v7 + 7) = -1;
            v7 = v11;
          }
          while ( v11 < v12 );
        }
      }
    }
  }
  else
  {
    *(_WORD *)a2 = 10505;
    v4 = 0;
    v5 = *(unsigned __int8 *)(a1 + 44);
    *((_BYTE *)a2 + 2) = v5;
    v5 >>= 3;
    v6 = v5 == -1;
    LODWORD(v7) = v5 + 1;
    *(_DWORD *)((char *)a2 + 3) = 0x20000;
    v8 = (int)v7;
    if ( !v6 )
    {
      v7 = 0LL;
      do
      {
        *((_BYTE *)a2 + v7 + 7) = 0;
        ++v4;
        *((_BYTE *)a2 + v8 + v7 + 7) = -1;
        v7 = v4;
      }
      while ( v4 < v8 );
    }
  }
  return v7;
}
