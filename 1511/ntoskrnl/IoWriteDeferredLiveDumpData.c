/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x1405FC8A4
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x1405F1F64 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x1400E48B0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     IopLiveDumpTrace @ 0x1401BCF24 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401BD0E0 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401BD1F8 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401BD288 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopLiveDumpReleaseResources @ 0x1405FD674 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 P)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = MEMORY[0xFFFFF78000000008];
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTrace();
  v3 = IopLiveDumpWriteDumpFile(P);
  IopLiveDumpTraceDumpFileWriteEnd(P, 1LL, v3);
  if ( v3 >= 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(P + 80) & 2;
    if ( (_BYTE)v4 )
      v3 = 261;
  }
  IopLiveDumpTraceInterfaceEnd(v4, 1LL, v3);
  if ( stru_1402D1D70.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402D1D70, 0x400000000000uLL) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(P + 384) + 4000LL);
    v11 = 0;
    v14 = 0;
    v9 = &v7;
    v6 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v10 = 8;
    v12 = &v6;
    v13 = 8;
    TlgWrite(&stru_1402D1D70, &unk_140253A51, (LPCGUID)(P + 624), (LPCGUID)(P + 608), 4u, &pData);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 608));
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag((PVOID)P, 0x706D644Cu);
  return (unsigned int)v3;
}
