/*
 * XREFs of InbvPortInitialize @ 0x14023DD10
 * Callers:
 *     HdlspEnableTerminal @ 0x14072338C (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     CpDoesPortExist @ 0x14023D928 (CpDoesPortExist.c)
 *     CpInitialize @ 0x14023DAD4 (CpInitialize.c)
 */

char __fastcall InbvPortInitialize(
        unsigned int a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        char a5,
        int a6,
        unsigned __int8 a7)
{
  __int64 v8; // rbx
  unsigned __int64 v11; // rax
  char result; // al
  unsigned __int8 (__fastcall *v13)(unsigned __int16, unsigned __int8); // rax
  unsigned int v14; // edi
  _QWORD *v15; // rcx

  v8 = a3;
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
    v8 = MmMapIoSpaceEx(a3, 6 * v11 + 1, 0x204u);
    if ( !v8 )
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
    if ( !v8 )
    {
      switch ( a2 )
      {
        case 1:
          v8 = 1016LL;
          break;
        case 2:
          v8 = 760LL;
          break;
        case 3:
          v8 = 1000LL;
          break;
        default:
          a2 = 4;
          v8 = 744LL;
          break;
      }
    }
  }
  else
  {
    v8 = 760LL;
    if ( CpDoesPortExist(760) )
    {
      a2 = 2;
    }
    else
    {
      v8 = 1016LL;
      if ( !CpDoesPortExist(1016) )
        return 0;
      a2 = 1;
    }
  }
  v14 = a2 - 1;
  v15 = (_QWORD *)((char *)&Port + 16 * v14);
  if ( *v15 )
    return 0;
  PortInitialize = (__int64)CpInitialize;
  PortGetByte = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CpGetByte;
  PortPutByte = (__int64)CpPutByte;
  PortEnableFifo = (__int64 (__fastcall *)(_QWORD))CpEnableFifo;
  CpInitialize((__int64)v15, v8, a1);
  result = 1;
  *a4 = v14;
  return result;
}
