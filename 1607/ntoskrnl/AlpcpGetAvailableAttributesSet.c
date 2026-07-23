/*
 * XREFs of AlpcpGetAvailableAttributesSet @ 0x1404B0A70
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall AlpcpGetAvailableAttributesSet(_QWORD *a1)
{
  unsigned int result; // eax

  result = 0;
  if ( a1[4] )
    result = 0x80000000;
  if ( a1[5] )
    result |= 0x40000000u;
  if ( a1[6] )
    result |= 0x10000000u;
  return result;
}
