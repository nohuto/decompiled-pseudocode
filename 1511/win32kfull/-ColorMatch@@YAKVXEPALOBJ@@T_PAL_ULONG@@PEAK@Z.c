/*
 * XREFs of ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C02B3FBC
 * Callers:
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B40F8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorMatch(__int64 a1, int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  unsigned int v5; // esi
  __int64 v6; // rbx
  unsigned int i; // r10d
  int v8; // eax

  if ( (a2 & 0x2000000) != 0 )
  {
    result = (unsigned __int16)a2 & (unsigned int)-((unsigned int)(unsigned __int16)a2 < *(_DWORD *)(a1 + 28));
    *a3 = 0;
  }
  else if ( (a2 & 0x1000000) != 0 )
  {
    *a3 = 0xFFFFFFF;
    return 0LL;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 28);
    v5 = 0;
    v6 = 0LL;
    for ( i = 0xFFFFFFF; (unsigned int)v6 < v4; v6 = (unsigned int)(v6 + 1) )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v6);
      if ( (v8 & 0x10000000) != 0 && (v8 & 0x1000000) == 0 )
      {
        if ( (BYTE1(v8) - BYTE1(a2)) * (BYTE1(v8) - BYTE1(a2))
           + ((unsigned __int8)v8 - (unsigned __int8)a2) * ((unsigned __int8)v8 - (unsigned __int8)a2)
           + (BYTE2(v8) - BYTE2(a2)) * (BYTE2(v8) - (unsigned int)BYTE2(a2)) < i )
        {
          v5 = v6;
          i = (BYTE1(v8) - BYTE1(a2)) * (BYTE1(v8) - BYTE1(a2))
            + ((unsigned __int8)v8 - (unsigned __int8)a2) * ((unsigned __int8)v8 - (unsigned __int8)a2)
            + (BYTE2(v8) - BYTE2(a2)) * (BYTE2(v8) - BYTE2(a2));
        }
        if ( !i )
          break;
      }
    }
    result = v5;
    if ( (a2 & 0x4000000) != 0 )
      i = 0xFFFFFFF;
    *a3 = i;
  }
  return result;
}
