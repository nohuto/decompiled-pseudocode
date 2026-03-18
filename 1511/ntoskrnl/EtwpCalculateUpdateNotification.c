/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x1404CE210
 * Callers:
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404359EC (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14046C714 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x1404CE668 (EtwpBuildNotificationPacket.c)
 */

bool __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        int a6,
        _OWORD **a7)
{
  unsigned __int8 v8; // r14
  char v9; // r12
  unsigned __int8 v10; // al
  char v11; // cl
  _OWORD *v12; // r15
  __int64 v13; // rcx
  __int128 v14; // xmm0
  int SchematizedFilterSize; // eax
  __int64 v16; // r8
  _BYTE Source2[120]; // [rsp+28h] [rbp-51h] BYREF

  v8 = *(_BYTE *)(a1 + 99);
  v9 = *(_BYTE *)(a1 + 98) & 8;
  if ( v9 )
  {
    if ( !v8 && a6 == 1 )
    {
      if ( !a3 )
        return 0;
      goto LABEL_9;
    }
LABEL_22:
    *a7 = 0LL;
    return 1;
  }
  if ( a5 )
  {
    v10 = *(_BYTE *)(a1 + 100);
    v11 = *(_BYTE *)(a1 + 99);
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 100);
    v10 = v8;
  }
  if ( (a2 & a3) == 0 && (v10 & a2) == 0 )
    return 0;
  if ( a4 == v10 && !v11 && a5 != 2 )
    goto LABEL_22;
LABEL_9:
  memset(Source2, 0, sizeof(Source2));
  v12 = *a7;
  v13 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)Source2 = **a7;
  *(_OWORD *)&Source2[16] = v12[1];
  *(_OWORD *)&Source2[32] = v12[2];
  *(_OWORD *)&Source2[48] = v12[3];
  *(_QWORD *)&Source2[64] = *((_QWORD *)v12 + 8);
  v14 = *(_OWORD *)(v13 + 24);
  *(_QWORD *)&Source2[4] = 0x100000078LL;
  *(_OWORD *)&Source2[40] = v14;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(v13, v8);
  if ( SchematizedFilterSize )
    *(_DWORD *)&Source2[4] = SchematizedFilterSize + 136;
  EtwpComputeRegEntryEnableInfo(a1, &Source2[72]);
  if ( v9 )
  {
    *(_DWORD *)&Source2[112] = 0;
    *(_QWORD *)&Source2[104] = 0LL;
  }
  if ( v12 )
  {
    if ( *((_DWORD *)v12 + 1) != *(_DWORD *)&Source2[4] || RtlCompareMemory(v12, Source2, 0x78uLL) != 120 )
      *a7 = 0LL;
    if ( *a7 )
      return 1;
  }
  LOBYTE(v16) = *(_BYTE *)(a1 + 99);
  return (int)EtwpBuildNotificationPacket(*(_QWORD *)(a1 + 32), Source2, v16, a7) >= 0;
}
