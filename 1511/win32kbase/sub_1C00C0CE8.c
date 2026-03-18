/*
 * XREFs of sub_1C00C0CE8 @ 0x1C00C0CE8
 * Callers:
 *     NtGdiGetCertificate @ 0x1C00C0F30 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1060 (NtGdiGetCertificateSize.c)
 * Callees:
 *     CallMonitor @ 0x1C0083A30 (CallMonitor.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00BD66C (DrvPVPGetFirstActiveMonitor.c)
 */

__int64 __fastcall sub_1C00C0CE8(struct _UNICODE_STRING *a1, __int64 a2, void *a3, PVOID *a4)
{
  __int64 result; // rax
  int v7; // edi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int InputBuffer; // [rsp+58h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = DrvPVPGetFirstActiveMonitor(a1, a2, &Object);
  if ( (int)result >= 0 )
  {
    v7 = CallMonitor((PDEVICE_OBJECT)Object, 0x232483u, &InputBuffer, 4u, a3, 4u);
    if ( v7 >= 0 )
    {
      if ( a4 )
        *a4 = Object;
      else
        ObfDereferenceObject(Object);
      return 0LL;
    }
    else
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v7;
    }
  }
  return result;
}
