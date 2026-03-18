/*
 * XREFs of IopInitializeReserveIrps @ 0x14076E84C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1401023EC (IopAllocateIrpWithExtension.c)
 */

char IopInitializeReserveIrps()
{
  int v0; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_1402FB520 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(0LL, 42, 0);
  if ( IopReserveIrps )
  {
    dword_1402FB448 = 0;
    qword_1402FB460 = (__int64)&qword_1402FB458;
    qword_1402FB458 = (__int64)&qword_1402FB458;
    word_1402FB450 = 1;
    byte_1402FB452 = 6;
    dword_1402FB454 = 0;
    qword_1402FB468 = (PIRP)IopAllocateIrpWithExtension(0LL, 42, 0);
    if ( qword_1402FB468 )
    {
      dword_1402FB470 = 0;
      qword_1402FB488 = (__int64)&qword_1402FB480;
      qword_1402FB480 = (__int64)&qword_1402FB480;
      word_1402FB478 = 1;
      byte_1402FB47A = 6;
      dword_1402FB47C = 0;
      qword_1402FB490 = (PIRP)IopAllocateIrpWithExtension(0LL, 42, 0);
      if ( qword_1402FB490 )
      {
        dword_1402FB498 = 0;
        qword_1402FB4B0 = (__int64)&qword_1402FB4A8;
        v0 = 0;
        qword_1402FB4A8 = (__int64)&qword_1402FB4A8;
        word_1402FB4A0 = 1;
        byte_1402FB4A2 = 6;
        dword_1402FB4A4 = 0;
        qword_1402FB518 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(0LL, 42, 0);
          if ( !IrpWithExtension )
            break;
          if ( v0 )
          {
            if ( v0 == 1 )
            {
              qword_1402FB4E8 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_1402FB518;
              qword_1402FB518 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v0 >= 8 )
          {
            dword_1402FB4C0 = 0;
            qword_1402FB4E0 = (__int64)&qword_1402FB4D8;
            result = 1;
            qword_1402FB4D8 = (__int64)&qword_1402FB4D8;
            qword_1402FB510 = (__int64)&qword_1402FB508;
            qword_1402FB508 = (__int64)&qword_1402FB508;
            dword_1402FB4F0 = 0;
            qword_1402FB4C8 = 0LL;
            qword_1402FB4F8 = 0LL;
            word_1402FB4D0 = 1;
            byte_1402FB4D2 = 6;
            dword_1402FB4D4 = 0;
            word_1402FB500 = 1;
            byte_1402FB502 = 6;
            dword_1402FB504 = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
