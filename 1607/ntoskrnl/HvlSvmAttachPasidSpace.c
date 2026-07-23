/*
 * XREFs of HvlSvmAttachPasidSpace @ 0x1401BDE18
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE67C (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401BE734 (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmAttachPasidSpace(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // si
  unsigned int v7; // edi
  int v8; // ebx
  unsigned __int16 v9; // ax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v7 = a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v8 = HvlpAttachRootSvmDevice(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v11[0] = __PAIR64__(a2, v7);
  v11[1] = a3;
  while ( 1 )
  {
    v9 = HvcallpExtendedFastHypercall(65698LL, v11, 16LL);
    if ( (HvlpFlags & 2) == 0 || v9 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
    {
      v8 = -1073741670;
      goto LABEL_10;
    }
  }
  v8 = HvlpHvToNtStatus(v9);
  if ( v8 >= 0 )
    return (unsigned int)v8;
LABEL_10:
  if ( v4 )
    HvlpDetachRootSvmDevice(v7);
  return (unsigned int)v8;
}
