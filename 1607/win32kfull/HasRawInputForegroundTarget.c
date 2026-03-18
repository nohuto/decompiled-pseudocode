/*
 * XREFs of HasRawInputForegroundTarget @ 0x1C00A431C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00A420C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 340LL) & 0x2000000) != 0 )
    {
      v8 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v8 )
        v8 = *(_QWORD *)(v8 + 16);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 1096);
        if ( (v9 & 0x40000) != 0 && (v9 & 0x80000) == 0 && (v9 & 0x100000) == 0 )
        {
          v10 = *(_QWORD *)(v8 + 1256);
          if ( v10 )
          {
            v11 = *(_QWORD *)(gpqForeground + 80LL);
            if ( v11 )
              v11 = *(_QWORD *)(v11 + 16);
            if ( v11 && (*(_DWORD *)(v11 + 1096) & 0x200000) != 0 && v11 == *(_QWORD *)(v10 + 16) )
            {
              a1[1] = v11;
              v1 = 1;
              a1[2] = v10;
LABEL_28:
              *a1 = gpqForeground;
              return v1;
            }
          }
        }
      }
    }
    v3 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(gpqForeground + 64LL);
    if ( (unsigned int)HasHidTable(v4) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 376) + 776LL);
      if ( (*(_DWORD *)(v6 + 100) & 0x10) != 0 )
      {
        v7 = *(_QWORD *)(v6 + 72);
        v1 = 1;
        a1[1] = v4;
        a1[2] = v7;
        if ( !v7 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 80LL);
          goto LABEL_28;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 384LL);
      }
    }
  }
  return v1;
}
