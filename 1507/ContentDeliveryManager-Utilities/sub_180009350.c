/*
 * XREFs of sub_180009350 @ 0x180009350
 * Callers:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009350(__int64 a1, DWORD a2)
{
  signed int v3; // ebx
  signed int LastError; // eax
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF

  if ( MsgWaitForMultipleObjectsEx(1u, (const HANDLE *)(a1 + 112), a2, 0x1CFFu, 6u) == -1 )
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      v3 = -2147467259;
  }
  else
  {
    v3 = 0;
  }
  while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
  {
    *(_BYTE *)(a1 + 96) = 1;
    TranslateMessage(&Msg);
    DispatchMessageW(&Msg);
    *(_BYTE *)(a1 + 96) = 0;
  }
  return (unsigned int)v3;
}
