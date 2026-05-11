/*
 * XREFs of TopologyConvertTermTypeToNodeType @ 0x1C0015B64
 * Callers:
 *     TopologyProcessInputTerminalUnit @ 0x1C0015C70 (TopologyProcessInputTerminalUnit.c)
 *     TopologyProcessOutputTerminalUnit @ 0x1C0015D30 (TopologyProcessOutputTerminalUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TopologyConvertTermTypeToNodeType(_DWORD *a1, GUID *a2, GUID *a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 result; // rax

  v3 = 2;
  if ( a1[19] == 2 )
  {
    v3 = 25;
    goto LABEL_23;
  }
  v6 = a1[17];
  v7 = v6 & 0xF00;
  if ( v7 == 256 )
  {
    v3 = 3;
    goto LABEL_23;
  }
  if ( v7 != 512 )
  {
    if ( v7 == 768 )
      goto LABEL_10;
    if ( ((v7 - 1024) & 0xFFFFFCFF) != 0 )
    {
      if ( v7 != 1792 )
      {
        v3 = 25 - (v7 != 2304);
        goto LABEL_23;
      }
    }
    else if ( v7 != 1792 )
    {
      v8 = a1[5];
      if ( !v8 )
        goto LABEL_23;
      if ( v8 == 1 )
      {
LABEL_10:
        v3 = 1;
        goto LABEL_23;
      }
LABEL_21:
      v3 = 24;
      goto LABEL_23;
    }
    if ( v6 < 0x701 )
      goto LABEL_21;
    if ( v6 <= 0x702 )
      goto LABEL_10;
    if ( v6 != 1795 && v6 != 1800 )
    {
      if ( v6 > 0x709 )
      {
        if ( v6 <= 0x710 )
          goto LABEL_23;
        if ( v6 == 1809 )
          goto LABEL_10;
        if ( v6 == 1811 )
          goto LABEL_23;
      }
      goto LABEL_21;
    }
  }
LABEL_23:
  v9 = 4LL * v3;
  *a2 = *NodeDescriptorInfo[v9];
  result = v3;
  *a3 = *NodeDescriptorInfo[v9 + 1];
  return result;
}
