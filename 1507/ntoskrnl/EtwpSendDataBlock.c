/*
 * XREFs of EtwpSendDataBlock @ 0x1404D52AC
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x140551628 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14058D7E4 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpQueueNotification @ 0x1404D5430 (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 *v3; // r13
  _KPROCESS *v4; // rsi
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v9; // r15
  void (__fastcall *v10)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64); // r12
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // r8
  char v14; // r11
  unsigned int v15; // r10d
  unsigned int v16; // eax
  _KPROCESS *SessionById; // rax
  __int64 v18; // rcx
  int *v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-59h]
  _WORD v23[2]; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+44h] [rbp-35h]
  __int64 v25; // [rsp+48h] [rbp-31h]
  __int64 v26; // [rsp+50h] [rbp-29h] BYREF
  int v27; // [rsp+58h] [rbp-21h]
  int v28; // [rsp+5Ch] [rbp-1Dh]
  _BYTE v29[48]; // [rsp+60h] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 98);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = a2;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) != 0 )
      return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
    return v5;
  }
  v9 = *(_QWORD *)(a1 + 80);
  if ( !*(_QWORD *)(a1 + 88) )
    return v5;
  if ( (v2 & 0x10) != 0 )
  {
    SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 56));
    v4 = SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741275;
    v5 = MmAttachSession(SessionById, (__int64)v29);
    if ( (v5 & 0x80000000) != 0 )
    {
LABEL_15:
      ObfDereferenceObject(v4);
      return v5;
    }
  }
  if ( *(_DWORD *)v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
    {
      v18 = *(_QWORD *)(a1 + 32);
      LOBYTE(a2) = *(_BYTE *)(v6 + 112);
      v23[0] = *(_WORD *)(v18 + 72);
      v23[1] = *(unsigned __int8 *)(v18 + 74);
      v24 = *(_DWORD *)(v18 + 64);
      v25 = *(unsigned int *)(v18 + 68);
      (*(void (__fastcall **)(__int64, __int64, _WORD *, __int64))(a1 + 88))(v18 + 24, a2, v23, v9);
    }
    else
    {
      v10 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64))(a1 + 88);
      v11 = *(_DWORD *)(v6 + 72);
      v12 = *(_QWORD *)(v6 + 88);
      v13 = *(_QWORD *)(v6 + 96);
      v14 = *(_BYTE *)(v6 + 76);
      if ( !v11 )
      {
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0;
      }
      v15 = *(_DWORD *)(v6 + 116);
      v16 = 0;
      if ( v15 )
      {
        v19 = (int *)(v6 + 132);
        while ( *v19 < 0 && *v19 != 0x80000000 )
        {
          ++v16;
          v19 += 4;
          if ( v16 >= v15 )
            goto LABEL_12;
        }
        v3 = &v26;
        v20 = *(_QWORD *)(v6 + 16LL * v16 + 120);
        v27 = *(_DWORD *)(v6 + 16LL * v16 + 128);
        v21 = *(_DWORD *)(v6 + 16LL * v16 + 132);
        v26 = v6 + v20;
        v28 = v21;
      }
LABEL_12:
      v22 = v13;
      LOBYTE(v13) = v14;
      v10(v6 + 56, v11, v13, v12, v22, v3, v9);
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v4 )
  {
    MmDetachSession((__int64)v4, (struct _KTHREAD *)v29);
    goto LABEL_15;
  }
  return v5;
}
