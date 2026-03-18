/*
 * XREFs of ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00BE7A8
 * Callers:
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00B4C48 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bSetMagicColor(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+48h] [rbp+20h]

  v12 = a4;
  v11 = a2;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 60) == 20 && (*(_DWORD *)(a2 + 24) & 0x11000) == 0 )
  {
    HIBYTE(v12) = 48;
    *(_DWORD *)(*(_QWORD *)(a2 + 128) + 4LL * a3) = v12;
    XEPALOBJ::vUpdateTime((XEPALOBJ *)&v11);
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 1840LL);
    if ( v8 )
      *(_DWORD *)(*(_QWORD *)(v8 + 128) + 4 * v6) = v12;
    if ( (unsigned int)v6 > 0xA )
      v6 = (unsigned int)(v6 - 236);
    HIBYTE(v12) = v7;
    v9 = v12;
    v4 = 1;
    dword_1C0102124[v6] = v12;
    *((_DWORD *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16].Next->Next + v6) = v9;
  }
  return v4;
}
