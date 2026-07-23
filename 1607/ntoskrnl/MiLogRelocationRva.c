/*
 * XREFs of MiLogRelocationRva @ 0x140508C50
 * Callers:
 *     MiParseComImage @ 0x140508108 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x1405086C0 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140508740 (MiParseImageCfgBits.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     PfSnLogPageFault @ 0x1400FBBA0 (PfSnLogPageFault.c)
 *     PfLogFileDataAccess @ 0x1401FECFC (PfLogFileDataAccess.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int16 v6; // di
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v11);
  if ( v7 )
  {
    v8 = (v11[0] << 12) + ((unsigned __int64)*(unsigned int *)(v7 + 36) << 9);
    if ( (PfSnNumActiveTraces || dword_14033B858) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = (v4 + (unsigned __int64)(v6 & 0xFFF) + 4095) >> 12;
      if ( (v8 & 0xFFF) != 0 )
        LODWORD(v9) = v9 + 1;
      v10 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_14033B858 )
        PfLogFileDataAccess(a3[3], (__int64)KeGetCurrentThread(), v10, (unsigned int)v9, 0);
      if ( PfSnNumActiveTraces && (_DWORD)v9 )
      {
        do
        {
          PfSnLogPageFault(a3, v10, 2);
          v10 += 4096LL;
          LODWORD(v9) = v9 - 1;
        }
        while ( (_DWORD)v9 );
      }
    }
  }
}
