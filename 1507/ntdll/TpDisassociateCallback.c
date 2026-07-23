/*
 * XREFs of TpDisassociateCallback @ 0x1800751B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rdx

  if ( !Instance
    || (v2 = *((_QWORD *)Instance + 23)) == 0
    || *((_QWORD *)Instance + 22)
    || (v3 = *((_BYTE *)Instance + 76), (v3 & 2) != 0) )
  {
    TppRaiseInvalidParameter(Instance, v1);
  }
  else
  {
    *((_DWORD *)Instance + 36) &= ~0x40u;
    *((_BYTE *)Instance + 76) = v3 | 2;
    v4 = *(_QWORD *)(v2 + 16);
    *((_QWORD *)Instance + 22) = v4;
    if ( v4 )
    {
      *((_DWORD *)Instance + 36) |= 0x20u;
      TppBarrierAdjust(v4 + 32, 1LL);
    }
    TppBarrierAdjust(v2 + 56, 0xFFFFFFFFLL);
  }
}
