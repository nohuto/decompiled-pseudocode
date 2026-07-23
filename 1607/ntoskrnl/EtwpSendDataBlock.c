/*
 * XREFs of EtwpSendDataBlock @ 0x1404914BC
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x140572F94 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FC4C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpQueueNotification @ 0x140491640 (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 *v4; // r13
  void *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v10; // r15
  void (__fastcall *v11)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64); // r12
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // r8
  char v15; // r11
  unsigned int v16; // r10d
  unsigned int v17; // eax
  ULONG_PTR SessionById; // rax
  __int64 v19; // rcx
  int *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-59h]
  _WORD v24[2]; // [rsp+40h] [rbp-39h] BYREF
  int v25; // [rsp+44h] [rbp-35h]
  __int64 v26; // [rsp+48h] [rbp-31h]
  __int64 v27; // [rsp+50h] [rbp-29h] BYREF
  int v28; // [rsp+58h] [rbp-21h]
  int v29; // [rsp+5Ch] [rbp-1Dh]
  _BYTE v30[48]; // [rsp+60h] [rbp-19h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = a2;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
      return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
    return v6;
  }
  v10 = *(_QWORD *)(a1 + 80);
  if ( !*(_QWORD *)(a1 + 88) )
    return v6;
  if ( (v3 & 0x10) != 0 )
  {
    SessionById = MmGetSessionById(*(_DWORD *)(a1 + 56), a2, a3);
    v5 = (void *)SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741275;
    v6 = MmAttachSession(SessionById);
    if ( (v6 & 0x80000000) != 0 )
    {
LABEL_15:
      ObfDereferenceObject(v5);
      return v6;
    }
  }
  if ( *(_DWORD *)v7 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 32);
      LOBYTE(a2) = *(_BYTE *)(v7 + 112);
      v24[0] = *(_WORD *)(v19 + 72);
      v24[1] = *(unsigned __int8 *)(v19 + 74);
      v25 = *(_DWORD *)(v19 + 64);
      v26 = *(unsigned int *)(v19 + 68);
      (*(void (__fastcall **)(__int64, __int64, _WORD *, __int64))(a1 + 88))(v19 + 24, a2, v24, v10);
    }
    else
    {
      v11 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64))(a1 + 88);
      v12 = *(_DWORD *)(v7 + 72);
      v13 = *(_QWORD *)(v7 + 88);
      v14 = *(_QWORD *)(v7 + 96);
      v15 = *(_BYTE *)(v7 + 76);
      if ( !v12 )
      {
        v13 = 0LL;
        v14 = 0LL;
        v15 = 0;
      }
      v16 = *(_DWORD *)(v7 + 116);
      v17 = 0;
      if ( v16 )
      {
        v20 = (int *)(v7 + 132);
        while ( *v20 < 0 && *v20 != 0x80000000 )
        {
          ++v17;
          v20 += 4;
          if ( v17 >= v16 )
            goto LABEL_12;
        }
        v4 = &v27;
        v21 = *(_QWORD *)(v7 + 16LL * v17 + 120);
        v28 = *(_DWORD *)(v7 + 16LL * v17 + 128);
        v22 = *(_DWORD *)(v7 + 16LL * v17 + 132);
        v27 = v7 + v21;
        v29 = v22;
      }
LABEL_12:
      v23 = v14;
      LOBYTE(v14) = v15;
      v11(v7 + 56, v12, v14, v13, v23, v4, v10);
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    MmDetachSession((__int64)v5, (__int64)v30);
    goto LABEL_15;
  }
  return v6;
}
