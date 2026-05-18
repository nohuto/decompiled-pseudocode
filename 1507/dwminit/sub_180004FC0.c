/*
 * XREFs of sub_180004FC0 @ 0x180004FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_180004E08 @ 0x180004E08 (sub_180004E08.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 __fastcall sub_180004FC0(__int64 a1, int a2)
{
  unsigned int v4; // esi
  void *v5; // rcx
  NTSTATUS v6; // eax
  int v7; // eax
  _BYTE LpcMessage[48]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  memset(&LpcMessage[2], 0, 0x2EuLL);
  v5 = *(void **)(a1 + 48);
  *(_DWORD *)&LpcMessage[40] = a2;
  *(_DWORD *)LpcMessage = 3145736;
  v6 = NtRequestPort(v5, (PPORT_MESSAGE)LpcMessage);
  v7 = sub_180004E08(a1, v6);
  if ( v7 < 0 )
  {
    v4 = v7 | 0x10000000;
    sub_180003B24(1u, (__int64)&unk_180009390, 8LL, v7 | 0x10000000, 49);
  }
  return v4;
}
