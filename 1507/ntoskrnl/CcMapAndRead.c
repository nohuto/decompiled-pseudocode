/*
 * XREFs of CcMapAndRead @ 0x140050800
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x14049CBA0 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
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
  int v17; // eax
  int v19; // eax
  int v20; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+68h] [rbp+10h]
  char v22; // [rsp+70h] [rbp+18h] BYREF

  v21 = a2;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v11 = a1;
  v20 = 0;
  v22 = 1;
  if ( !a3 )
  {
    v4 = 2;
    v20 = 2;
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
        v19 = v14 - 1;
        if ( (unsigned int)(v14 - 1) > 0xF )
          v19 = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v19;
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
      v17 = MmCheckCachedPageStates(v13, (unsigned int)(v16 << 12), v4 | (unsigned int)((v9 & a2) != 0), &v22);
      v7 = v17;
      if ( !v22 && !a3 )
        break;
      if ( v17 < 0 )
        break;
      a2 = v21;
      v13 += (unsigned int)(v16 << 12);
      v4 = v20;
      LODWORD(v14) = v14 - v16;
      if ( (_DWORD)v14 == 1 )
      {
        v9 = 4;
      }
      else
      {
        v9 = 2;
        if ( !(_DWORD)v14 )
          goto LABEL_11;
      }
    }
  }
  else
  {
LABEL_11:
    v5 = 1;
  }
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v15 >> 2;
  LOBYTE(CurrentThread[1].Teb) = v15 & 3;
  if ( a3 && v7 < 0 )
    RtlRaiseStatus(v7);
  return v5;
}
