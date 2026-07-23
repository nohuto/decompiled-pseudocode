/*
 * XREFs of AlpcpCreatePort @ 0x14049FE60
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x14049DAA8 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
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
