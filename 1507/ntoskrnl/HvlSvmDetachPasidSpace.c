/*
 * XREFs of HvlSvmDetachPasidSpace @ 0x1401EAE1C
 * Callers:
 *     <none>
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     HvlpDetachRootSvmDevice @ 0x1401EBB7C (HvlpDetachRootSvmDevice.c)
 */

__int64 __fastcall HvlSvmDetachPasidSpace(unsigned int a1)
{
  unsigned __int16 v2; // ax
  signed int v3; // ebx
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a1;
  v2 = HvlpExtendedFastHypercall(65699LL, v6, 8LL);
  if ( v2 )
  {
    if ( v2 == 11 || v2 == 29 )
    {
      v3 = -1073741670;
    }
    else if ( v2 == 89 )
    {
      v3 = 3473497;
    }
    else
    {
      v3 = v2 | 0xC0350000;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (HvlpFlags & 4) != 0 )
  {
    v4 = HvlpDetachRootSvmDevice(a1);
    if ( v3 >= 0 && v4 < 0 )
      return (unsigned int)v4;
  }
  return (unsigned int)v3;
}
