/*
 * XREFs of RtlIsTextUnicode @ 0x1800614B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // ebx
  ULONG v4; // eax
  ULONG v6; // r12d
  int v8; // r13d
  int v9; // r11d
  unsigned int v10; // edi
  unsigned int v11; // r9d
  unsigned int v12; // ebp
  unsigned int v13; // esi
  unsigned int v14; // r14d
  int v15; // r15d
  ULONG v16; // ecx
  _WORD *v17; // r10
  __int64 v18; // r14
  unsigned int v19; // r15d
  int v20; // r12d
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // edi
  PULONG v28; // rcx
  int v29; // ebx
  unsigned int v31; // r9d
  unsigned __int64 v32; // rax
  unsigned int v33; // ecx
  int v34; // [rsp+0h] [rbp-88h]
  int v35; // [rsp+4h] [rbp-84h]
  int v36; // [rsp+8h] [rbp-80h]
  int v37; // [rsp+Ch] [rbp-7Ch]
  int v38; // [rsp+10h] [rbp-78h]
  int v39; // [rsp+14h] [rbp-74h]
  int v40; // [rsp+18h] [rbp-70h]
  int v41; // [rsp+1Ch] [rbp-6Ch]
  int v42; // [rsp+20h] [rbp-68h]
  int v43; // [rsp+24h] [rbp-64h]
  int v44; // [rsp+28h] [rbp-60h]
  int v45; // [rsp+2Ch] [rbp-5Ch]
  ULONG v46; // [rsp+34h] [rbp-54h]

  v3 = 0;
  v4 = Size >> 1;
  v37 = 0;
  v6 = Size;
  v36 = 0;
  v35 = 0;
  v8 = 0;
  v34 = 0;
  v9 = 0;
  v45 = 0;
  v10 = 0;
  v44 = 0;
  v11 = 0;
  v41 = 0;
  v12 = 0;
  v40 = 0;
  v13 = 0;
  v38 = 0;
  v14 = 0;
  v39 = 0;
  v15 = 0;
  v42 = 0;
  v43 = 0;
  v46 = Size >> 1;
  if ( Size >> 1 > 0x100 )
  {
    v16 = 256;
  }
  else
  {
    v16 = Size >> 1;
    if ( !v4 )
      goto LABEL_87;
  }
  if ( Size == 2 )
  {
    if ( !*(_WORD *)Buffer || *((_BYTE *)Buffer + 1) )
      goto LABEL_9;
LABEL_87:
    if ( Result )
      *Result = 5;
    return 0;
  }
  if ( Size > 2 && v4 <= 0x100 && (Size & 1) == 0 && (*((_WORD *)Buffer + v16 - 1) & 0xFF00) == 0 )
    --v16;
LABEL_9:
  if ( !v16 )
  {
LABEL_26:
    --v9;
    goto LABEL_27;
  }
  v17 = Buffer;
  v18 = v16;
  v19 = 0;
  v20 = 0;
  do
  {
    v21 = (unsigned __int16)*v17;
    if ( v21 < 0x21 || (unsigned __int16)*v17 >= 0x900u )
    {
      if ( (unsigned __int16)*v17 > 0xD00u )
      {
        if ( (unsigned __int16)*v17 <= 0x3000u )
        {
          if ( v21 == 12288 )
          {
            ++v34;
          }
          else if ( v21 == 0x2000 )
          {
            ++v39;
          }
        }
        else if ( v21 != 65279 )
        {
          if ( v21 == 65534 )
          {
            ++v44;
          }
          else if ( v21 == 0xFFFF )
          {
            ++v45;
          }
        }
      }
      else if ( v21 == 3328 )
      {
        ++v41;
      }
      else if ( (unsigned __int16)*v17 > 0x20u )
      {
        switch ( v21 )
        {
          case 0x900u:
            ++v38;
            break;
          case 0xA00u:
            ++v40;
            break;
          case 0xA0Du:
            ++v43;
            break;
        }
      }
      else if ( v21 == 32 )
      {
        ++v8;
      }
      else if ( *v17 )
      {
        switch ( v21 )
        {
          case 9u:
            ++v35;
            break;
          case 0xAu:
            ++v36;
            break;
          case 0xDu:
            ++v37;
            break;
        }
      }
      else
      {
        ++v20;
      }
    }
    v22 = *(unsigned __int8 *)v17;
    LOWORD(v21) = BYTE1(v21);
    v23 = (unsigned __int8)v21;
    if ( v22 == 13 )
    {
      if ( v11 == 10 )
        ++v19;
    }
    else if ( v22 == 10 && v11 == 13 )
    {
      ++v19;
    }
    v9 += ((_BYTE)v21 == 0) + (v22 == 0);
    if ( (unsigned __int8)v21 > v11 )
      v21 = (unsigned __int8)v21;
    else
      v21 = v11;
    if ( v11 >= v23 )
      v11 = v23;
    v24 = v10;
    v12 += v21 - v11;
    v11 = v23;
    v25 = *(unsigned __int8 *)v17;
    if ( v22 > v10 )
    {
      v24 = *(unsigned __int8 *)v17;
      v25 = v10;
    }
    ++v17;
    v10 = v22;
    v13 += v24 - v25;
    --v18;
  }
  while ( v18 );
  v42 = v20;
  if ( v22 != 13 )
  {
    if ( v22 == 10 && v23 == 13 )
      goto LABEL_106;
LABEL_24:
    v14 = v19;
    goto LABEL_25;
  }
  if ( v23 != 10 )
    goto LABEL_24;
LABEL_106:
  v14 = v19 + 1;
LABEL_25:
  v15 = 0;
  v6 = Size;
  if ( !v23 )
    goto LABEL_26;
  if ( v23 == 26 )
    ++v14;
LABEL_27:
  v26 = v6;
  v27 = 0;
  if ( v6 > 0x200 )
    v26 = 512;
  if ( NlsMbCodePageTag )
  {
    v31 = 0;
    if ( v26 )
    {
      do
      {
        if ( NlsLeadByteInfoTable[*((unsigned __int8 *)Buffer + v31)] )
        {
          ++v27;
          ++v31;
        }
        ++v31;
      }
      while ( v31 < v26 );
      v6 = Size;
    }
  }
  if ( v13 < 0x7F )
  {
    if ( !v12 )
    {
      v15 = 1;
      goto LABEL_32;
    }
  }
  else if ( !v12 )
  {
    goto LABEL_32;
  }
  if ( !v13 )
    v15 = 16;
LABEL_32:
  v28 = Result;
  if ( NlsMbCodePageTag && v27 && Result && (*Result & 0x400) != 0 )
  {
    if ( v46 <= 0x100 )
      v32 = (unsigned __int64)v6 >> 1;
    else
      v32 = 256LL;
    v33 = (v32 >> 1) - 1;
    if ( v27 >= v33 / 3 )
    {
      LOBYTE(v3) = v27 < 2 * v33 / 3;
      v29 = v3 + 1;
    }
    else
    {
      v29 = 3;
    }
    v28 = Result;
    v15 |= 0x400u;
  }
  else
  {
    v29 = 3;
  }
  if ( v29 * v12 < v13 )
    v15 |= 2u;
  if ( v29 * v13 < v12 )
    v15 |= 0x20u;
  if ( v37 + v36 + v35 + v8 + v34 )
    v15 |= 4u;
  if ( v41 + v40 + v39 + v38 )
    v15 |= 0x40u;
  if ( v45 + v44 + v43 + v42 || v14 && v14 >= v26 / 0x28 )
    v15 |= 0x100u;
  if ( (v6 & 1) != 0 )
    v15 |= 0x200u;
  if ( v9 )
    v15 |= 0x1000u;
  if ( *(_WORD *)Buffer == 0xFEFF )
  {
    v15 |= 8u;
  }
  else if ( *(_WORD *)Buffer == 0xFFFE )
  {
    v15 |= 0x80u;
  }
  if ( v28 )
  {
    *v28 &= v15;
    v15 = *v28;
  }
  return (v15 & 0xB08) == 8 || (v15 & 0xF0) == 0 && (v15 & 0xF00) == 0 && (v15 & 0xF00F) != 0;
}
