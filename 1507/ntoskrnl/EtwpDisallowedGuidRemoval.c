/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x14058D7E4
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404D5734 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404D58C0 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x1404D5C18 (EtwpBuildNotificationPacket.c)
 */

char __fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, _DWORD *a2)
{
  char v4; // si
  char *GuidEntryByGuid; // rax
  char *v6; // rdi
  _OWORD *v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // bl
  _OWORD *v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0LL;
  v4 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, 0);
  v6 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    EtwpBuildNotificationPacket((__int64)GuidEntryByGuid, 0LL, 0, &v15);
    v7 = v15;
    *(_DWORD *)v15 = 3;
    *(_OWORD *)((char *)v7 + 40) = *(_OWORD *)a1;
    LODWORD(GuidEntryByGuid) = PsGetCurrentThreadProcessId();
    v8 = v6 + 40;
    *((_DWORD *)v7 + 9) = (_DWORD)GuidEntryByGuid;
    v9 = (_QWORD *)*((_QWORD *)v6 + 5);
    while ( v9 != v8 )
    {
      v10 = (__int64)v9;
      v9 = (_QWORD *)*v9;
      v11 = *(_QWORD *)(v10 + 40);
      if ( v11 && *(_DWORD *)(v11 + 80) )
      {
        v12 = 0;
        while ( 1 )
        {
          GuidEntryByGuid = (char *)(32LL * v12);
          if ( *(_DWORD *)&GuidEntryByGuid[v11 + 112] )
          {
            LODWORD(GuidEntryByGuid) = *(unsigned __int16 *)&GuidEntryByGuid[v11 + 118];
            if ( (_DWORD)GuidEntryByGuid == *a2 )
              break;
          }
          if ( ++v12 >= 8u )
            goto LABEL_10;
        }
        v4 = 1 << v12;
LABEL_10:
        if ( v4 )
        {
          v13 = *(_BYTE *)(v10 + 100);
          EtwpUpdateRegEntryEnableMask(v10, v4, 2, 1);
          LOBYTE(GuidEntryByGuid) = EtwpCalculateUpdateNotification(v10, v4, v13, 0, 2, 1, &v15);
          if ( (_BYTE)GuidEntryByGuid )
            LOBYTE(GuidEntryByGuid) = EtwpSendDataBlock(v10, (__int64)v15);
        }
      }
    }
  }
  return (char)GuidEntryByGuid;
}
