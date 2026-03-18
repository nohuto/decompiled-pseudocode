/*
 * XREFs of InbvPortInitialize @ 0x14022239C
 * Callers:
 *     HdlspEnableTerminal @ 0x1406D738C (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpace @ 0x1400BD418 (MmMapIoSpace.c)
 *     CpDoesPortExist @ 0x140221FB8 (CpDoesPortExist.c)
 *     CpInitialize @ 0x140222160 (CpInitialize.c)
 */

char __fastcall InbvPortInitialize(
        unsigned int a1,
        int a2,
        PHYSICAL_ADDRESS a3,
        unsigned int *a4,
        char a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 QuadPart; // rbx
  unsigned __int64 v11; // rax
  char result; // al
  unsigned __int8 (__fastcall *v13)(unsigned __int16, unsigned __int8); // rax
  unsigned int v14; // edi
  _QWORD *v15; // rcx

  QuadPart = a3.QuadPart;
  if ( a7 )
  {
    v11 = (unsigned __int64)a7 >> 3;
    CpRegisterWidth = v11;
  }
  else
  {
    v11 = CpRegisterWidth;
  }
  if ( a5 )
  {
    QuadPart = (__int64)MmMapIoSpace(a3, 6 * v11 + 1, MmNonCached);
    if ( !QuadPart )
      return 0;
    READ_UCHAR = (unsigned __int8 (__fastcall *)(unsigned __int16))MY_READ_REGISTER_UCHAR;
    v13 = (unsigned __int8 (__fastcall *)(unsigned __int16, unsigned __int8))MY_WRITE_REGISTER_UCHAR;
  }
  else
  {
    READ_UCHAR = MY_READ_PORT_UCHAR;
    v13 = MY_WRITE_PORT_UCHAR;
  }
  WRITE_UCHAR = v13;
  if ( !a1 )
    a1 = 19200;
  if ( a2 )
  {
    if ( !QuadPart )
    {
      switch ( a2 )
      {
        case 1:
          QuadPart = 1016LL;
          break;
        case 2:
          QuadPart = 760LL;
          break;
        case 3:
          QuadPart = 1000LL;
          break;
        default:
          a2 = 4;
          QuadPart = 744LL;
          break;
      }
    }
  }
  else
  {
    QuadPart = 760LL;
    if ( CpDoesPortExist(760) )
    {
      a2 = 2;
    }
    else
    {
      QuadPart = 1016LL;
      if ( !CpDoesPortExist(1016) )
        return 0;
      a2 = 1;
    }
  }
  v14 = a2 - 1;
  v15 = &Port[2 * v14];
  if ( *v15 )
    return 0;
  PortInitialize = (__int64)CpInitialize;
  PortGetByte = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CpGetByte;
  PortPutByte = (__int64)CpPutByte;
  PortEnableFifo = (__int64 (__fastcall *)(_QWORD))CpEnableFifo;
  CpInitialize((__int64)v15, QuadPart, a1);
  result = 1;
  *a4 = v14;
  return result;
}
