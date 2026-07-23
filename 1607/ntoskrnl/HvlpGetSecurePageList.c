/*
 * XREFs of HvlpGetSecurePageList @ 0x1401C1E78
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401BEE4C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401BEFDC (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401BFFCC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401C0710 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpGetPageListIterator @ 0x1401C1E64 (HvlpGetPageListIterator.c)
 */

__int64 __fastcall HvlpGetSecurePageList(int a1, __int64 a2, LONGLONG a3, PHYSICAL_ADDRESS *a4, _QWORD *a5, _BYTE *a6)
{
  PHYSICAL_ADDRESS *PageListIterator; // rax
  void *v11; // r8
  PHYSICAL_ADDRESS *v12; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v14; // edx
  char v16[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v17; // [rsp+28h] [rbp-A0h]
  LONGLONG v18; // [rsp+30h] [rbp-98h]
  __int64 v19; // [rsp+38h] [rbp-90h]
  char v20; // [rsp+40h] [rbp-88h]

  PageListIterator = (PHYSICAL_ADDRESS *)HvlpGetPageListIterator(a1);
  v12 = PageListIterator;
  if ( v11 )
    PhysicalAddress = MmGetPhysicalAddress(v11);
  else
    PhysicalAddress = PageListIterator[2];
  if ( a4 )
    a4->QuadPart = 0LL;
  *a6 = 0;
  v19 = a2;
  v17 = a1 == 0;
  v18 = PhysicalAddress.QuadPart / 4096;
  v14 = VslpEnterIumSecureMode(1, 2050LL, 0LL, (__int64)v16);
  if ( v14 >= 0 )
  {
    if ( a5 )
      *a5 = v19;
    *a6 = v20;
    if ( a4 )
    {
      if ( a3 )
        a4->QuadPart = a3;
      else
        *a4 = v12[1];
    }
  }
  return (unsigned int)v14;
}
