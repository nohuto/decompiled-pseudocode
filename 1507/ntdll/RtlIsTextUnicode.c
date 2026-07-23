/*
 * XREFs of RtlIsTextUnicode @ 0x18005A420
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
  ULONG v15; // r15d
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
  int v28; // ebx
  unsigned int v30; // r9d
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  int v33; // [rsp+0h] [rbp-88h]
  int v34; // [rsp+4h] [rbp-84h]
  int v35; // [rsp+8h] [rbp-80h]
  int v36; // [rsp+Ch] [rbp-7Ch]
  int v37; // [rsp+10h] [rbp-78h]
  int v38; // [rsp+14h] [rbp-74h]
  int v39; // [rsp+18h] [rbp-70h]
  int v40; // [rsp+1Ch] [rbp-6Ch]
  int v41; // [rsp+20h] [rbp-68h]
  int v42; // [rsp+24h] [rbp-64h]
  int v43; // [rsp+28h] [rbp-60h]
  int v44; // [rsp+2Ch] [rbp-5Ch]
  ULONG v45; // [rsp+34h] [rbp-54h]

  v3 = 0;
  v4 = Size >> 1;
  v37 = 0;
  v6 = Size;
  v41 = 0;
  v35 = 0;
  v8 = 0;
  v43 = 0;
  v9 = 0;
  v42 = 0;
  v10 = 0;
  v40 = 0;
  v11 = 0;
  v34 = 0;
  v12 = 0;
  v33 = 0;
  v13 = 0;
  v44 = 0;
  v14 = 0;
  v39 = 0;
  v15 = 0;
  v38 = 0;
  v36 = 0;
  v45 = Size >> 1;
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
            ++v43;
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
            ++v40;
          }
          else if ( v21 == 0xFFFF )
          {
            ++v42;
          }
        }
      }
      else if ( v21 == 3328 )
      {
        ++v34;
      }
      else if ( (unsigned __int16)*v17 > 0x20u )
      {
        switch ( v21 )
        {
          case 0x900u:
            ++v44;
            break;
          case 0xA00u:
            ++v33;
            break;
          case 0xA0Du:
            ++v20;
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
            ++v41;
            break;
          case 0xDu:
            ++v37;
            break;
        }
      }
      else
      {
        ++v38;
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
  v36 = v20;
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
    v30 = 0;
    if ( v26 )
    {
      do
      {
        if ( NlsLeadByteInfoTable[*((unsigned __int8 *)Buffer + v30)] )
        {
          ++v27;
          ++v30;
        }
        ++v30;
      }
      while ( v30 < v26 );
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
  if ( NlsMbCodePageTag && v27 && Result && (*Result & 0x400) != 0 )
  {
    if ( v45 <= 0x100 )
      v31 = (unsigned __int64)v6 >> 1;
    else
      v31 = 256LL;
    v32 = (v31 >> 1) - 1;
    if ( v27 >= v32 / 3 )
    {
      LOBYTE(v3) = v27 < 2 * v32 / 3;
      v28 = v3 + 1;
    }
    else
    {
      v28 = 3;
    }
    v15 |= 0x400u;
  }
  else
  {
    v28 = 3;
  }
  if ( v28 * v12 < v13 )
    v15 |= 2u;
  if ( v28 * v13 < v12 )
    v15 |= 0x20u;
  if ( v37 + v41 + v35 + v8 + v43 )
    v15 |= 4u;
  if ( v34 + v33 + v39 + v44 )
    v15 |= 0x40u;
  if ( v42 + v40 + v38 + v36 || v14 && v14 >= v26 / 0x28 )
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
  if ( Result )
  {
    *Result &= v15;
    v15 = *Result;
  }
  return (v15 & 0xB08) == 8 || (v15 & 0xF0) == 0 && (v15 & 0xF00) == 0 && (v15 & 0xF00F) != 0;
}
