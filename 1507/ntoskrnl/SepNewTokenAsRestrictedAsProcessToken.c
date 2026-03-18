/*
 * XREFs of SepNewTokenAsRestrictedAsProcessToken @ 0x1406D0DBC
 * Callers:
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SeTokenIsWriteRestricted @ 0x140125C48 (SeTokenIsWriteRestricted.c)
 */

__int64 __fastcall SepNewTokenAsRestrictedAsProcessToken(_QWORD *Token, _DWORD *a2, _BYTE *a3)
{
  int v4; // esi
  _BYTE *v5; // r14
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // r13
  void *v12; // r14
  unsigned int v13; // ebp
  unsigned int v14; // esi
  __int64 v15; // r13
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  void *v18; // rax
  __int64 v19; // r12
  void *v22; // [rsp+60h] [rbp+18h]

  *a3 = 0;
  v4 = a2[50];
  v5 = a3;
  if ( ((v4 & 0x800) == 0 || (Token[25] & 0x800) != 0)
    && (!SeTokenIsRestricted(a2) || SeTokenIsRestricted(Token))
    && (!SeTokenIsWriteRestricted(a2) || SeTokenIsWriteRestricted(Token))
    && (!SeTokenIsRestricted(a2) || a2[32] >= *((_DWORD *)Token + 32))
    && (~*((_QWORD *)a2 + 9) & Token[9]) == 0LL
    && (~*((_QWORD *)a2 + 8) & Token[8]) == 0LL
    && (~v4 & (_DWORD)Token[25] & 0x1000) == 0 )
  {
    if ( SeTokenIsRestricted(a2) && (v7 = *((_DWORD *)Token + 32), v8 = 0, v7) )
    {
      v9 = a2[32];
      while ( 1 )
      {
        v10 = 0;
        if ( v9 )
        {
          v11 = *((_QWORD *)a2 + 20);
          v12 = *(void **)(Token[20] + 16LL * v8);
          do
          {
            if ( RtlEqualSid(v12, *(PSID *)(v11 + 16LL * v10)) )
              break;
            ++v10;
          }
          while ( v10 < v9 );
          v5 = a3;
        }
        if ( v10 == v9 )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      v13 = a2[31];
      v14 = 0;
      if ( !v13 )
      {
LABEL_32:
        *v5 = 1;
        return 0LL;
      }
      v15 = *((_QWORD *)a2 + 19);
      while ( 1 )
      {
        if ( (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x10) != 0 )
        {
          v16 = *((_DWORD *)Token + 31);
          v17 = 0;
          if ( v16 )
          {
            v18 = *(void **)(v15 + 16LL * v14);
            v19 = Token[19];
            v22 = v18;
            while ( !RtlEqualSid(v18, *(PSID *)(v19 + 16LL * v17)) )
            {
              v18 = v22;
              if ( ++v17 >= v16 )
                goto LABEL_31;
            }
            if ( (*(_DWORD *)(v19 + 16LL * v17 + 8) & 0x10) == 0 )
              break;
          }
        }
LABEL_31:
        if ( ++v14 >= v13 )
          goto LABEL_32;
      }
    }
  }
  *v5 = 0;
  return 3221225569LL;
}
