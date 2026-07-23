/*
 * XREFs of SepAdjustGroups @ 0x1404763C0
 * Callers:
 *     NtAdjustGroupsToken @ 0x140476094 (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 */

__int64 __fastcall SepAdjustGroups(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char *DestinationSid,
        _DWORD *a8,
        _DWORD *a9,
        bool *a10)
{
  unsigned int v11; // esi
  unsigned int v13; // ecx
  char v14; // r10
  ULONG v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // al
  unsigned int v21; // r13d
  PSID v22; // rbp
  _DWORD *v23; // r15
  __int64 v25; // rax
  int v26; // ecx
  ULONG v27; // ebp
  int v28; // eax
  bool v29; // r15
  bool v30; // al
  ULONG v31; // ebp
  __int64 v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-68h]
  int v34; // [rsp+24h] [rbp-64h]
  PSID Sid1[2]; // [rsp+28h] [rbp-60h]
  ULONG v36; // [rsp+90h] [rbp+8h]
  char v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]
  char v40; // [rsp+D0h] [rbp+48h]

  v39 = a4;
  v38 = a3;
  v11 = 0;
  v13 = 0;
  v14 = a2;
  v15 = 0;
  v33 = 0;
  *a9 = 0;
  v16 = 1;
  v36 = 0;
  v34 = 1;
  if ( *(_DWORD *)(a1 + 124) <= 1u )
    goto LABEL_11;
  do
  {
    v17 = v16;
    v18 = *(_QWORD *)(a1 + 152);
    v19 = 2 * v17;
    *(_OWORD *)Sid1 = *(_OWORD *)(v18 + 8 * v19);
    if ( !a3 )
    {
      v20 = 0;
      v21 = 0;
      v40 = 0;
      if ( !a4 )
        goto LABEL_9;
      v22 = Sid1[0];
      v23 = (_DWORD *)(a5 + 8);
      while ( !v20 )
      {
        if ( RtlEqualSid(v22, *((PSID *)v23 - 1)) )
        {
          v25 = *(_QWORD *)(a1 + 152);
          ++v33;
          v40 = 1;
          v26 = *(_DWORD *)(v25 + 8 * v19 + 8);
          if ( ((*(_BYTE *)v23 ^ *(_BYTE *)(v25 + 8 * v19 + 8)) & 4) != 0 )
          {
            if ( (v26 & 1) != 0 )
              return 3221225565LL;
            if ( (v26 & 0x10) != 0 )
              return 3221226163LL;
            v27 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v36 += v27;
            if ( a2 )
            {
              if ( a6 )
              {
                *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
                RtlCopySid(v27, DestinationSid, Sid1[0]);
                DestinationSid += v27;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v19 + 8) &= ~(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v19 + 8) & 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v19 + 8) |= *v23 & 4;
            }
            ++*a9;
            v22 = Sid1[0];
          }
        }
        a4 = v39;
        ++v21;
        v20 = v40;
        v23 += 4;
        if ( v21 >= v39 )
          goto LABEL_8;
      }
      goto LABEL_8;
    }
    v28 = *(_DWORD *)(v18 + 8 * v19 + 8) & 6;
    v29 = v28 == 2;
    v30 = v28 == 4;
    if ( v29 || v30 )
    {
      v31 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
      v36 = v31 + v15;
      if ( v14 )
      {
        if ( a6 )
        {
          *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
          *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
          RtlCopySid(v31, DestinationSid, Sid1[0]);
          a4 = v39;
          DestinationSid += v31;
        }
        v32 = *(_QWORD *)(a1 + 152);
        if ( v29 )
          *(_DWORD *)(v32 + 8 * v19 + 8) |= 4u;
        else
          *(_DWORD *)(v32 + 8 * v19 + 8) &= ~4u;
      }
      ++*a9;
LABEL_8:
      a3 = v38;
    }
LABEL_9:
    v15 = v36;
    v16 = v34 + 1;
    v14 = a2;
    v34 = v16;
  }
  while ( v16 < *(_DWORD *)(a1 + 124) );
  v13 = v33;
LABEL_11:
  if ( !a3 && v13 < a4 )
    v11 = 262;
  *a10 = *a9 && v14;
  if ( a6 )
    *a8 = 16 * *a9 + 8 + v15;
  return v11;
}
