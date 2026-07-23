/*
 * XREFs of SepNewTokenAsRestrictedAsProcessToken @ 0x140474EDC
 * Callers:
 *     NtDuplicateToken @ 0x140411590 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14007F7D0 (SeTokenIsWriteRestricted.c)
 */

__int64 __fastcall SepNewTokenAsRestrictedAsProcessToken(_QWORD *Token, _DWORD *a2, _BYTE *a3)
{
  int v4; // esi
  _BYTE *v5; // r14
  unsigned int v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  void *v13; // rax
  __int64 v14; // r12
  unsigned int v15; // r12d
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  unsigned int v18; // esi
  __int64 v19; // r13
  void *v20; // r14
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
    if ( SeTokenIsRestricted(a2) && (v15 = *((_DWORD *)Token + 32), v16 = 0, v15) )
    {
      v17 = a2[32];
      while ( 1 )
      {
        v18 = 0;
        if ( v17 )
        {
          v19 = *((_QWORD *)a2 + 20);
          v20 = *(void **)(Token[20] + 16LL * v16);
          do
          {
            if ( RtlEqualSid(v20, *(PSID *)(v19 + 16LL * v18)) )
              break;
            ++v18;
          }
          while ( v18 < v17 );
          v5 = a3;
        }
        if ( v18 == v17 )
          break;
        if ( ++v16 >= v15 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v7 = a2[31];
      v8 = 0;
      if ( !v7 )
      {
LABEL_14:
        *v5 = 1;
        return 0LL;
      }
      v9 = *((_QWORD *)a2 + 19);
      while ( 1 )
      {
        if ( (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x10) != 0 )
        {
          v11 = *((_DWORD *)Token + 31);
          v12 = 0;
          if ( v11 )
          {
            v13 = *(void **)(v9 + 16LL * v8);
            v14 = Token[19];
            v22 = v13;
            while ( !RtlEqualSid(v13, *(PSID *)(v14 + 16LL * v12)) )
            {
              v13 = v22;
              if ( ++v12 >= v11 )
                goto LABEL_13;
            }
            if ( (*(_DWORD *)(v14 + 16LL * v12 + 8) & 0x10) == 0 )
              break;
          }
        }
LABEL_13:
        if ( ++v8 >= v7 )
          goto LABEL_14;
      }
    }
  }
  *v5 = 0;
  return 3221225569LL;
}
