/*
 * XREFs of ndisOidPostIovDeleteVPort @ 0x1C00693C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovDeleteVPort @ 0x1C00683C8 (ndisIovDeleteVPort.c)
 */

void __fastcall ndisOidPostIovDeleteVPort(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 4) != 0 )
    {
      ndisIovDeleteVPort(*(_QWORD **)(v2 + 152));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
}
