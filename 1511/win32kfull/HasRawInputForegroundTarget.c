/*
 * XREFs of HasRawInputForegroundTarget @ 0x1C0082FA4
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0082E7C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 * Callees:
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 332LL) & 0x2000000) != 0 )
    {
      v6 = *(_QWORD *)(gpqForeground + 80LL);
      if ( v6 )
        v6 = *(_QWORD *)(v6 + 16);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 1072);
        if ( (v7 & 0x40000) != 0 && (v7 & 0x80000) == 0 && (v7 & 0x100000) == 0 )
        {
          v8 = *(_QWORD *)(v6 + 1232);
          if ( v8 )
          {
            v9 = *(_QWORD *)(gpqForeground + 72LL);
            if ( v9 )
              v9 = *(_QWORD *)(v9 + 16);
            if ( v9 && (*(_DWORD *)(v9 + 1072) & 0x200000) != 0 && v9 == *(_QWORD *)(v8 + 16) )
            {
              a1[1] = v9;
              v1 = 1;
              a1[2] = v8;
LABEL_28:
              *a1 = gpqForeground;
              return v1;
            }
          }
        }
      }
    }
    v3 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(gpqForeground + 56LL);
    if ( (unsigned int)HasHidTable(v4) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v4 + 376) + 784LL);
      if ( (*(_DWORD *)(v10 + 100) & 0x10) != 0 )
      {
        v11 = *(_QWORD *)(v10 + 72);
        v1 = 1;
        a1[1] = v4;
        a1[2] = v11;
        if ( !v11 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 72LL);
          goto LABEL_28;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL);
      }
    }
  }
  return v1;
}
