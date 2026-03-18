/*
 * XREFs of HasRawInputForegroundTarget @ 0x14017238C
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1401721D0 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v2 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 436) & 0x2000000) != 0 )
    {
      v10 = *(_QWORD *)(v4 + 128);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 1360) & 0x1C0000) == 0x40000LL )
          {
            v12 = *(_QWORD *)(v11 + 1592);
            if ( v12 )
            {
              v13 = *(_QWORD *)(v4 + 120);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 16);
                if ( v14 )
                {
                  if ( (*(_DWORD *)(v14 + 1360) & 0x200000) != 0 && v14 == *(_QWORD *)(v12 + 16) )
                  {
                    a1[1] = v14;
                    v2 = 1;
                    a1[2] = v12;
LABEL_21:
                    *a1 = v4;
                    return v2;
                  }
                }
              }
            }
          }
        }
      }
    }
    v5 = *(_QWORD *)(v4 + 128);
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 16);
    else
      v6 = *(_QWORD *)(v4 + 104);
    if ( (unsigned int)HasHidTable(v6) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 456) + 824LL);
      if ( (*(_DWORD *)(v7 + 100) & 0x10) != 0 )
      {
        v8 = *(_QWORD *)(v7 + 72);
        v2 = 1;
        a1[1] = v6;
        a1[2] = v8;
        if ( !v8 )
        {
          a1[2] = *(_QWORD *)(v4 + 120);
          goto LABEL_21;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 464LL);
      }
    }
  }
  return v2;
}
