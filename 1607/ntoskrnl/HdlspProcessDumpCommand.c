/*
 * XREFs of HdlspProcessDumpCommand @ 0x140723978
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140722CBC (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x140723BF0 (HdlspPutMore.c)
 *     HdlspPutString @ 0x140723C8C (HdlspPutString.c)
 */

void __fastcall HdlspProcessDumpCommand(char a1)
{
  PKSPIN_LOCK v1; // rdi
  KIRQL v3; // al
  KIRQL v4; // bl
  unsigned __int16 v5; // cx
  KSPIN_LOCK *v6; // rcx
  char *v7; // rax
  unsigned int v8; // r14d
  unsigned int i; // r15d
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  PKSPIN_LOCK v13; // rcx
  KIRQL v14; // al
  KIRQL v15; // al
  const char *v16; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v18; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v20; // [rsp+A8h] [rbp+38h] BYREF

  v1 = HeadlessGlobals;
  if ( (HeadlessGlobals[6] & 2) != 0 )
  {
    v4 = -1;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v1 = HeadlessGlobals;
    v4 = v3;
  }
  v5 = *((_WORD *)v1 + 49);
  if ( v5 == 0xFFFF )
  {
LABEL_5:
    if ( v4 == 0xFF )
      return;
    v6 = v1;
    goto LABEL_35;
  }
  *((_DWORD *)v1 + 12) &= ~4u;
  v7 = (char *)v1[3];
  v8 = 0;
  *(_DWORD *)&v18.Length = 5242880;
  v18.Buffer = v7;
  for ( i = v5; ; i = (unsigned __int8)(i + 1) )
  {
    v10 = v1[2] + 56LL * i;
    if ( v4 != 0xFF )
    {
      KeReleaseSpinLock(v1, v4);
      v1 = HeadlessGlobals;
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(v10 + 8), &TimeFields);
    sprintf_s(
      (char *)v1[3],
      0x50uLL,
      "%02d:%02d:%02d.%03d : ",
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    HdlspPutString(HeadlessGlobals[3]);
    v11 = *(_QWORD *)(v10 + 48);
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v11 + 2 * v12) );
    if ( v12 >= 0x4F )
      *(_WORD *)(v11 + 158) = 0;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v10 + 48));
    RtlUnicodeStringToAnsiString(&v18, &DestinationString, 0);
    v13 = HeadlessGlobals;
    if ( (HeadlessGlobals[6] & 2) != 0 )
    {
      v4 = -1;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      v13 = HeadlessGlobals;
      v4 = v14;
    }
    if ( (v13[6] & 4) != 0 )
      break;
    HdlspPutString(v13[3]);
    HdlspPutString("\r\n");
    v1 = HeadlessGlobals;
    ++v8;
    if ( i == *((unsigned __int16 *)HeadlessGlobals + 48) )
      goto LABEL_5;
    if ( a1 && v8 > 0x14 )
    {
      if ( v4 != 0xFF )
        KeReleaseSpinLock(HeadlessGlobals, v4);
      HdlspPutMore(&v20);
      v1 = HeadlessGlobals;
      if ( (HeadlessGlobals[6] & 2) != 0 )
      {
        v4 = -1;
      }
      else
      {
        v15 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
        v1 = HeadlessGlobals;
        v4 = v15;
      }
      if ( v20 )
      {
        v16 = "\r\n";
        goto LABEL_33;
      }
      if ( (v1[6] & 4) != 0 )
      {
        v16 = "New log entries have been added while waiting, command aborted.\r\n";
        goto LABEL_33;
      }
      v8 = 0;
    }
  }
  v16 = "New log entries have been added during dump, command aborted.\r\n";
LABEL_33:
  HdlspPutString(v16);
  if ( v4 != 0xFF )
  {
    v6 = HeadlessGlobals;
LABEL_35:
    KeReleaseSpinLock(v6, v4);
  }
}
