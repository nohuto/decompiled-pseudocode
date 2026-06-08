/*
 * XREFs of ValidateAcpiCPC @ 0x1C001B460
 * Callers:
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0004320 (CpcRegisterIsSupported.c)
 */

__int64 __fastcall ValidateAcpiCPC(_DWORD *a1)
{
  unsigned int v1; // eax
  bool v2; // cc
  int v3; // edx
  unsigned int v4; // ebx
  const char *v5; // r11
  unsigned int v6; // edi
  _BYTE *v7; // r11
  char *v8; // r9
  char v9; // al
  bool v10; // zf
  int v11; // eax
  unsigned __int8 v12; // al
  _BYTE *v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // r10

  v1 = a1[1];
  if ( v1 == 1 && *a1 != 17 )
    return (unsigned int)-1073741823;
  v2 = v1 <= 2;
  if ( v1 == 2 )
  {
    if ( *a1 != 21 )
      return (unsigned int)-1073741823;
    v2 = 1;
  }
  if ( !v2 && *a1 < 0x15u )
    return (unsigned int)-1073741823;
  v4 = 0;
  if ( v1 == 1 )
  {
    v5 = "\b";
    v6 = 15;
  }
  else
  {
    v5 = (const char *)&Cpc2RegisterTable;
    v6 = 19;
  }
  v7 = v5 + 16;
  do
  {
    v3 = 0;
    v8 = (char *)a1 + *((unsigned int *)v7 - 4);
    v9 = *v8;
    if ( !*v8 && !*(_QWORD *)(v8 + 4) )
    {
      if ( v7[1] )
        goto LABEL_32;
      goto LABEL_31;
    }
    if ( v9 == 1 )
    {
      if ( !*((_DWORD *)v8 + 2) )
      {
        v11 = *((_DWORD *)v8 + 1);
        if ( (v11 & 0xFFFF0000) == 0 )
        {
          if ( v11 )
          {
            v12 = v8[1];
            if ( v12 )
            {
              if ( v12 + (unsigned __int8)v8[2] <= (unsigned __int8)v8[3] )
              {
LABEL_32:
                if ( v3 < 0 )
                  return (unsigned int)v3;
                goto LABEL_33;
              }
            }
          }
        }
      }
LABEL_31:
      v3 = -1073741811;
      goto LABEL_32;
    }
    if ( v9 != 10 )
    {
      if ( v9 == 126 )
      {
        v10 = *v7 == 0;
      }
      else
      {
        if ( v9 != 127 )
          return (unsigned int)-1073741637;
        if ( v8[3] != 64 )
          return (unsigned int)-1073741811;
        v10 = *(_QWORD *)(v8 + 4) == 0LL;
      }
      if ( v10 )
        return (unsigned int)-1073741811;
    }
LABEL_33:
    ++v4;
    v7 += 24;
  }
  while ( v4 < v6 );
  if ( (unsigned __int8)CpcRegisterIsSupported((__int64)(a1 + 17)) )
    return v14;
  if ( *v13 == 126 )
    return v14;
  v3 = -1073741823;
  if ( *(_QWORD *)(v15 + 72) == 1LL )
    return v14;
  return (unsigned int)v3;
}
