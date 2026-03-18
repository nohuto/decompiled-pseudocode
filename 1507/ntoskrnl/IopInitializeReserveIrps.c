/*
 * XREFs of IopInitializeReserveIrps @ 0x1407E3D08
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140006730 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_14034B9A0 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(0LL, a2);
  if ( IopReserveIrps )
  {
    dword_14034B8C8 = 0;
    qword_14034B8E0 = (__int64)&qword_14034B8D8;
    qword_14034B8D8 = (__int64)&qword_14034B8D8;
    LOBYTE(v2) = 42;
    word_14034B8D0 = 1;
    byte_14034B8D2 = 6;
    dword_14034B8D4 = 0;
    qword_14034B8E8 = (PIRP)IopAllocateIrpWithExtension(0LL, v2);
    if ( qword_14034B8E8 )
    {
      dword_14034B8F0 = 0;
      qword_14034B908 = (__int64)&qword_14034B900;
      qword_14034B900 = (__int64)&qword_14034B900;
      LOBYTE(v3) = 42;
      word_14034B8F8 = 1;
      byte_14034B8FA = 6;
      dword_14034B8FC = 0;
      qword_14034B910 = (PIRP)IopAllocateIrpWithExtension(0LL, v3);
      if ( qword_14034B910 )
      {
        dword_14034B918 = 0;
        qword_14034B930 = (__int64)&qword_14034B928;
        v5 = 0;
        qword_14034B928 = (__int64)&qword_14034B928;
        word_14034B920 = 1;
        byte_14034B922 = 6;
        dword_14034B924 = 0;
        qword_14034B998 = 0LL;
        while ( 1 )
        {
          LOBYTE(v4) = 42;
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(0LL, v4);
          if ( !IrpWithExtension )
            break;
          if ( v5 )
          {
            if ( v5 == 1 )
            {
              qword_14034B968 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_14034B998;
              qword_14034B998 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v5 >= 8 )
          {
            dword_14034B940 = 0;
            qword_14034B960 = (__int64)&qword_14034B958;
            result = 1;
            qword_14034B958 = (__int64)&qword_14034B958;
            qword_14034B990 = (__int64)&qword_14034B988;
            qword_14034B988 = (__int64)&qword_14034B988;
            dword_14034B970 = 0;
            qword_14034B948 = 0LL;
            qword_14034B978 = 0LL;
            word_14034B950 = 1;
            byte_14034B952 = 6;
            dword_14034B954 = 0;
            word_14034B980 = 1;
            byte_14034B982 = 6;
            dword_14034B984 = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
