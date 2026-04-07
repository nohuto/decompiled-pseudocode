/*
 * XREFs of Template_z @ 0x18007CCD0
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180016D78 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_z(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  int v4; // ecx
  const wchar_t *v5; // rax
  const wchar_t *v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v8 = v4;
  v5 = L"NULL";
  if ( a3 )
    v5 = a3;
  v9 = 0;
  v7 = v5;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmSecondaryWindowBrushSnapshot_Info, 1LL, &v7);
}
