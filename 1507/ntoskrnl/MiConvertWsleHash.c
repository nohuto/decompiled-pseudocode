/*
 * XREFs of MiConvertWsleHash @ 0x1401063E0
 * Callers:
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 * Callees:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiMapWsleHash @ 0x14003C764 (MiMapWsleHash.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiConvertWsleHash(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rcx
  signed __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rbx
  unsigned __int64 PteShadow; // rax
  __int64 PteTimeStamp; // rax
  __int64 v17; // r9
  __int64 updated; // rax
  __int64 v19; // r9
  unsigned __int64 result; // rax
  char v21; // cl
  int v22; // eax
  unsigned __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v3 + 4096;
  if ( v3 < v3 + 4096 )
  {
    v6 = 0xFFFFFFFFFLL;
    v7 = 0x58000000000LL;
    do
    {
      v8 = *(_QWORD *)v3;
      if ( (*(_QWORD *)v3 & 1) != 0 )
      {
        v9 = (_QWORD *)(*(_QWORD *)(v2 + 496) + *(_QWORD *)(v3 + 8) * *(unsigned int *)(v2 + 64));
        v10 = v8 & 0xFFFFFFFFFFFFLL;
        if ( (v8 & 0x800000000000LL) != 0 )
          v10 = v8 | 0xFFFF000000000000uLL;
        v11 = *(_QWORD *)(v2 + 96) + 8 * ((v10 - *(_QWORD *)(v2 + 80)) >> 12);
        if ( v11 >> 47 == -1 || v11 >> 47 == 0 )
        {
          v23 = (((unsigned __int64)v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          LODWORD(v12) = 4;
          while ( 1 )
          {
            v12 = (unsigned int)(v12 - 1);
            v13 = *(_QWORD *)*(&v23 + v12);
            if ( (v13 & 1) == 0 )
              break;
            if ( (unsigned int)v12 <= 1 && (v13 & 0x80u) != 0LL )
            {
              if ( (_DWORD)v12 )
                goto LABEL_12;
              break;
            }
            if ( !(_DWORD)v12 )
              goto LABEL_12;
          }
        }
        v22 = MiMapWsleHash(a1, v11);
        v6 = 0xFFFFFFFFFLL;
        v7 = 0x58000000000LL;
        if ( v22 )
        {
LABEL_12:
          *(_QWORD *)v11 = *(_QWORD *)(v3 + 8);
          v14 = (unsigned __int64 *)((((unsigned __int64)v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          PteShadow = *v14;
          if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(v14, *v14);
          PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(48 * (v6 & (PteShadow >> 12)) - v7 + 16));
          updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v17 + 16), PteTimeStamp + 1);
          *(_QWORD *)(v19 + 16) = updated;
          v6 = 0xFFFFFFFFFLL;
        }
        else
        {
          *v9 &= ~4uLL;
        }
      }
      v3 += 16LL;
    }
    while ( v3 < v5 );
  }
  result = MiDeletePteRange(a1, v4, v4 + 8, 0LL);
  v21 = *(_BYTE *)(a1 + 216);
  *(_QWORD *)(a1 + 160) -= result;
  if ( (v21 & 7) != 1 )
    return _InterlockedExchangeAdd64(&qword_14034FCF8, -(__int64)result);
  return result;
}
