/*
 * XREFs of TpDisassociateCallback @ 0x1800849B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  _RTL_SRWLOCK *v1; // rbx
  char v2; // al
  _RTL_SRWLOCK *Value; // rdx

  if ( !Instance
    || (v1 = (_RTL_SRWLOCK *)*((_QWORD *)Instance + 23)) == 0LL
    || *((_QWORD *)Instance + 22)
    || (v2 = *((_BYTE *)Instance + 76), (v2 & 2) != 0) )
  {
    TppRaiseInvalidParameter(Instance);
  }
  else
  {
    *((_DWORD *)Instance + 36) &= ~0x40u;
    *((_BYTE *)Instance + 76) = v2 | 2;
    Value = (_RTL_SRWLOCK *)v1[2].Value;
    *((_QWORD *)Instance + 22) = Value;
    if ( Value )
    {
      *((_DWORD *)Instance + 36) |= 0x20u;
      TppBarrierAdjust(Value + 4, 1, 0);
    }
    TppBarrierAdjust(v1 + 7, -1, 0);
  }
}
