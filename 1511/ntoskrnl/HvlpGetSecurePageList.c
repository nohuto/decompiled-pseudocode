/*
 * XREFs of HvlpGetSecurePageList @ 0x1401B54B8
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401B261C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401B27A8 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401B4378 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401B4AC0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sub_1401B54A4 @ 0x1401B54A4 (sub_1401B54A4.c)
 */

__int64 __fastcall HvlpGetSecurePageList(int a1, __int64 a2, LONGLONG a3, PHYSICAL_ADDRESS *a4, _QWORD *a5, _BYTE *a6)
{
  PHYSICAL_ADDRESS *v10; // rax
  void *v11; // r8
  PHYSICAL_ADDRESS *v12; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v14; // ecx
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v17; // [rsp+28h] [rbp-A0h]
  LONGLONG v18; // [rsp+30h] [rbp-98h]
  __int64 v19; // [rsp+38h] [rbp-90h]
  char v20; // [rsp+40h] [rbp-88h]

  v10 = (PHYSICAL_ADDRESS *)sub_1401B54A4(a1);
  v12 = v10;
  if ( v11 )
    PhysicalAddress = MmGetPhysicalAddress(v11);
  else
    PhysicalAddress = v10[2];
  if ( a4 )
    a4->QuadPart = 0LL;
  *a6 = 0;
  v19 = a2;
  v17 = a1 == 0;
  v18 = PhysicalAddress.QuadPart / 4096;
  v14 = HvlpEnterIumSecureMode(1u, 2050, 0, v16);
  if ( v14 >= 0 )
  {
    if ( a4 )
    {
      if ( a3 )
        a4->QuadPart = a3;
      else
        *a4 = v12[1];
    }
    if ( a5 )
      *a5 = v19;
    *a6 = v20;
  }
  return (unsigned int)v14;
}
