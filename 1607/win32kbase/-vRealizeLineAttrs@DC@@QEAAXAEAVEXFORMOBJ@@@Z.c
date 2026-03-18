/*
 * XREFs of ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002D21C
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0045F90 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 * Callees:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C002C930 (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

void __fastcall DC::vRealizeLineAttrs(DC *this, struct EXFORMOBJ *a2)
{
  __int64 v2; // rsi
  int v4; // r8d
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax

  v2 = *((_QWORD *)this + 19);
  if ( (*(_DWORD *)(v2 + 48) & 0x800) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) == 0x43 && *(int *)(v2 + 152) <= 1
      || (v4 = *(_DWORD *)(v2 + 152)) == 0
      || (unsigned int)DC::bOldPenNominal(this, a2, v4) )
    {
      *((_DWORD *)this + 49) = 1;
      if ( *(_QWORD *)(v2 + 168) )
      {
        *((_DWORD *)this + 51) = *(_DWORD *)(v2 + 176);
        *((_QWORD *)this + 26) = *(_QWORD *)(v2 + 168);
        *((_DWORD *)this + 46) = 8;
      }
      else
      {
        *((_DWORD *)this + 51) = 0;
        *((_QWORD *)this + 26) = 0LL;
        *((_DWORD *)this + 46) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 46) = 1;
      v5 = *(_DWORD *)(v2 + 156);
      *((_DWORD *)this + 51) = 0;
      *((_QWORD *)this + 26) = 0LL;
      *((_DWORD *)this + 49) = v5;
    }
    *((_DWORD *)this + 54) = 0;
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 160);
    if ( (v6 & 0xF0000) != 0 )
    {
      *((_DWORD *)this + 46) = 1;
      v8 = *(_DWORD *)(v2 + 156);
    }
    else
    {
      v7 = 0;
      if ( (v6 & 0xF) == 8 )
        v7 = 2;
      *((_DWORD *)this + 46) = v7;
      v8 = *(_DWORD *)(v2 + 152);
    }
    *((_DWORD *)this + 54) = 0;
    *((_DWORD *)this + 49) = v8;
    *((_DWORD *)this + 51) = *(_DWORD *)(v2 + 176);
    v9 = *(_QWORD *)(v2 + 168);
    *((_QWORD *)this + 26) = v9;
    if ( v9 )
      *((_DWORD *)this + 46) |= 8u;
  }
  *((_DWORD *)this + 47) = *(unsigned __int8 *)(v2 + 180);
  *((_DWORD *)this + 48) = *(unsigned __int8 *)(v2 + 181);
}
