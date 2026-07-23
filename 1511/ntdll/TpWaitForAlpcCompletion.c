/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18006BD40
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x18006BEAC (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x1800A6150 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 68);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 33), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
