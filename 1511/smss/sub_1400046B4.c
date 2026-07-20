/*
 * XREFs of sub_1400046B4 @ 0x1400046B4
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_1400030DC @ 0x1400030DC (sub_1400030DC.c)
 *     sub_1400031FC @ 0x1400031FC (sub_1400031FC.c)
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_140003D54 @ 0x140003D54 (sub_140003D54.c)
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 *     sub_140012D18 @ 0x140012D18 (sub_140012D18.c)
 * Callees:
 *     sub_140012B6C @ 0x140012B6C (sub_140012B6C.c)
 *     sub_140012DA4 @ 0x140012DA4 (sub_140012DA4.c)
 */

void __fastcall sub_1400046B4(_BYTE *BaseAddress)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 Parameters[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( BaseAddress && _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    if ( (BaseAddress[8] & 4) != 0
      && *((_DWORD *)BaseAddress + 6) == 2
      && *((_DWORD *)BaseAddress + 16) == *(_DWORD *)qword_14001FCC8 )
    {
      RtlInitUnicodeString(&DestinationString, L"Core Windows subsystem terminated");
      Parameters[1] = -1073741823LL;
      Parameters[0] = (unsigned __int64)&DestinationString;
      sub_140012B6C(Parameters, 1u, 2u);
      __debugbreak();
    }
    v2 = (void *)*((_QWORD *)BaseAddress + 2);
    if ( v2 )
      sub_140012DA4(v2);
    v3 = (void *)*((_QWORD *)BaseAddress + 5);
    if ( v3 )
      NtClose(v3);
    if ( (BaseAddress[8] & 8) != 0 )
    {
      v5 = qword_14001FC00;
      v6 = (__int64 *)(BaseAddress + 72);
      v6[1] = (__int64)&qword_14001FC00;
      *v6 = v5;
      if ( *(__int64 **)(v5 + 8) != &qword_14001FC00 )
        __fastfail(3u);
      *(_QWORD *)(v5 + 8) = v6;
      qword_14001FC00 = (__int64)v6;
    }
    else
    {
      v4 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( v4 )
        NtClose(v4);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
}
