/*
 * XREFs of AlpcpCreatePort @ 0x14046C4A4
 * Callers:
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404B1C70 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(char a1, __int64 a2, void **a3)
{
  int Object; // ebx
  __int64 v6; // [rsp+20h] [rbp-38h]

  Object = ObCreateObjectEx(a1, AlpcPortObjectType, a2, a1, v6, 472, 0, 0, a3, 0LL);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
