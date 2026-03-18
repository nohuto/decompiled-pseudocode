/*
 * XREFs of AlpcpReleaseAttributes @ 0x1404B55C8
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x14044C7D0 (AlpcpCaptureAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x1400A97D0 (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B5BFC (AlpcpReleaseViewAttribute.c)
 */

__int64 __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  __int64 result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    result = AlpcpDereferenceBlobEx(v2, 1);
    a1[4] = 0LL;
  }
  v3 = a1[5];
  if ( v3 )
  {
    result = AlpcpReleaseViewAttribute(v3);
    a1[5] = 0LL;
  }
  v4 = a1[6];
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4, 1);
    a1[6] = 0LL;
  }
  if ( a1[7] )
  {
    result = AlpcpReleaseDirectAttribute(a1[7]);
    a1[7] = 0LL;
  }
  return result;
}
