/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C00091C0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1C0004E88 (NVMeControllerReset.c)
 */

char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // cl
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  v7 = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - v7 + 4096;
  if ( v5 == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  if ( a3 )
  {
    v9 = *(unsigned __int16 *)(a3 + 14);
    LOWORD(v7) = ((unsigned __int16)v9 >> 9) & 7;
    if ( !(_WORD)v7 && (v9 & 0x1FE) == 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      LOBYTE(v7) = NVMeControllerReset(a1, 0);
      goto LABEL_14;
    }
    if ( (_WORD)v7 == 1 )
    {
      v10 = (unsigned __int8)(v9 >> 1) - 6;
      if ( !v10 )
      {
        *(_DWORD *)(v8 + 20) = 6;
        goto LABEL_23;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        *(_DWORD *)(v8 + 20) = 7;
        goto LABEL_23;
      }
      v12 = v11 - 4;
      if ( !v12 )
      {
        *(_DWORD *)(v8 + 20) = 32;
        goto LABEL_15;
      }
      if ( v12 == 5 )
      {
        *(_DWORD *)(a1 + 20) |= 0x20u;
        LOBYTE(v7) = NVMeControllerReset(a1, 1);
        if ( (_BYTE)v7 )
        {
LABEL_14:
          *(_DWORD *)(v8 + 20) = 0;
LABEL_15:
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_24;
        }
      }
    }
    *(_DWORD *)(v8 + 20) = 16;
LABEL_23:
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_24;
  }
  *(_DWORD *)(v8 + 20) = 16;
  *(_BYTE *)(a2 + 3) = 4;
LABEL_24:
  *(_BYTE *)(v6 + 4186) = 1;
  return v7;
}
