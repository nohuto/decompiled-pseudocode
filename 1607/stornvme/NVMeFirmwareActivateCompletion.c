/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C000A100
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C00067E8 (NVMeControllerAsyncReset.c)
 */

char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rbp
  char v8; // bl
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // r8
  char v12; // dl

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  v8 = 1;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v9 = *(_QWORD *)(v4 + 64);
  else
    v9 = *(_QWORD *)(v4 + 24);
  if ( v5 )
  {
    v10 = *(unsigned __int16 *)(v5 + 14);
    v11 = (unsigned __int16)v10;
    LOWORD(v11) = ((unsigned __int16)v10 >> 9) & 7;
    LOBYTE(SrbExtension) = (_WORD)v11 == 0;
    if ( (unsigned __int8)((unsigned __int16)v10 >> 1) == 0 && (_WORD)v11 == 0 )
    {
      *(_DWORD *)(v6 + 20) |= 0x20u;
      v12 = 0;
      goto LABEL_8;
    }
    if ( (_WORD)v11 != 1 )
      goto LABEL_19;
    LODWORD(SrbExtension) = (unsigned __int8)(v10 >> 1);
    switch ( (_DWORD)SrbExtension )
    {
      case 6:
        *(_DWORD *)(v9 + 20) = 6;
        break;
      case 7:
        *(_DWORD *)(v9 + 20) = 7;
        break;
      case 0xB:
        goto LABEL_10;
      default:
        LODWORD(SrbExtension) = SrbExtension - 16;
        if ( (unsigned int)SrbExtension <= 1 )
        {
          v12 = (unsigned __int16)(unsigned __int8)((unsigned __int16)v10 >> 1) == 16;
          *(_DWORD *)(v6 + 20) |= 0x20u;
LABEL_8:
          LOBYTE(SrbExtension) = NVMeControllerAsyncReset(v6, v12, v11, a2);
          if ( (_BYTE)SrbExtension )
          {
            v8 = 0;
LABEL_21:
            *(_BYTE *)(v7 + 4245) ^= (*(_BYTE *)(v7 + 4245) ^ (8 * v8)) & 8;
            return SrbExtension;
          }
LABEL_10:
          *(_DWORD *)(v9 + 20) = 32;
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_21;
        }
LABEL_19:
        *(_DWORD *)(v9 + 20) = 16;
        break;
    }
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_21;
  }
  *(_DWORD *)(v9 + 20) = 16;
  *(_BYTE *)(v4 + 3) = 4;
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  return SrbExtension;
}
