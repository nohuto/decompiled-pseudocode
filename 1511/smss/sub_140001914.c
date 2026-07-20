/*
 * XREFs of sub_140001914 @ 0x140001914
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 * Callees:
 *     sub_140001A30 @ 0x140001A30 (sub_140001A30.c)
 *     sub_140001C10 @ 0x140001C10 (sub_140001C10.c)
 *     sub_14000297C @ 0x14000297C (sub_14000297C.c)
 *     sub_140002A8C @ 0x140002A8C (sub_140002A8C.c)
 *     sub_1400130EC @ 0x1400130EC (sub_1400130EC.c)
 */

char __fastcall sub_140001914(unsigned int a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rax
  void *v9; // rcx
  int v10; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+50h] [rbp+20h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+28h] BYREF

  v3 = dword_140020898;
  if ( a3 )
    v3 = a3;
  Environment = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  dword_140020898 = v3;
  RtlCreateTagHeap(*(HANDLE *)(v6 + 48), 0, (PWSTR)L"SMSC!", (PWSTR)L"PARS");
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = sub_140002A8C(a1, a2, &v13, &DestinationString);
  if ( v7 < 0 )
  {
    if ( DestinationString.Buffer )
      LOBYTE(v7) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  }
  else
  {
    v8 = qword_14001FBD0;
    v9 = *(void **)qword_14001FBD0;
    *(_QWORD *)qword_14001FBD0 = 0LL;
    v8[1] = 0LL;
    *(_DWORD *)qword_14001FBD0 = 0;
    NtSetEvent(v9, 0LL);
    while ( 1 )
    {
      Interval.QuadPart = -50000000LL;
      if ( (int)RtlConnectToSm(0LL, 0LL, 0LL, &qword_14001FCE0) >= 0 )
        break;
      NtDelayExecution(0, &Interval);
    }
    v10 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
    sub_14000297C();
    if ( (int)sub_140001A30(v10) < 0 || (v7 = sub_140001C10(v10), v7 < 0) )
    {
      sub_1400130EC();
      JUMPOUT(0x140001A22LL);
    }
  }
  return v7;
}
