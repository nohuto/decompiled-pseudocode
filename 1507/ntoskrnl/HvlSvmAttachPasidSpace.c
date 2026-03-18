/*
 * XREFs of HvlSvmAttachPasidSpace @ 0x1401EAA9C
 * Callers:
 *     <none>
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 *     HvlpAttachRootSvmDevice @ 0x1401EBAA4 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401EBB7C (HvlpDetachRootSvmDevice.c)
 */

__int64 __fastcall HvlSvmAttachPasidSpace(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // si
  unsigned int v7; // edi
  signed int v8; // ebx
  unsigned __int16 v9; // ax
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v7 = a1;
  if ( (HvlpFlags & 4) != 0 )
  {
    v8 = HvlpAttachRootSvmDevice(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v11[1] = a3;
  v11[0] = __PAIR64__(a2, v7);
  while ( 1 )
  {
    v9 = HvlpExtendedFastHypercall(65698LL, v11, 16LL);
    if ( (HvlpFlags & 4) == 0 || v9 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      goto LABEL_8;
  }
  if ( v9 )
  {
    if ( v9 == 11 || v9 == 29 )
    {
LABEL_8:
      v8 = -1073741670;
      goto LABEL_17;
    }
    if ( v9 == 89 )
      return 3473497;
    v8 = v9 | 0xC0350000;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 >= 0 )
    return (unsigned int)v8;
LABEL_17:
  if ( v4 )
    HvlpDetachRootSvmDevice(v7);
  return (unsigned int)v8;
}
