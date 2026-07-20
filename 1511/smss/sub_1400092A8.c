/*
 * XREFs of sub_1400092A8 @ 0x1400092A8
 * Callers:
 *     sub_140009BE0 @ 0x140009BE0 (sub_140009BE0.c)
 * Callees:
 *     sub_140004F9C @ 0x140004F9C (sub_140004F9C.c)
 *     sub_140007D9C @ 0x140007D9C (sub_140007D9C.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 *     sub_140008F04 @ 0x140008F04 (sub_140008F04.c)
 *     sub_140009228 @ 0x140009228 (sub_140009228.c)
 *     sub_14000942C @ 0x14000942C (sub_14000942C.c)
 *     sub_140009540 @ 0x140009540 (sub_140009540.c)
 *     sub_1400095B4 @ 0x1400095B4 (sub_1400095B4.c)
 *     sub_14000982C @ 0x14000982C (sub_14000982C.c)
 *     sub_1400099C4 @ 0x1400099C4 (sub_1400099C4.c)
 *     sub_140009B10 @ 0x140009B10 (sub_140009B10.c)
 *     sub_14000F9D0 @ 0x14000F9D0 (sub_14000F9D0.c)
 */

char sub_1400092A8()
{
  int v0; // eax
  __int64 v1; // rcx
  __int64 *i; // rbx
  __int64 *v3; // rdi
  int v4; // eax
  PVOID *v5; // rdi
  char v6; // bl
  int v7; // eax
  int v8; // eax
  __int16 v9; // dx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rbx
  PVOID v14[2]; // [rsp+20h] [rbp-10h] BYREF
  int SystemInformation; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  SystemInformation = 0;
  memset(v14, 0, sizeof(v14));
  v0 = sub_140009B10(&qword_1400201D0, v14);
  LODWORD(v1) = v0;
  if ( v0 < 0 )
  {
    v11 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_DWORD *)&unk_140020220 + 2 * v11) = 2462;
    goto LABEL_25;
  }
  sub_1400099C4((unsigned int)v0);
  for ( i = (__int64 *)qword_1400201D0; i != &qword_1400201D0; i = (__int64 *)*i )
    sub_14000982C(i + 2);
  SystemInformation = 2;
  NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  v3 = (__int64 *)qword_1400201E0;
  while ( v3 != &qword_1400201E0 )
  {
    v12 = v3;
    sub_1400095B4(v3 + 2);
    v3 = (__int64 *)*v3;
    sub_140008D78(v12);
  }
  if ( dword_14002044C || byte_140020460 )
  {
    v4 = sub_140004F9C();
    v1 = (unsigned int)v4;
    if ( v4 >= 0 )
    {
      v5 = (PVOID *)qword_140020450;
      v6 = 0;
      if ( qword_140020450 == &qword_140020450 )
        goto LABEL_28;
      do
      {
        v7 = sub_140009228((__int64)v5);
        v5 = (PVOID *)*v5;
        if ( v7 >= 0 )
          v6 = 1;
      }
      while ( v5 != &qword_140020450 );
      if ( !v6 )
      {
LABEL_28:
        if ( (int)sub_14000F9D0(v1) < 0 )
          goto LABEL_18;
      }
      v8 = sub_140007D9C(&v16);
      if ( v8 < 0 )
      {
        if ( v8 != -1073741710 || dword_140020464 != 1 )
          goto LABEL_18;
        v9 = 63;
      }
      else
      {
        if ( (*(_BYTE *)(v16 + 16) & 0x10) == 0 )
        {
LABEL_18:
          sub_140009540();
          LOBYTE(v10) = v6 == 0;
          LOBYTE(v11) = sub_14000942C(v10, v14);
          goto LABEL_19;
        }
        v9 = *(_WORD *)(v16 + 24);
      }
      sub_140008F04((__int64 **)&qword_140020450, v9);
      goto LABEL_18;
    }
    v11 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_DWORD *)&unk_140020220 + 2 * v11) = 2544;
LABEL_25:
    *((_DWORD *)&unk_140020220 + 2 * v11 + 1) = v1;
    *((_QWORD *)&unk_140020220 + v11 + 1) = 0LL;
    goto LABEL_19;
  }
  LOBYTE(v11) = sub_140009540();
LABEL_19:
  if ( v14[1] )
    LOBYTE(v11) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v14[1]);
  return v11;
}
