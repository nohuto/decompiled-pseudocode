/*
 * XREFs of AuthzBasepValidateSecurityAttributes @ 0x14007C914
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepValidateSecurityAttributes(__int64 a1, _DWORD *a2)
{
  int v3; // r8d
  bool v4; // r14
  unsigned int v5; // esi
  __int64 v6; // r9
  unsigned int v7; // ebp
  int v8; // eax
  int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  __int64 v13; // rdx
  unsigned __int16 v14; // di
  unsigned __int16 v15; // bx
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // eax
  __int64 v20; // r11
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  __int64 v23; // rbx
  unsigned __int16 v24; // di
  unsigned __int16 v25; // ax

  v3 = 0;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v4 = *a2 == 1;
  if ( *(_WORD *)(a1 + 2) )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 4);
  if ( *a2 != 1 )
  {
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( !v5 && *(_QWORD *)(a1 + 8) )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    if ( v5 )
      return (unsigned int)-1073741811;
  }
LABEL_6:
  v7 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !*(_WORD *)(v6 + 40LL * v7)
        || !*(_WORD *)(v6 + 40LL * v7 + 2)
        || !*(_QWORD *)(v6 + 40LL * v7 + 8)
        || *(_WORD *)(v6 + 40LL * v7 + 18)
        || (*(_DWORD *)(v6 + 40LL * v7 + 20) & 0xFF80) != 0 )
      {
        return (unsigned int)-1073741811;
      }
      if ( v7 )
      {
        if ( v4 )
          goto LABEL_14;
        v10 = a2[v7];
        if ( v10 == 1 )
          return (unsigned int)-1073741811;
        if ( v10 != 2 )
          goto LABEL_14;
      }
      else if ( !v4 )
      {
        goto LABEL_14;
      }
      if ( !*(_DWORD *)(v6 + 40LL * v7 + 24) )
        return (unsigned int)-1073741811;
LABEL_14:
      v8 = *(unsigned __int16 *)(v6 + 40LL * v7 + 16);
      if ( !*(_WORD *)(v6 + 40LL * v7 + 16) )
        goto LABEL_43;
      if ( *(unsigned __int16 *)(v6 + 40LL * v7 + 16) <= 2u )
      {
        if ( !*(_DWORD *)(v6 + 40LL * v7 + 24) || *(_QWORD *)(v6 + 40LL * v7 + 32) )
          goto LABEL_18;
        goto LABEL_43;
      }
      switch ( v8 )
      {
        case 3:
          v11 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v11 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v12 = 0;
          if ( v11 )
          {
            v13 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( 1 )
            {
              v14 = *(_WORD *)(v13 + 16LL * v12);
              if ( !v14 )
                break;
              v15 = *(_WORD *)(v13 + 16LL * v12 + 2);
              if ( !v15 || v14 > v15 || !*(_QWORD *)(v13 + 16LL * v12 + 8) )
                break;
              if ( ++v12 >= v11 )
                goto LABEL_18;
            }
LABEL_43:
            v3 = -1073741811;
          }
          break;
        case 6:
          v16 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v16 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v17 = 0;
          if ( v16 )
          {
            while ( *(_QWORD *)(*(_QWORD *)(v6 + 40LL * v7 + 32) + 8LL * v17) <= 1uLL )
            {
              if ( ++v17 >= v16 )
                goto LABEL_18;
            }
            goto LABEL_43;
          }
          break;
        case 4:
          v21 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v21 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v22 = 0;
          if ( v21 )
          {
            v23 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( 1 )
            {
              v24 = *(_WORD *)(v23 + 24LL * v22 + 8);
              if ( !v24 )
                goto LABEL_43;
              v25 = *(_WORD *)(v23 + 24LL * v22 + 10);
              if ( !v25 || v24 > v25 || !*(_QWORD *)(v23 + 24LL * v22 + 16) )
                goto LABEL_43;
              if ( ++v22 >= v21 )
                goto LABEL_18;
            }
          }
          break;
        case 5:
        case 16:
          v18 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v18 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v19 = 0;
          if ( v18 )
          {
            v20 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( *(_DWORD *)(v20 + 16LL * v19 + 8) && *(_QWORD *)(v20 + 16LL * v19) )
            {
              if ( ++v19 >= v18 )
                goto LABEL_18;
            }
            goto LABEL_43;
          }
          break;
        default:
          goto LABEL_43;
      }
LABEL_18:
      if ( v3 >= 0 && ++v7 < v5 )
        continue;
      return (unsigned int)v3;
    }
  }
  return (unsigned int)v3;
}
