/*
 * XREFs of IopSetDeviceSecurityDescriptors @ 0x140574FB8
 * Callers:
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptors(
        PVOID *a1,
        PVOID *a2,
        DWORD *a3,
        void *a4,
        POOL_TYPE a5,
        GENERIC_MAPPING *a6)
{
  unsigned int v7; // edi
  PVOID *v10; // rbx
  unsigned int v11; // eax
  PVOID *v12; // rsi

  v7 = 0;
  v10 = a2;
  ObfReferenceObject(a2);
  do
  {
    v11 = IopSetDeviceSecurityDescriptor((__int64)v10, a3, a4, a5, a6);
    v12 = (PVOID *)v10[3];
    if ( v10 == a1 )
      v7 = v11;
    if ( v12 )
      ObfReferenceObject(v10[3]);
    ObfDereferenceObject(v10);
    v10 = v12;
  }
  while ( v12 );
  return v7;
}
