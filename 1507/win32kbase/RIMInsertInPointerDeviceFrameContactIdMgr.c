/*
 * XREFs of RIMInsertInPointerDeviceFrameContactIdMgr @ 0x1C00C3FB0
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMInsertInPointerDeviceFrameContactIdMgr(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 *v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a3 + 696);
  v5 = 0;
  v6 = a2 % *(_DWORD *)(a3 + 704);
  v7 = *(__int64 **)(*(_QWORD *)(v3 + 48) + 8 * v6);
  if ( !v7 )
    goto LABEL_5;
  do
  {
    if ( *((_DWORD *)v7 + 2) == a2 )
      break;
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  if ( !v7 )
  {
LABEL_5:
    v8 = Win32AllocPoolZInit(0x10uLL);
    if ( v8 )
    {
      v8[2] = a2;
      v5 = 1;
      v9 = *(_QWORD *)(v3 + 48);
      *(_QWORD *)v8 = *(_QWORD *)(v9 + 8 * v6);
      *(_QWORD *)(v9 + 8 * v6) = v8;
    }
  }
  return v5;
}
