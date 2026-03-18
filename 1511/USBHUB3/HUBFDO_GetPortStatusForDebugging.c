/*
 * XREFs of HUBFDO_GetPortStatusForDebugging @ 0x1C000B1D4
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B420 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBFDO_GetPortStatusForDebugging(_QWORD *a1, int a2)
{
  __int64 i; // r8
  __int64 v4; // r8
  char v5; // al
  unsigned __int16 v6; // ax
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-30h]

  for ( i = a1[288]; ; i = *(_QWORD *)(v4 + 248) )
  {
    v4 = i - 248;
    if ( a1 + 288 == (_QWORD *)(v4 + 248) )
      break;
    if ( *(unsigned __int16 *)(v4 + 200) == a2 )
    {
      v5 = *(_BYTE *)(v4 + 168) & 0x1C;
      *(_BYTE *)(v4 + 169) = 0;
      *(_WORD *)(v4 + 172) = a2;
      *(_BYTE *)(v4 + 168) = v5 | 0xA3;
      if ( (*(_DWORD *)(v4 + 204) & 0x100) != 0 )
      {
        *(_WORD *)(v4 + 170) = 2;
        v6 = 8;
      }
      else
      {
        *(_WORD *)(v4 + 170) = 0;
        v6 = 4;
      }
      *(_WORD *)(v4 + 174) = v6;
      v7 = HUBMISC_ControlTransfer(
             (_DWORD)a1,
             a1[28],
             v4,
             (int)v4 + 16,
             (__int64)HUBFDO_GetPortStatusForDebuggingComplete,
             v4 + 184,
             v6,
             0,
             0);
      if ( v7 < 0 )
      {
        LODWORD(v8) = v7;
        WPP_RECORDER_SF_d(a1[308], 2u, 3u, 0x25u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v8);
      }
      return;
    }
  }
}
