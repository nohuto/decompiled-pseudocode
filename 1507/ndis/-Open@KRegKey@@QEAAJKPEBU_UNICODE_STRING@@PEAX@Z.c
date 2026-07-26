/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C009D404
 * Callers:
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C009C628 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, struct _UNICODE_STRING *a3, void *a4)
{
  NTSTATUS v5; // eax
  void **p; // rcx
  unsigned int v7; // esi
  void **v8; // rdi
  _OBJECT_ATTRIBUTES v10; // [rsp+20h] [rbp-38h] BYREF
  void **v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v10.ObjectName = a3;
  v10.Length = 48;
  v10.RootDirectory = a4;
  *(_OWORD *)&v10.SecurityDescriptor = 0LL;
  v10.Attributes = 576;
  v5 = ZwOpenKey((PHANDLE)&v11, a2, &v10);
  p = this->_p;
  v7 = v5;
  v8 = v11;
  if ( v11 != this->_p )
  {
    if ( p )
      ZwClose(p);
    this->_p = v8;
  }
  return v7;
}
