/*
 * XREFs of MiLogRelocationRva @ 0x1404431EC
 * Callers:
 *     MiLogRelocationFaults @ 0x140442C40 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 *     MiParseComImage @ 0x14046E4A4 (MiParseComImage.c)
 * Callees:
 *     PfSnLogPageFault @ 0x14001A174 (PfSnLogPageFault.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     PfLogFileDataAccess @ 0x140233574 (PfLogFileDataAccess.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int16 v6; // di
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // r8
  int v10; // edx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v13);
  if ( v7 )
  {
    v8 = (v13[0] << 12) + ((unsigned __int64)*(unsigned int *)(v7 + 36) << 9);
    if ( PfSnNumActiveTraces || dword_140367DD8 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        v10 = 0;
      if ( v10 >= 2 )
        goto LABEL_12;
      if ( CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        v10 = 2;
      if ( v10 >= 2 )
      {
LABEL_12:
        v11 = (v4 + (unsigned __int64)(v6 & 0xFFF) + 4095) >> 12;
        if ( (v8 & 0xFFF) != 0 )
          LODWORD(v11) = v11 + 1;
        v12 = v8 & 0xFFFFFFFFFFFFF000uLL;
        if ( dword_140367DD8 )
          PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v12, (unsigned int)v11, 0);
        if ( PfSnNumActiveTraces && (_DWORD)v11 )
        {
          do
          {
            PfSnLogPageFault(a3, v12, 2u);
            LODWORD(v12) = v12 + 4096;
            LODWORD(v11) = v11 - 1;
          }
          while ( (_DWORD)v11 );
        }
      }
    }
  }
}
