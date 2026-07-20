/*
 * XREFs of sub_140012D18 @ 0x140012D18
 * Callers:
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 * Callees:
 *     sub_1400033F0 @ 0x1400033F0 (sub_1400033F0.c)
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_140004390 @ 0x140004390 (sub_140004390.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 */

void __fastcall sub_140012D18(char *BaseAddress)
{
  int v2; // edi
  char **v3; // rcx
  PVOID *v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (BaseAddress[8] & 4) == 0 )
  {
    v2 = 1;
    sub_140004390(*((_DWORD *)BaseAddress + 16), 0, (__int64)v5);
    if ( (BaseAddress[8] & 4) != 0 )
    {
      v2 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)BaseAddress + 2, 4u);
      v3 = (char **)*((_QWORD *)BaseAddress + 9);
      v4 = (PVOID *)*((_QWORD *)BaseAddress + 10);
      if ( v3[1] != BaseAddress + 72 || *v4 != BaseAddress + 72 )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (char *)v4;
    }
    sub_14000436C((__int64)v5);
    if ( v2 == 1 )
    {
      sub_1400033F0((__int64)BaseAddress);
      sub_1400046B4(BaseAddress);
    }
  }
}
