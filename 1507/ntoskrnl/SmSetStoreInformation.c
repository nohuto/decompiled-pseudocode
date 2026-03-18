/*
 * XREFs of SmSetStoreInformation @ 0x140546F94
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140547048 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessConfigRequest @ 0x1405C5728 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1406D9384 (SmProcessDeleteRequest.c)
 *     SmProcessEmptyRequest @ 0x1406D9400 (SmProcessEmptyRequest.c)
 *     SmProcessResizeRequest @ 0x1406D9C08 (SmProcessResizeRequest.c)
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1406DA82C (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1406DA898 (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1406DAB54 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1406DACA8 (SmcProcessStoreDeleteRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 3221225476LL;
  v8 = *a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 1 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SDWORD1(v8) <= 11 )
  {
    switch ( DWORD1(v8) )
    {
      case 0xB:
        LOBYTE(v6) = a4;
        return SmcProcessStoreCreateRequest(&unk_140352D68, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 3:
        return SmProcessCreateRequest((__int64)SmGlobals, *((ULONG64 *)&v8 + 1), v9, a4);
      case 4:
        LOBYTE(v6) = a4;
        return SmProcessDeleteRequest(SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 7:
        LOBYTE(v6) = a4;
        return SmProcessEmptyRequest(SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 9:
        LOBYTE(v6) = a4;
        return SmcProcessCreateRequest(&unk_140352D68, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xA:
        LOBYTE(v6) = a4;
        return SmcProcessDeleteRequest(&unk_140352D68, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      default:
        return 3221225475LL;
    }
  }
  else
  {
    switch ( DWORD1(v8) )
    {
      case 0xC:
        LOBYTE(v6) = a4;
        return SmcProcessStoreDeleteRequest(&unk_140352D68, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x11:
        LOBYTE(v6) = a4;
        return SmProcessResizeRequest(SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x12:
        LOBYTE(v6) = a4;
        return SmcProcessResizeRequest(&unk_140352D68, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x13:
        LOBYTE(v5) = a4;
        return SmProcessConfigRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      case 0x14:
        LOBYTE(v5) = a4;
        return SmProcessStoreMemoryPriorityRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      default:
        return 3221225475LL;
    }
  }
}
