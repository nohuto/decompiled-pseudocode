/*
 * XREFs of IopInitializeReserveIrps @ 0x1407B8C3C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000788C (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140320AA0 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(0LL, a2);
  if ( IopReserveIrps )
  {
    dword_1403209C8 = 0;
    qword_1403209E0 = (__int64)&qword_1403209D8;
    qword_1403209D8 = (__int64)&qword_1403209D8;
    LOBYTE(v2) = 42;
    word_1403209D0 = 1;
    byte_1403209D2 = 6;
    dword_1403209D4 = 0;
    qword_1403209E8 = (PIRP)IopAllocateIrpWithExtension(0LL, v2);
    if ( qword_1403209E8 )
    {
      dword_1403209F0 = 0;
      qword_140320A08 = (__int64)&qword_140320A00;
      qword_140320A00 = (__int64)&qword_140320A00;
      LOBYTE(v3) = 42;
      word_1403209F8 = 1;
      byte_1403209FA = 6;
      dword_1403209FC = 0;
      qword_140320A10 = (PIRP)IopAllocateIrpWithExtension(0LL, v3);
      if ( qword_140320A10 )
      {
        dword_140320A18 = 0;
        qword_140320A30 = (__int64)&qword_140320A28;
        v5 = 0;
        qword_140320A28 = (__int64)&qword_140320A28;
        word_140320A20 = 1;
        byte_140320A22 = 6;
        dword_140320A24 = 0;
        qword_140320A98 = 0LL;
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
              qword_140320A68 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140320A98;
              qword_140320A98 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v5 >= 8 )
          {
            dword_140320A40 = 0;
            qword_140320A60 = (__int64)&qword_140320A58;
            result = 1;
            qword_140320A58 = (__int64)&qword_140320A58;
            qword_140320A90 = (__int64)&qword_140320A88;
            qword_140320A88 = (__int64)&qword_140320A88;
            dword_140320A70 = 0;
            qword_140320A48 = 0LL;
            qword_140320A78 = 0LL;
            word_140320A50 = 1;
            byte_140320A52 = 6;
            dword_140320A54 = 0;
            word_140320A80 = 1;
            byte_140320A82 = 6;
            dword_140320A84 = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
