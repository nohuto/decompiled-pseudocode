/*
 * XREFs of IopInitializeReserveIrps @ 0x1407B8C3C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000771C (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140320A80 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(0LL, a2);
  if ( IopReserveIrps )
  {
    dword_1403209A8 = 0;
    qword_1403209C0 = (__int64)&qword_1403209B8;
    qword_1403209B8 = (__int64)&qword_1403209B8;
    LOBYTE(v2) = 42;
    word_1403209B0 = 1;
    byte_1403209B2 = 6;
    dword_1403209B4 = 0;
    qword_1403209C8 = (PIRP)IopAllocateIrpWithExtension(0LL, v2);
    if ( qword_1403209C8 )
    {
      dword_1403209D0 = 0;
      qword_1403209E8 = (__int64)&qword_1403209E0;
      qword_1403209E0 = (__int64)&qword_1403209E0;
      LOBYTE(v3) = 42;
      word_1403209D8 = 1;
      byte_1403209DA = 6;
      dword_1403209DC = 0;
      qword_1403209F0 = (PIRP)IopAllocateIrpWithExtension(0LL, v3);
      if ( qword_1403209F0 )
      {
        dword_1403209F8 = 0;
        qword_140320A10 = (__int64)&qword_140320A08;
        v5 = 0;
        qword_140320A08 = (__int64)&qword_140320A08;
        word_140320A00 = 1;
        byte_140320A02 = 6;
        dword_140320A04 = 0;
        qword_140320A78 = 0LL;
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
              qword_140320A48 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140320A78;
              qword_140320A78 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v5 >= 8 )
          {
            dword_140320A20 = 0;
            qword_140320A40 = (__int64)&qword_140320A38;
            result = 1;
            qword_140320A38 = (__int64)&qword_140320A38;
            qword_140320A70 = (__int64)&qword_140320A68;
            qword_140320A68 = (__int64)&qword_140320A68;
            dword_140320A50 = 0;
            qword_140320A28 = 0LL;
            qword_140320A58 = 0LL;
            word_140320A30 = 1;
            byte_140320A32 = 6;
            dword_140320A34 = 0;
            word_140320A60 = 1;
            byte_140320A62 = 6;
            dword_140320A64 = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
