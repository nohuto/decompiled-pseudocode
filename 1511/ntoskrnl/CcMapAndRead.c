/*
 * XREFs of CcMapAndRead @ 0x1400A3F00
 * Callers:
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x14047A8B0 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  int v4; // r11d
  unsigned __int8 v5; // r14
  NTSTATUS v7; // r9d
  struct _KTHREAD *CurrentThread; // rdi
  int v9; // r10d
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  unsigned int v15; // esi
  int v16; // r15d
  int v18; // eax
  int v19; // [rsp+60h] [rbp+8h]
  int v20; // [rsp+68h] [rbp+10h]

  v20 = a2;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v11 = a1;
  v19 = 0;
  if ( !a3 )
  {
    v4 = 2;
    v19 = 2;
  }
  v12 = a4 & 0xFFF;
  v13 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (unsigned __int64)(v12 + v11 + 4095) >> 12;
  v15 = LOBYTE(CurrentThread[1].Teb) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      LOBYTE(CurrentThread[1].Teb) = 1;
      if ( (unsigned int)(v14 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
      {
        v18 = v14 - 1;
        if ( (unsigned int)(v14 - 1) > 0xF )
          v18 = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v18;
      }
      if ( a2 )
      {
        v16 = 1;
        if ( v9 == 2 )
          v16 = v14 - 1;
      }
      else
      {
        v16 = v14;
      }
      v7 = MmCheckCachedPageStates(v13, (unsigned int)(v16 << 12), v4 | (unsigned int)((v9 & a2) != 0));
      if ( v7 < 0 )
        break;
      a2 = v20;
      v13 += (unsigned int)(v16 << 12);
      v4 = v19;
      LODWORD(v14) = v14 - v16;
      if ( (_DWORD)v14 == 1 )
      {
        v9 = 4;
      }
      else
      {
        v9 = 2;
        if ( !(_DWORD)v14 )
          goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v5 = 1;
  }
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v15 >> 2;
  LOBYTE(CurrentThread[1].Teb) = v15 & 3;
  if ( a3 && v7 < 0 )
    RtlRaiseStatus(v7);
  return v5;
}
