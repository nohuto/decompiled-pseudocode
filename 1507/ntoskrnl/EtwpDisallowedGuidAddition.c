/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x140551628
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404D5734 (EtwpCalculateUpdateNotification.c)
 *     EtwpBuildNotificationPacket @ 0x1404D5C18 (EtwpBuildNotificationPacket.c)
 */

__int64 __fastcall EtwpDisallowedGuidAddition(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  _OWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  unsigned __int8 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // dl
  char v14; // r9
  _OWORD *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  result = (__int64)EtwpFindGuidEntryByGuid(a1, 0);
  v5 = result;
  if ( result )
  {
    EtwpBuildNotificationPacket(result, 0LL, 0, &v15);
    v6 = v15;
    *(_DWORD *)v15 = 3;
    *(_OWORD *)((char *)v6 + 40) = *(_OWORD *)a1;
    result = PsGetCurrentThreadProcessId();
    v7 = (_QWORD *)(v5 + 40);
    *((_DWORD *)v6 + 9) = result;
    v8 = *(_QWORD **)(v5 + 40);
LABEL_3:
    while ( v8 != v7 )
    {
      v9 = (__int64)v8;
      v8 = (_QWORD *)*v8;
      v10 = *(_BYTE *)(v9 + 100);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v9 + 40);
        v12 = 0;
        while ( 1 )
        {
          result = 32LL * v12;
          if ( *(_DWORD *)(result + v11 + 112) )
          {
            result = *(unsigned __int16 *)(result + v11 + 118);
            if ( (_DWORD)result == *a2 )
              break;
          }
          if ( ++v12 >= 8u )
            goto LABEL_3;
        }
        v13 = 1 << v12;
        if ( 1 << v12 )
        {
          if ( (v10 & v13) != 0 )
          {
            v14 = *(_BYTE *)(v9 + 100);
            *(_BYTE *)(v9 + 100) = v10 & ~v13;
            EtwpCalculateUpdateNotification(v9, v13, v10, v14, 2, 0, &v15);
            result = EtwpSendDataBlock(v9, (__int64)v15);
          }
        }
      }
    }
  }
  return result;
}
