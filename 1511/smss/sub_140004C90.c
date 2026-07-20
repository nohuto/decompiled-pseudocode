/*
 * XREFs of sub_140004C90 @ 0x140004C90
 * Callers:
 *     sub_140004800 @ 0x140004800 (sub_140004800.c)
 *     sub_140004D90 @ 0x140004D90 (sub_140004D90.c)
 * Callees:
 *     sub_1400030DC @ 0x1400030DC (sub_1400030DC.c)
 *     sub_1400031C0 @ 0x1400031C0 (sub_1400031C0.c)
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 */

__int64 __fastcall sub_140004C90(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // r10
  __int64 v3; // rax
  __int64 *v4; // rbx
  NTSTATUS v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF

  v7[1] = v7;
  v1 = a1;
  v7[0] = v7;
  sub_1400037AC(a1, 0, (__int64)v7, (__int64)&v8);
  sub_14000436C((__int64)&v8);
  if ( (_QWORD *)v7[0] != v7 )
  {
    if ( (unsigned int)sub_1400031C0(v1) != -1 )
    {
      v8 = 0LL;
      sub_1400030DC(v1, (PVOID *)&v8);
      v2 = (__int64 *)v7[0];
    }
    do
    {
      v3 = *v2;
      if ( (_QWORD *)v2[1] != v7 || *(__int64 **)(v3 + 8) != v2 )
        __fastfail(3u);
      v7[0] = *v2;
      v4 = v2 - 9;
      *(_QWORD *)(v3 + 8) = v7;
      v5 = NtTerminateProcess((HANDLE)*(v2 - 5), 0);
      if ( ((v5 + 0x80000000) & 0x80000000) != 0 || v5 == -1073741558 )
        NtWaitForSingleObject((HANDLE)v4[4], 0, 0LL);
      sub_1400046B4(v4);
      v2 = (__int64 *)v7[0];
    }
    while ( (_QWORD *)v7[0] != v7 );
  }
  return 0LL;
}
