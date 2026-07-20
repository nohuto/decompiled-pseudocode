/*
 * XREFs of sub_140012DA4 @ 0x140012DA4
 * Callers:
 *     sub_1400033F0 @ 0x1400033F0 (sub_1400033F0.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140012DA4(HANDLE *BaseAddress)
{
  HANDLE *v1; // rbx

  if ( BaseAddress )
  {
    v1 = BaseAddress;
    if ( (unsigned int)dword_140020958 >= 0x10 )
      goto LABEL_6;
    NtClearEvent(BaseAddress[1]);
    RtlAcquireSRWLockExclusive(&unk_140020968);
    if ( (unsigned int)dword_140020958 < 0x10 )
    {
      ++dword_140020958;
      *v1 = (HANDLE)qword_140020960;
      qword_140020960 = (__int64)v1;
      v1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&unk_140020968);
    if ( v1 )
    {
LABEL_6:
      NtClose(v1[1]);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
    }
  }
}
