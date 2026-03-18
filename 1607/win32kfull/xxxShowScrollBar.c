/*
 * XREFs of xxxShowScrollBar @ 0x1C0111EC0
 * Callers:
 *     NtUserShowScrollBar @ 0x1C0111E10 (NtUserShowScrollBar.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     _InitPwSB @ 0x1C00AFCC8 (_InitPwSB.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v10; // ecx
  int v11; // edx

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v11 = v7 - 1;
      if ( !v11 )
      {
        LOBYTE(v3) = a3 != 0;
        xxxShowWindowEx(a1, a3 != 0, v3 & 0x10000 | gdwPUDFlags & 0x10000);
        return 1LL;
      }
      if ( v11 == 1 )
        v6 = 3145728;
    }
    else
    {
      v6 = 0x200000;
    }
  }
  else
  {
    v6 = 0x100000;
  }
  if ( !a3 )
  {
    v8 = *((_DWORD *)a1 + 13);
    if ( (v8 & v6) == 0 )
      return 1LL;
    *((_DWORD *)a1 + 13) = v8 & ~v6;
LABEL_17:
    xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
    return 1LL;
  }
  v10 = *((_DWORD *)a1 + 13);
  if ( (v6 & v10) != v6 )
  {
    v5 = 1;
    *((_DWORD *)a1 + 13) = v6 | v10;
  }
  if ( !*((_QWORD *)a1 + 22) )
    InitPwSB((__int64)a1);
  if ( v5 )
    goto LABEL_17;
  return 1LL;
}
