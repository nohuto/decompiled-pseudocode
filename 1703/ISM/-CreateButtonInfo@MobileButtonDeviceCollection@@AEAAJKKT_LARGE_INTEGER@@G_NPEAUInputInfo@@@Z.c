/*
 * XREFs of ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18007C8D4
 * Callers:
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x18007C130 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007C300 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::CreateButtonInfo(
        MobileButtonDeviceCollection *this,
        LONG a2,
        DWORD a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        union _LARGE_INTEGER *a7)
{
  unsigned int v7; // r14d
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx

  v7 = 0;
  if ( a5 > 0x41u )
  {
    switch ( a5 )
    {
      case 'B':
        v12 = 5;
        goto LABEL_28;
      case 'C':
        v12 = 6;
        goto LABEL_28;
      case 'D':
        v12 = 0;
        goto LABEL_28;
    }
    if ( a5 == 69 || (v11 = (unsigned int)a5 - 104, a5 == 104) )
    {
      v12 = 9;
      goto LABEL_28;
    }
    v12 = 11;
    if ( a5 == 115 )
    {
LABEL_28:
      memset(a7, 0, 0x760uLL);
      BYTE4(a7[88].QuadPart) = a6;
      a7->HighPart = a2;
      a7->LowPart = 128;
      a7[1].LowPart = a3;
      a7[2] = a4;
      a7[5].LowPart = 1888;
      a7[88].LowPart = v12;
      BYTE3(a7[87].QuadPart) = 1;
      return v7;
    }
  }
  else
  {
    switch ( a5 )
    {
      case 'A':
        v12 = 10;
        goto LABEL_28;
      case ')':
      case ':':
        v12 = 2;
        goto LABEL_28;
      case ';':
        v12 = 1;
        goto LABEL_28;
      case '<':
        v12 = 3;
        goto LABEL_28;
    }
    v11 = (unsigned int)a5 - 63;
    if ( a5 == 63 )
    {
      v12 = 8;
      goto LABEL_28;
    }
    if ( a5 == 64 )
    {
      v12 = 7;
      goto LABEL_28;
    }
  }
  v7 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 561, 87);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 445, 87);
  }
  return v7;
}
