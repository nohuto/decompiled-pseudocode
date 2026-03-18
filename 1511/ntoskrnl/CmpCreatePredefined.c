/*
 * XREFs of CmpCreatePredefined @ 0x14051F818
 * Callers:
 *     CmpCreatePerfKeys @ 0x14051F758 (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

NTSTATUS __fastcall CmpCreatePredefined(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+58h] [rbp-A8h]
  __int128 v11; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v13[20]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+130h] [rbp+30h] BYREF
  PVOID Object; // [rsp+140h] [rbp+40h] BYREF

  memset((char *)v13 + 4, 0, 0x84uLL);
  LODWORD(v13[3]) = 16777217;
  LODWORD(v13[0]) = 33;
  v13[7] = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  v7 = 48;
  v8 = a1;
  v10 = 576;
  v11 = 0LL;
  result = ObOpenObjectByName((__int64)&v7, (struct _OBJECT_TYPE *)CmKeyObjectType, 0, 0LL, 0x20019u, v13, &Handle);
  if ( result >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    return ZwClose(Handle);
  }
  return result;
}
