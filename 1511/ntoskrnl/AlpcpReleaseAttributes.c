/*
 * XREFs of AlpcpReleaseAttributes @ 0x14047E354
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B80D8 (AlpcpReleaseViewAttribute.c)
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
