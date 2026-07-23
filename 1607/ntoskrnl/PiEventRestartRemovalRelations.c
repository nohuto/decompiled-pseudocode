/*
 * XREFs of PiEventRestartRemovalRelations @ 0x140580AB0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopQueryDeviceState @ 0x1403F01FC (IopQueryDeviceState.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     IopEnumerateRelations @ 0x140485C7C (IopEnumerateRelations.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 */

bool __fastcall PiEventRestartRemovalRelations(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  int v7; // ecx
  _DWORD *v8; // rbx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  int v10[2]; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v10[1] = 0;
  v10[0] = 1;
  while ( 1 )
  {
    result = IopEnumerateRelations(a2, v10, v11, &v12, 0LL);
    if ( !result )
      return result;
    v7 = v11[0];
    if ( v11[0] )
      v8 = *(_DWORD **)(*(_QWORD *)(v11[0] + 312LL) + 40LL);
    else
      v8 = 0LL;
    if ( *(_DWORD *)(a1 + 16) != 54 || v12 == 1 )
    {
      if ( v11[0] == a3 )
      {
        if ( (*(_DWORD *)(a1 + 136) & 2) == 0 && v8[75] == 786 && (v8[99] & 0x2000) != 0 && v8[101] == 21 )
        {
          PipClearDevNodeProblem((__int64)v8);
          goto LABEL_20;
        }
      }
      else if ( (v8[99] & 0x6000) == 0 && v8[75] == 786 )
      {
LABEL_20:
        PnpRestartDeviceNode(v8);
      }
    }
    else if ( v8[75] != 788 )
    {
      *(_DWORD *)(v11[0] + 48LL) |= 0x4000000u;
      IopQueryDeviceState(v7, &v9);
    }
  }
}
