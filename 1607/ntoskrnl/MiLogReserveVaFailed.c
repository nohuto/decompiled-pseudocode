/*
 * XREFs of MiLogReserveVaFailed @ 0x140658CE0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

char __fastcall MiLogReserveVaFailed(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rax
  _KPROCESS *Process; // rbx
  int v8; // ett
  ULONG64 v9; // r8
  const struct _TlgProvider_t *v10; // r9
  unsigned __int64 v11; // rax
  const GUID *v13; // [rsp+28h] [rbp-E0h]
  const GUID *v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  int Blink; // [rsp+78h] [rbp-90h] BYREF
  __int16 ProcessSessionId; // [rsp+7Ch] [rbp-8Ch]
  __int16 v23; // [rsp+7Eh] [rbp-8Ah]
  struct _LIST_ENTRY *v24; // [rsp+80h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *p_Blink; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h]
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  unsigned __int64 *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  unsigned __int64 *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  unsigned __int64 *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]
  __int64 *v44; // [rsp+108h] [rbp+0h]
  int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+114h] [rbp+Ch]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  Flink = (struct _LIST_ENTRY *)&retaddr;
  if ( qword_1403277E0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw((char *)Process[2].ActiveProcessors.Bitmap + 4);
    LODWORD(Flink) = HIDWORD(Process[2].ActiveProcessors.Bitmap[0]);
    do
    {
      v8 = (int)Flink;
      LODWORD(Flink) = _InterlockedCompareExchange(
                         (volatile signed __int32 *)Process[2].ActiveProcessors.Bitmap + 1,
                         (unsigned int)Flink | 0x400000,
                         (signed __int32)Flink);
    }
    while ( v8 != (_DWORD)Flink );
    if ( ((unsigned int)Flink & 0x400000) == 0 )
    {
      Blink = (int)Process[1].Header.WaitListHead.Blink;
      ProcessSessionId = PsGetProcessSessionId((__int64)Process);
      v23 = MEMORY[0xFFFFF780000002C4];
      Flink = Process[1].ThreadListHead.Flink;
      v24 = Flink;
      if ( qword_1403277E0->LevelPlus1 > 5 )
      {
        LOBYTE(Flink) = TlgKeywordOn(qword_1403277E0, 0x400000000000uLL);
        if ( (_BYTE)Flink )
        {
          v11 = Process[1].Affinity.Bitmap[1];
          v28 = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v40 = 0;
          v43 = 0;
          v46 = 0;
          v16 = v11;
          v17 = Process[1].Affinity.Bitmap[0];
          v18 = Process[1].ActiveProcessors.Bitmap[18];
          p_Blink = &Blink;
          v29 = &v15;
          v32 = &v16;
          v35 = &v17;
          v38 = &v18;
          v41 = &v19;
          v44 = &v20;
          v15 = a1;
          v19 = a2;
          v20 = a3;
          v27 = 16;
          v30 = 8;
          v33 = 8;
          v36 = 8;
          v39 = 8;
          v42 = 8;
          v45 = 8;
          LOBYTE(Flink) = TlgWriteEx(v10, &unk_14027C3C2, v9, (ULONG)v10, v13, v14, 9u, &pData);
        }
      }
    }
  }
  return (char)Flink;
}
