/*
 * XREFs of ?UpdatePointerIds@PointerProcessor@@AEAAJW4InputType@@PEAPEAUPointer@@K@Z @ 0x18005E530
 * Callers:
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall PointerProcessor::UpdatePointerIds(__int64 a1, char a2, _DWORD **a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdi
  unsigned __int16 v8; // r14
  _DWORD *v9; // r8
  int v10; // r9d
  __int64 v11; // rcx
  _DWORD *v12; // rax
  int v13; // esi
  unsigned int v14; // r15d
  char v15; // r10
  __int64 v16; // rax
  _DWORD *v17; // r11
  _DWORD *v18; // rcx
  unsigned int i; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *v22; // rcx
  char v23; // di
  int v24; // r9d

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( a4 == 1 )
    {
      **a3 = 1;
    }
    else
    {
      v4 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 603, 255);
    }
    return v4;
  }
  v7 = 0LL;
  if ( !a4 )
    return v4;
  v8 = PointerProcessor::s_usNextPointerId;
  v9 = (_DWORD *)(a1 + 80);
  while ( 1 )
  {
    v10 = *a3[v7];
    if ( v10 == v9[20] )
    {
LABEL_12:
      if ( v8 == 0xFFFF )
        v8 = 2;
      v13 = v9[20];
      v4 = 0;
      v11 = v8;
      v14 = 0;
      ++v8;
      v15 = 0;
      PointerProcessor::s_usNextPointerId = v8;
      if ( v10 == v13 )
      {
        v23 = 87;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 133, 87);
        v4 = -2147024809;
      }
      else
      {
        v16 = 0LL;
        v17 = v9;
        do
        {
          if ( *v17 == v10 )
            goto LABEL_23;
          if ( !v15 && *v17 == v13 )
          {
            v14 = v16;
            v15 = 1;
          }
          v16 = (unsigned int)(v16 + 1);
          v17 += 2;
        }
        while ( (unsigned int)v16 < 0xA );
        if ( v15 )
        {
          v16 = v14;
          v9[2 * v14] = v10;
LABEL_23:
          v9[2 * v16 + 1] = v11;
          goto LABEL_24;
        }
        v4 = -2147467259;
        v23 = 5;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 163, 5);
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v24 = 621;
      goto LABEL_53;
    }
    v11 = 0LL;
    v12 = v9;
    while ( *v12 != v10 )
    {
      v11 = (unsigned int)(v11 + 1);
      v12 += 2;
      if ( (unsigned int)v11 >= 0xA )
        goto LABEL_12;
    }
    v4 = 0;
    if ( v10 == v9[20] )
      break;
    v21 = 0LL;
    v22 = v9;
    while ( *v22 != v10 )
    {
      v21 = (unsigned int)(v21 + 1);
      v22 += 2;
      if ( (unsigned int)v21 >= 0xA )
      {
        v4 = -2147467259;
        v23 = 5;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        Template_qqq((__int64)v22, &MinInput_Warning_CheckResult, 0, 113, 5);
        goto LABEL_44;
      }
    }
    LODWORD(v11) = v9[2 * v21 + 1];
LABEL_24:
    *a3[v7] = v11;
    if ( !a3[v7][1] )
    {
      v4 = 0;
      v18 = v9;
      for ( i = 0; i < 0xA; ++i )
      {
        if ( *v18 == v10 )
        {
          v9[2 * i] = v9[20];
          goto LABEL_39;
        }
        v18 += 2;
      }
      v4 = -2147467259;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq((__int64)v18, &MinInput_Warning_CheckResult, 0, 193, 5);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v20, &MinInput_Warning_CheckResult, 0, 627, 5);
      }
      return v4;
    }
LABEL_39:
    v7 = (unsigned int)(v7 + 1);
    if ( (_DWORD)v7 == a4 )
      return v4;
  }
  v23 = 87;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 96, 87);
  v4 = -2147024809;
LABEL_44:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v24 = 616;
LABEL_53:
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, v24, v23);
  }
  return v4;
}
