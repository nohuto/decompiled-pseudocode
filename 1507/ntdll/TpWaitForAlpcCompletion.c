/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18007A5B0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     ZwAlpcQueryInformation @ 0x180094150 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 68);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 33), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((char *)Alpc + 128, 0LL);
  }
}
