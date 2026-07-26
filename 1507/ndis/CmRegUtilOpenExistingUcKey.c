/*
 * XREFs of CmRegUtilOpenExistingUcKey @ 0x1C00E4340
 * Callers:
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00E4398 (CmRegUtilOpenExistingWstrKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmRegUtilOpenExistingUcKey(void *a1, _UNICODE_STRING *a2, ACCESS_MASK a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES v6; // [rsp+20h] [rbp-38h] BYREF
  HANDLE v7; // [rsp+60h] [rbp+8h] BYREF

  *a4 = 0LL;
  v6.Length = 48;
  v6.RootDirectory = a1;
  v6.Attributes = 576;
  v6.ObjectName = a2;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&v7, a3, &v6);
  if ( result >= 0 )
    *a4 = v7;
  return result;
}
