/*
 * XREFs of HvlpGetSecurePageList @ 0x1401F064C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401ECACC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401ECC54 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401EED1C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401EF9C0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sub_1401F0638 @ 0x1401F0638 (sub_1401F0638.c)
 */

__int64 __fastcall HvlpGetSecurePageList(int a1, LONGLONG a2, PHYSICAL_ADDRESS *a3, _QWORD *a4, _BYTE *a5)
{
  PHYSICAL_ADDRESS *v9; // rax
  void *v10; // rdx
  PHYSICAL_ADDRESS *v11; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v13; // ecx
  unsigned __int8 v15[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v16; // [rsp+28h] [rbp-A0h]
  LONGLONG v17; // [rsp+30h] [rbp-98h]
  __int64 v18; // [rsp+38h] [rbp-90h]
  char v19; // [rsp+40h] [rbp-88h]

  v9 = (PHYSICAL_ADDRESS *)sub_1401F0638(a1);
  v11 = v9;
  if ( v10 )
    PhysicalAddress = MmGetPhysicalAddress(v10);
  else
    PhysicalAddress = v9[2];
  if ( a3 )
    a3->QuadPart = 0LL;
  *a5 = 0;
  v16 = a1 == 0;
  v17 = PhysicalAddress.QuadPart / 4096;
  v13 = HvlpEnterIumSecureMode(1u, 2050, 0, v15);
  if ( v13 >= 0 )
  {
    if ( a3 )
    {
      if ( a2 )
        a3->QuadPart = a2;
      else
        *a3 = v11[1];
    }
    if ( a4 )
      *a4 = v18;
    *a5 = v19;
  }
  return (unsigned int)v13;
}
